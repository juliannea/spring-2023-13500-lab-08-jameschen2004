#include "funcs.h"
#include "imageio.h"
#include <string>

void invert_image(std::string file){
    int height, width;
    int image[MAX_H][MAX_W];
    readImage(file, image, height, width);
    for(int row = 0; row < MAX_H; row++){
        for(int col = 0; col < MAX_W; col++){
            image[row][col] = 255 - image[row][col];
        }
    }
    writeImage("taskA.pgm", image, height, width);
}