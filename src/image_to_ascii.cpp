#include <string>
#include <iostream>
#include "image_to_ascii.h"
#include "opencv2/opencv.hpp"
image_to_ascii::image_to_ascii(std::string filepath)
{
    this->filepath = filepath;
    this->grey_map = "$@B%8&WM#*oahkbdpqwmZO0QLCJUYXzcvunxrjft/|()1{}[]?-_+~<>i!lI;:,^`'.";
}
void image_to_ascii::app()
{
    std::cout << "image_to_ascii started " + filepath;
    using namespace cv;
    Mat img;
    img = imread("/home/lui/Pictures/Wallpapers/darker_window.jpg");
    int n, m;
    n = img.size().height;
    m = img.size().width;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            double greyscale = 0;
            greyscale = 0.21 * (int)img.at<cv::Vec3b>(i, j)[0] + 0.72 * img.at<cv::Vec3b>(i, j)[1] + 0.07 * img.at<cv::Vec3b>(i, j)[2];
            int len = grey_map.size();
            char greychar = grey_map[ceil(len - 1 * greyscale / 255)];
            std::cout << greychar;
        }
        std::cout << '\n';
    }
}