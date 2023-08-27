#include <iostream>
#include "ascii_to_image.h"
ascii_to_image::ascii_to_image(std::string filepath)
{
    this->filepath = filepath;
}
void ascii_to_image::app()
{
    std::cout << "ascii_to_image started" + filepath;
}