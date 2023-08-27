#include <iostream>
#include "src/ascii_to_image.h"
#include "src/image_to_ascii.h"
#include <string>
int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        int idx = 0;
        while (argv[argc - 1][idx] != '\0')
            idx++;
        std::string filepath;
        filepath = argv[argc - 1];
        if (argv[argc - 1][idx - 1] == 't')
        {
            ascii_to_image a(filepath);
            a.app();
        }
        else
        {
            image_to_ascii a(filepath);
            a.app();
        }
    }
    else
    {
        std::cout << "please provide a file!";
    }
    return 0;
}