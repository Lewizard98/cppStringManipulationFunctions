#include <iostream>


//function to get an input from the user in the terminal 
std::string fnstringGetInput(){
    //delcaring the variable to hold the input
    std::string input1;

    std::cout<<"Input: \n";
    //getline is used instead of just cin as it can store lines
    std::getline(std::cin,input1);
    return input1;
}