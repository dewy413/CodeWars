#include <string>
#include <algorithm>

using namespace std;


string highestScoringWord(const string &str) {
    int max = 0;
    int current = 0;
    string maxWord;
    string currentWord;
    for(int i = 0; i < str.length(); i++) {
        switch(str[i]) {
            case(' '):
                if(current > max) {
                    max = current;
                    current = 0;
                    maxWord = currentWord;
                    currentWord = "";
                    i++;
                } else {
                    currentWord = "";
                    current = 0;
                    i++;
                }
            default:
                currentWord += str[i];
                if(int(str[i]) > 96) {
                    current += int(str[i]) - 96;
                }
        }

    }

    if(current > max) {
        max = current;
        maxWord = currentWord;
    }



    maxWord.erase(remove(maxWord.begin(), maxWord.end(), ' '), maxWord.end());
    return maxWord;
}
