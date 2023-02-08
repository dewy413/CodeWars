#include <string>

unsigned hamming(const std::string &a, const std::string &b) {
  
  int counter = 0;
  for(int i = 0; i < a.length(); i++) {
    if(a[i] != b[i]) {
      counter++;
    }
  }
  
  return counter;
}
