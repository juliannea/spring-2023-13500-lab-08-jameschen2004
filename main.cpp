#include <iostream>
#include "funcs.h"
#include "imageio.h"

int main(){

  std::cout << "All images read the image found in inImage.pgm \n"; 
  invert_image_colors("inImage.pgm");
  invert_half_image_color("inImage.pgm");
  insert_box_to_image("inImage.pgm");
  frame_image("inImage.pgm");
  increase_scale_image("inImage.pgm");
  pixelate_image("inImage.pgm");

  return 0;
}

