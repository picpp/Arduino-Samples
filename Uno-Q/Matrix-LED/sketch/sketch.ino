#include <Arduino_LED_Matrix.h>
#include "gallery.h"

uint8_t logo[104] = {
    0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,1,1,1,0,0,0,1,1,1,0,0,
    0,1,0,0,0,1,0,1,0,0,0,1,0,
    1,0,0,0,0,0,1,0,0,1,0,0,1,
    1,0,1,1,1,0,1,0,1,1,1,0,1,
    1,0,0,0,0,0,1,0,0,1,0,0,1,
    0,1,0,0,0,1,0,1,0,0,0,1,0,
    0,0,1,1,1,0,0,0,1,1,1,0,0
};

Arduino_LED_Matrix matrix;

void setup() {
  matrix.begin();
  // display the image
  matrix.setGrayscaleBits(1);
  // matrix.draw(logo);
  // you can also load frames at runtime, without stopping the refresh
  matrix.loadSequence(LEDMATRIX_ANIMATION_INFINITY_LOOP_LOADER);
}

void loop() {
  matrix.playSequence(false);
}
