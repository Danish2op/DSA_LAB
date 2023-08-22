#include <iostream>
using namespace std;


void concatenateStrings(string& str1, const string& str2) {
    str1 += str2;
}


void reverseString(string& str) {
    int length = str.length();
    for (int i = 0; i < length / 2; i++) {
        swap(str[i], str[length - i - 1]);
    }
}


void deleteVowels(string& str) {
    string result = "";
    for (char c : str) {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            result += c;
        }
    }
    str = result;
}


void sortString(string& str) {
    int length = str.length();
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (str[i] > str[j]) {
                swap(str[i], str[j]);
            }
        }
    }
}


char toLowerCase(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c - 'A' + 'a';
    }
    return c;
}

int main() {
    string str1 = "Hello";
    string str2 = "World";

    
    concatenateStrings(str1, str2);
    cout << "Concatenated: " << str1 << endl;

    
    reverseString(str1);
    cout << "Reversed: " << str1 << endl;

   
    deleteVowels(str1);
    cout << "Without vowels: " << str1 << endl;

   
    sortString(str1);
    cout << "Sorted: " << str1 << endl;

   
    char uppercaseChar = 'X';
    char lowercaseChar = toLowerCase(uppercaseChar);
    cout << uppercaseChar << " converted to lowercase: " << lowercaseChar << endl;

    return 0;
}

