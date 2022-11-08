std::string decodeMorse(std::string morseCode) {
    // ToDo: Accept dots, dashes and spaces, return human-readable message
    std::string decoded;
    std::string coded;
    int clockCount = 0;
    int spaceCount = 0;
  
    for(int k = 0; k < morseCode.length() - 1; k++) {
      if(morseCode[k] == ' ') {
        spaceCount += 1;
      } else {
        morseCode.erase(0, spaceCount);
        spaceCount = 0;
        k = morseCode.length();
      }
    }
    for(int k = morseCode.length() - 1; k > 0; k--) {
      if(morseCode[k] == ' ') {
        morseCode.erase(k, 1);
      } else {
        k = 0;
      }
    }
  
  
    for(int i = 0; i < morseCode.length(); i++) {
      if(morseCode[i] == '.' ) {
        clockCount = 0;
        coded += ".";
      } else if( morseCode[i] == '-' ) {
        clockCount = 0;
        coded += "-";
      } else {
          clockCount++;
          if(clockCount == 3) {
            decoded += MORSE_CODE[coded] + " ";
            coded = "";
            clockCount = 0;

          } else {
            decoded += MORSE_CODE[coded];
            coded = "";
        }
    }
}
    decoded += MORSE_CODE[coded];
    return decoded;
}
