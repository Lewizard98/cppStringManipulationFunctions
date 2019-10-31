#include <iostream>


//function takes a string and checks if the string is the same reversed
bool fnIsPalladrome(std::string string1){
    //iterates through the string
    for(int i=0;i<string1.length();i++){
        //if the string is a palladrome then this should return true
        if (string1[i]!=string1[string1.length()-1-i]){
            return false;
        }
    }
    return true;
}