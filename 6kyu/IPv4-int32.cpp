#include <cstdint>
#include <string>
#include <cmath>
uint32_t ip_to_int32(const std::string& ip) {
  long total = 0; // Long int because the number is going to be 32 bits.
  int place = 0; // Digit place so we know what needs to be done.
  std::string string_number = "";
  
  for(int i = 0; i < ip.length(); i++ ) {
    if(ip[i] == '.') {
      switch(place) {
          case 0:
            total += stoi(string_number) * pow(2, 24);
            place++;
            string_number = "";
            break;
          case 1:
            total += stoi(string_number) * pow(2, 16);
            place++;
            string_number = "";
            break;
          case 2:
            total += stoi(string_number) * pow(2, 8);
            place++;
            string_number = " ";
            break;
      }
      
    } else {
      string_number = string_number += ip[i];
    }
  }
  total += stoi(string_number);
  return total;
} 
