#include <string>

std::string removeExclamationMarks(std::string s){
    std::string news;
    for(auto i : s) {
      if(i != '!') {
        news += i;
      }
    }
    return news; 
}
