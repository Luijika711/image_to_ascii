#include <iostream>
#include "bitmap.h"
#include <vector>
#include <fstream>
class ascii_to_image
{
private:
    std::string gray_map = "`.-':_,^=;><+!rc*/z?sLTv)J7(|Fi{C}fI31tlu[neoZ5Yxjya]2ESwqkP6h9d4VpOGbUAKXHm8RD#$Bg0MNWQ%&@";
    std::ifstream fin;
    std::vector<std::vector<char>> mat;
    std::vector<std::vector<Pixel>> bmp;
    Pixel rgb;
    int n, m;
    Bitmap output;
    std::string row;

public:
    ascii_to_image(std::string filepath)
    {
        fin.open(filepath);

        int max_len = 0;
        while (fin >> row)
        {
            if (row.size() > max_len)
                max_len = row.size();

            std::vector<char> vec;
            for (auto ch : row)
                vec.push_back(ch);
            mat.push_back(vec);
        }
        bmp.resize(mat.size());
        for (auto &row : mat)
        {
            while (row.size() != max_len)
                row.push_back(row.back());
        }
        for (auto &row : bmp)
            row.resize(max_len);

        n = mat.size();
        m = max_len;
    }
    void app()
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                int value = 0;

                int it = 0;
                for (it = 0; it < gray_map.size(); ++it)
                    if (mat[i][j] == gray_map[it])
                        break;
                (it > gray_map.size() / 2) ? it -= gray_map.size() / 2 : it += gray_map.size() / 2;

                value = 255 * it / 70;
                value %= 255;
                rgb.red = value;
                rgb.blue = value;
                rgb.green = value;
                bmp[i][j] = rgb;
            }
        }
        output.fromPixelMatrix(bmp);
        output.save("output_file.bmp");
        std::cout << "done!";
    }
};