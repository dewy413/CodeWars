#include <string>
#include <iostream>
#include <algorithm>

using namespace std;
string add(const string& a, const string& b) {
    string result, stringA, stringB;
    int lengthA, lengthB, remainder;
    stringA = a;
    stringB = b;
    if(stringA.length() > stringB.length()) {
        swap(stringA, stringB);
    }

    lengthA = stringA.length(), lengthB = stringB.length();

    reverse(stringA.begin(), stringA.end());
    reverse(stringB.begin(), stringB.end());

    remainder = 0;

    for(int i = 0; i < lengthA; i++) {
        int sum = ((stringA[i] - '0') + (stringB[i] - '0') + remainder);
        result.push_back(sum % 10 + '0');
        remainder = sum / 10;
    }


    for(int i = lengthA; i < lengthB; i++) {
        int sum = ((stringB[i] - '0') + remainder);
        result.push_back(sum % 10 + '0');
        remainder = sum / 10;
    }

    if(remainder) { result.push_back(remainder + '0');}

    reverse(result.begin(), result.end());


    cout << "Result: " << result << " | Actual: ";
    return result;
}

int main() {
    add("123", "456");
    cout << "579" << endl;
    add("0", "0");
    cout << "0" << endl;
    add("99", "2");
    cout << "101" << endl;
    add("10", "35679");
    cout << "35689" << endl;
    add("", "5");
    cout << "5" << endl;
    add("192", "");
    cout << "192" << endl;
    add("9999", "1111");
    cout << "11110" << endl;


    return 0;
}