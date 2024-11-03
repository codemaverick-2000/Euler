#include <iostream>
using namespace std;

int main() {
  int x = 1;
  int n = 0;
  int y = 0;
  
  while(x <= 100) {
  n = n + (x * x);
  x++;
  }
  x = 1;
  while(x <= 100 ){
  y = y + x;
  x++;
  }
  std::cout << (y*y) - n << endl; 
}
