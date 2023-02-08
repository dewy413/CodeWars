class RGBToHex{
  public:
  
  static std::string base10tobase16(int base10) {
    
    if(base10 < 1) {
      return "00";
    }
    else if(base10 < 15) {
      return "0" + std::to_string(base10);
    } else if (base10 > 254) {
      return "FF";
    }
    
    std::string base16;
    int base16asint = base10;
    
    while(base10 > 0) {
      base16asint = base10 % 16;
      if(base16asint < 10) {
        base16 = base16.insert(0, std::to_string(base16asint));
      } else {
        switch(base16asint) {
            case 10:
              base16.insert(0, "A");
              break;
            case 11:
              base16.insert(0, "B");
              break;
            case 12:
              base16.insert(0, "C");
              break;
            case 13:
              base16.insert(0, "D");
              break;
            case 14:
              base16.insert(0, "E");
              break;
            case 15:
              base16.insert(0, "F");
              break; 

        }
      }
      base10 /= 16;
    }
    
    return base16;
    
  }
  
  static std::string rgb(int r, int g, int b) {
    return base10tobase16(r) + base10tobase16(g) + base10tobase16(b);
  } 
};
