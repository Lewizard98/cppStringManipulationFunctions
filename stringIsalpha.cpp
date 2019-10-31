#include <iostream>


//goes through the inputed string and returns true or false if all characters are alpha
bool fnstringIsalpha(std::string str){
    //iterating through the string
    for(int j=0;j<str.length();j++){
        //if any of the characters are not an alpha character return false
        if(!(str[j] >= 'a'&& !str[j] <='z') || !(str[j] >= 'A'&& !str[j] <='Z')){
            return false;
        }
    //return true if all characters are alpha
    }
    return true;
}