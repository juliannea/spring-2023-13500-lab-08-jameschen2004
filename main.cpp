#include <iostream>
#include "funcs.h"
#include "imageio.h"

int main(){

  std::cout << "All images read the image found in inImage.pgm \n"; 
  invert_image("inImage.pgm");
  invert_half_image("inImage.pgm");
  box_image("inImage.pgm");
  frame_image("inImage.pgm");
  scale_image("inImage.pgm");
  pixelate_image("inImage.pgm");

  return 0;
}
