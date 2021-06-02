#include <iostream>
#include <vector>
#include <string>

using namespace std;
//reverse string
string reverseString(string word);
int main() {
  cout << "Hello from C++!" << endl;
  string myWord = "Hello";
  cout << reverseString(myWord) << endl;
  return 0;
}

string reverseString(string word){
  string reversedWord;
  for(int i = word.length(); i != 0 - 1; i--){
    reversedWord.push_back(word[i]);
  }
  return reversedWord;
}
