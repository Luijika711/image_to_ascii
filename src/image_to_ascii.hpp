#include <iostream>
#include <fstream>
#include <cmath>
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
            this->filename.insert(this->filename.begin(), filepath.back());
            filepath.pop_back();
        }
        this->filename.pop_back();
        std::string command = ("convert " + this->filename + "." + ext + " +matte " + this->filename + ".bmp" + " > /dev/null 2>&1");
        system(command.c_str());
    }
    void app()
    {
        fout.open("output.txt");
        image.open(filename + ".bmp");
        if (image.isImage())
        {
            bmp = image.toPixelMatrix();
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
        fout.close();
    }
};