#include <iostream>


std::string fnstringOnlyalpha(std::string string1){
    std::string stringAlpha = "";
    for(int i=0;i<string1.length();i++){
        if(string1[i] >= 'a'&& string1[i] <='z' || string1[i] >= 'A'&& string1[i] <='Z'){
            stringAlpha += string1[i];
        }
    }
    return stringAlpha;
}
