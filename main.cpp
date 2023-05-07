#include "mbed.h"

DigitalIn DigIn1(p13);
DigitalIn DigIn2(p16);
DigitalOut DigOut1(p23);
DigitalOut DigOut2(p25);

int main() {
  while(1) {
   if(DigIn1.read() == 1) {
    DigOut1.write(1);
    DigOut2.write(0);
   }
   else if(DigIn2.read() == 1){
    DigOut1.write(0);
    DigOut2.write(1);
   }
   else {
    DigOut1.write(0);
    DigOut2.write(0);
     }
   }
}