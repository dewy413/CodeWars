# include <string>

std::string disemvowel(const std::string& str) {
  std::string noVowel;
  for(int i = 0; i < str.length(); i++)
  {
      if  (!(tolower(str[i]) == 'a' || tolower(str[i]) == 'e' ||
         tolower(str[i]) == 'i' || tolower(str[i]) == 'o' ||
         tolower(str[i]) == 'u' 
        )){
          noVowel += str[i]; 

        }
        
  }
  return noVowel;
}
