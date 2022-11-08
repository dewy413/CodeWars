int countSmileys(std::vector<std::string> arr) {
  int counter = 0;
  if(sizeof(arr) == 0) {
    return 0;
  } else {
    for(int i = 0; i < arr.size(); i++) {
      std::string check = arr.at(i);
      if(check.at(0) == ':' || check.at(0) == ';') {
        if(check.at(1) == '-' || check.at(1) == '~') {
          if(check.at(2) == ')' || check.at(2) == 'D') {
            counter++;
          }
        } else if(check.at(1) == ')' || check.at(1) == 'D') {
          counter++;
        } 
      }
    }
  }
  return counter;
}
