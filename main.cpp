#include <iostream>
#include "funcs.h"
#include "imageio.h"

int main(){

  std::cout << "All images read the image found in inImage.pgm \n"; 
  invert_image_colors("inImage.pgm"); //changed to fit clearer name 
  invert_half_image_color("inImage.pgm"); //changed to fit clearer name
  insert_box_to_image("inImage.pgm"); //changed to fit clearer name
  frame_image("inImage.pgm");
  increase_scale_image("inImage.pgm"); //change to fit clearer name
  pixelate_image("inImage.pgm");

  return 0;
}
