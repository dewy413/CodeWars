#include <string>



std::string to_camel_case(std::string text) {
  
  for(int i = 0; i < text.length(); i++) {
    if((text[i] == '-' || text[i] == '_')) {
      text.erase(text.begin() + i);
      text[i] = toupper(text[i]);
    }
  }
  
  
  return text;
}
