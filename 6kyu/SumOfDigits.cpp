using namespace std;

int digital_root(int n) {
  int counter;
  int number = n;
  bool checker = true;
  while(checker) {
      counter = 0;
      string word = to_string(number);
      int* wordsplit = new int[word.length()];
      for(int i = 0; i < word.length(); i++) {
          counter += int(word[i] - 48);
          cout << int(word[i] - 48);
      }
      cout << " | ";
      if(to_string(counter).length() == 1) {
        checker = false;
      } else {
        number = counter;
      }
    }
  cout << endl;
  return counter;
}
