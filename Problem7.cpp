#include <iostream>

using namespace std;
#include <cmath>

#include <vector>

int main() {
  std::vector < int > array = {
    2
  };
  int divisor = 2; // number dividing it by
  int number = 3; // number seeing if is prime 
  bool blue;
  array.reserve(10003);
	
  while (array.size() < 10002) {
    while (divisor <= sqrt(number)) {
      if (number % divisor == 0) {
        blue = false;
      } // if false
      else {
        blue = true;
        divisor++;
      } // else true
      if (!blue) {
        divisor = 2;
        number = number + 2;
      }

    } //while prime
    if (blue) {
      array.push_back(number);
      divisor = 2;
      number = number + 2;
    }
    if (blue) {
      std::cout << array[10000] << endl;
    }
  }

}
