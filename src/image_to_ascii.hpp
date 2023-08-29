#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include "bitmap.h" //https://github.com/kbuffardi/Bitmap
class image_to_ascii
{
private:
    std::string filepath;
    std::string gray_map = "`.-':_,^=;><+!rc*/z?sLTv)J7(|Fi{C}fI31tlu[neoZ5Yxjya]2ESwqkP6h9d4VpOGbUAKXHm8RD#$Bg0MNWQ%&@";
    std::string filename;
    Bitmap image;
    std::vector<std::vector<Pixel>> bmp;
    Pixel rgb;
    std::ofstream fout;
    std::string ext;
    int coef, gcd;
    std::vector<int> divisors;

public:
    image_to_ascii(std::string filepath) // this constructor moves the file to current directory and converts it to .bmp
    {
        this->filepath = filepath;
        system(("mv " + filepath + " . ").c_str());

        while (filepath.back() != '.')
        {
            ext.insert(ext.begin(), filepath.back());
            filepath.pop_back();
        }
        while (filepath.back() != '/')
        {
            int coef;
            filename.pop_back();
            std::string command = ("convert " + this->filename + "." + ext + " +matte " + this->filename + ".bmp" + " > /dev/null 2>&1");
            system(command.c_str());
        }
    }
    std::vector<std::vector<Pixel>> simplify(const std::vector<std::vector<Pixel>> &matrix, int coef)
    {
        int rows = matrix.size();
        int cols = matrix[0].size();
        std::vector<std::vector<Pixel>> simplified;

        for (int i = 0; i < rows; i += coef)
        {
            std::vector<Pixel> row;
            for (int j = 0; j < cols; j += coef)
            {
                double sum = 0;
                int count = 0;
                for (int x = i; x < i + coef && x < rows; ++x)
                {
                    for (int y = j; y < j + coef && y < cols; ++y)
                    {
                        rgb = bmp[i][j];
                        double grayscale = 0.299 * rgb.red + 0.587 * rgb.green + 0.114 * rgb.blue;
                        sum += grayscale;
                        count++;
                    }
                }
                int average = sum / count;
                rgb.blue = average;
                rgb.green = average;
                rgb.red = average;
                row.push_back(rgb);
            }
            simplified.push_back(row);
        }

        return simplified;
    }
    void ask_for_coeficient()
    {
        for (int i = 1; i <= gcd; ++i)
            if (gcd % i == 0)
                divisors.push_back(i);

        std::cout << "type the scaling factor : {";
        for (auto f : divisors)
            std::cout << f << " ";
        std::cout << "}";
        std::cin >> coef;
    }
    void app()
    {
        fout.open("output.txt");
        image.open(filename + ".bmp");

        std::cout << "do you want to scale down the image? type y/n";
        char ch;
        std::cin >> ch;
        bmp = image.toPixelMatrix();
        if (ch == 'n')
        {
            for (int i = 0; i < bmp.size(); ++i)
            {
                for (int j = 0; j < bmp[i].size(); ++j)
                {
                    rgb = bmp[i][j];
                    double grayscale = 0.299 * rgb.red + 0.587 * rgb.green + 0.114 * rgb.blue;
                    char graychar = gray_map[ceil(gray_map.size() - 1) * grayscale / 255];
                    fout << graychar;
                }
                fout << '\n';
            }
        }
        else
        {
            gcd = std::__gcd(bmp.size(), bmp[0].size());
            ask_for_coeficient();

            for (auto f : divisors)
                if (coef == f)
                {
                    auto f = simplify(bmp, coef);
                    for (auto row : f)
                    {
                        for (auto col : row)
                        {
                            auto val = col;
                            int grayscale = val.red;
                            char graychar = gray_map[ceil(gray_map.size() - 1) * grayscale / 255];
                            fout << graychar;
                        }
                        fout << '\n';
                    }
                }
        }
        std::cout << "done!";
        fout.close();
    }
};