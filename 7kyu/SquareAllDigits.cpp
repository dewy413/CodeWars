using namespace std;
#include <cmath>
int square_digits(int num) {
  string counter;
  int digit = 0;
  for(int i = 0; i < int(to_string(num).length()); i++) {
    digit = num / pow(10, i);
    digit = digit % 10;
    digit = pow(digit, 2);
    counter = to_string(digit) + counter;
    
    
  }
  return stoi(counter);
}
