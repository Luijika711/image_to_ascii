#include <string>
#include <iostream>
#include "image_to_ascii.h"
image_to_ascii::image_to_ascii(std::string filepath)
{
    this->filepath = filepath;
}
void image_to_ascii::app()
{
    std::cout << "image_to_ascii started " + filepath;
}