image -> ascii and ascii -> grayscale image
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
![ascii_to_image photo](https://github.com/Luijika711/image_to_ascii/assets/88895321/6600036b-a3bb-4bb2-8671-4886ad35f057)
![image_to_ascii photo](https://github.com/Luijika711/image_to_ascii/assets/88895321/d6329276-a36f-4b48-92c9-869040a27a11)
