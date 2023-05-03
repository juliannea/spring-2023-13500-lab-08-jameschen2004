#include "funcs.h"
#include "imageio.h"
#include <string>
#include <cmath>

void invert_image_colors(std::string file){ //changed to clearer name
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

void invert_half_image_color(std::string file){ //changed to clearer name
    int height, width;
    int image[MAX_H][MAX_W];
    readImage(file, image, height, width);
    for(int row = 0; row < MAX_H; row++){
        for(int col = 0; col < MAX_W; col++){
			if(col>(width/2)){
            	image[row][col] = 255 - image[row][col];
			}
        }
    }
    writeImage("taskB.pgm", image, height, width);	
}

void insert_box_to_image(std::string file){ //change to clearer name
    int height, width;
    int image[MAX_H][MAX_W];
    readImage(file, image, height, width);
    for(int row = 0; row < MAX_H; row++){
        for(int col = 0; col < MAX_W; col++){
			if(col>(width/4) && col<(3*width/4) && row>(height/4) && row<(3*height/4)){
            	image[row][col] = 255;
			}
        }
    }
    writeImage("taskC.pgm", image, height, width);	
}

void frame_image(std::string file){
    int height, width;
    int image[MAX_H][MAX_W];
    readImage(file, image, height, width);
    for(int row = 0; row < MAX_H; row++){
        for(int col = 0; col < MAX_W; col++){
			if(col>=(width/4) && col<=(3*width/4) && row>=(height/4) && row<=(3*height/4)){
				if(col==(width/4) || col==(3*width/4) || row==(height/4) || row==(3*height/4)){
            		image[row][col] = 255;
				}
			}
        }
    }
    writeImage("taskD.pgm", image, height, width);		
}

void increase_scale_image(std::string file){ //changed to clearer name
    int height, width;
    int image[MAX_H][MAX_W];
    int newimage[MAX_H][MAX_W];
    readImage(file, image, height, width);
    for(int row = 0; row < height; row++){
        for(int col = 0; col < width; col++){
            newimage[row*2][col*2] = image[row][col];
            newimage[row*2][col*2+1] = image[row][col];
            newimage[row*2+1][col*2] = image[row][col];
            newimage[row*2+1][col*2+1] = image[row][col];
        }
    }
    writeImage("taskE.pgm", newimage, 2*height, 2*width);
}

void pixelate_image(std::string file){
    int height, width;
    int image[MAX_H][MAX_W];
    int newimage[MAX_H][MAX_W];
    readImage(file, image, height, width);
    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            int avg = round((image[row][col]+image[row][col+1] + image[row+1][col] + image[row+1][col+1]) / 4);
                newimage[row][col] = avg;
                newimage[row][col+1] = avg;
                newimage[row+1][col] = avg;
                newimage[row+1][col+1] = avg;
                col = col + 1;
                }
                row++;
        }
        writeImage("taskF.pgm", newimage, height, width);
}
