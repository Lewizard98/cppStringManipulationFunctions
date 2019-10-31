#include <iostream>

//function to take a string that has only numerical characters and turn it into an interger
int fnstringToInt(const std::string& string1) {
  int num {stoi(string1)};
  return num;
}