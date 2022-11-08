#include <vector>
#include <string>

std::vector<std::string> string_to_array(const std::string& s) {
    std::vector<std::string> ourvec;
    std::string addedup;
    for(auto i : s) {
      if(i == ' ') {
        ourvec.push_back(addedup);
        addedup = "";
      } else {
        addedup += i; 
      }
    }
    ourvec.push_back(addedup);
    return ourvec; // your code here
}
