#include <string>
#include <iostream>
#include "image_to_ascii.h"
image_to_ascii::image_to_ascii(std::string filepath)
{
    std::cout << "image_to_ascii started " + filepath;
}