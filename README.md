image -> ascii and ascii -> grayscale image
Written in C++ using https://github.com/kbuffardi/Bitmap

If converting from image to ascii, you can also scale down the images

requirements : unix system with imagemagick installed

to run:
```
cmake .
make
./image_to_ascii PATH_TO_FILE
```
If PATH_TO_FILE ends in .txt, then the .txt will be converted to an image. Otherwise, the image will be converted to a .txt file.
The file and the converted file will be moved to the directory of the project

![image to ascii](https://github.com/Luijika711/image_to_ascii/blob/main/image_to_ascii%20photo.png?raw=true)

![ascii to image](https://github.com/Luijika711/image_to_ascii/blob/main/ascii_to_image%20photo.png?raw=true)

