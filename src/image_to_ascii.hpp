#include <iostream>
#include <fstream>
#include <cmath>
#include "bitmap.h" //https://github.com/kbuffardi/Bitmap
class image_to_ascii
{
private:
    std::string filepath;
    const std::string gray_map = "$@B%8&WM#*oahkbdpqwmZO0QLCJUYXzcvunxrjft/\\|()1{}[]?-_+~<>i!lI;:,\"^`'.";

    std::string filename;

public:
    image_to_ascii(std::string filepath)
    {
        // moves image to current directory and converts it to .bmp
        this->filepath = filepath;
        system(("mv " + filepath + " . ").c_str());
        std::string ext;
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
        std::cout << "\n\n" + command + "\n\n";
        std::cout << "started image to ascii on " + filename;
    }
    void app()
    {
        Bitmap image;
        std::vector<std::vector<Pixel>> bmp;
        Pixel rgb;
        image.open(filename + ".bmp");
        if (image.isImage())
        {
            bmp = image.toPixelMatrix();
            std::ofstream fout("output.txt");
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
    }
};