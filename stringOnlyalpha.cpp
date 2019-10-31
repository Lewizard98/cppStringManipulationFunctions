#include <iostream>


//takes a string and returns only the alpha characters of the string
std::string fnstringOnlyalpha(std::string string1){
    std::string stringAlpha = "";
    for(int i=0;i<string1.length();i++){
        //iterate through the string, if the askii value is between a/z or A/Z then it must be alpha
        if((string1[i] >= 'a'&& string1[i] <='z') || (string1[i] >= 'A'&& string1[i] <='Z')){
            stringAlpha += string1[i];
        }
    }
    return stringAlpha;
}
