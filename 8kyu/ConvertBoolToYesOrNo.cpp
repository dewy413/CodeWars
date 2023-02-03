#include <string>

std::string bool_to_word(bool value)
{
  switch(value){
      case true:
      return "Yes";
      break;
      case false:
      return "No";
      break;
  }
}
