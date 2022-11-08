#include <string>
#include <vector>
using namespace std;
vector<string> solution(const string &s) {

    vector<string> ourvec;
    string addedup;
    int counter = 0;
    for(auto i : s) {
      switch(counter) {
        case(2):
          ourvec.push_back(addedup);
          addedup = "";
          counter = 0;
        default:
          addedup += i; 
          counter += 1;
      }
    }
    if (s.length() & 2 != 0) {
      addedup += "_";
    } else if (s.length() == 0) {
      return {};
    } 
      ourvec.push_back(addedup);
      return ourvec;
}
