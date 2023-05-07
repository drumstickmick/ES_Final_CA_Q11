#include "mbed.h"

DigitalIn DigIn1(p13);
DigitalIn DigIn2(p16);
DigitalOut DigOut1(p23);
DigitalOut DigOut2(p25);

int main() {
  while(1) {
   if(DigIn1 = 1) {
    DigOut1 = 1;
    DigOut2 = 0;
   }
   else if(DigIn2 = 1){
    DigOut1 = 0;
    DigOut2 = 1;
   }
   else {
    DigOut1 = 0;
    DigOut2 = 0;
     }
   }
}