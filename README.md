image -> ascii and ascii -> image
Written in C++ using https://github.com/kbuffardi/Bitmap

requirements : unix system with imagemagick installed

to run:
```
cmake .
make
./image_to_ascii PATH_TO_FILE
```
If PATH_TO_FILE ends in .txt, then the .txt will be converted to an image. Otherwise, the image will be converted to a .txt file.
The file and the converted file will be moved to the directory of the project
