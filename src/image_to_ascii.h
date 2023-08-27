#pragma once
#include <string>
#include "opencv2/opencv.hpp"
class image_to_ascii
{
private:
    std::string filepath;
    std::string grey_map;

public:
    image_to_ascii(std::string filepath);
    void app();
};