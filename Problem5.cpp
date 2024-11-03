#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int u = 2520;
    int i = 11;
    
    while(i <= 20) {
    int g = u % i;
      if (g != 0) {
      if (i % g == 0)
      {
      u = u * i/g;
      }
      else {
      u = u * i;
      }
      }
      i++; 
      }
    std::cout << u << endl; 
    }
