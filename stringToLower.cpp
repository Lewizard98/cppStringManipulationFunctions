#include <iostream>


//function takes a string as an argument and returns the string with all characters lowercase
std::string fnstringToLower(std::string string1){
    //iterating through every character of a string
    for(int i=0;i<string1.length();i++){
        //turning every character into a lowercase version of itself
        string1[i]=std::tolower(string1[i]);
    }
    //returning the new lowercase string
    return string1;
}
