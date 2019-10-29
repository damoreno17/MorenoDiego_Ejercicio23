#include <iostream>
#include <random>
#include <cmath>
#include <stdlib.h>

int main(){
  int i;
  float pi = 2.0*asin(1.0);
  float theta = 0.0;
  float x = 0.0;
  float y = 0.0;
  
  srand48(8);
 
  distancia = x**2.0 + y**2.0;  
 
      while (sqrt(x+y)< 10000){  
        theta = drand48()*2.0*pi;
        x = x + cos(theta);
        y = y + sin(theta);
        std::cout << x << " " << y << std::endl;
      }
  
  return 0;
}
 