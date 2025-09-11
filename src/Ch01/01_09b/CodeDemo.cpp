// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string name;
    //flush output before getting input
    std::cout << "Enter your name:" << std::flush;
    // Only works for strings without spaces
    std::cin >> name;
    std::cout << "Hello " << name << "!" << std::endl;
    std::cout << std::endl << std::endl;
    return 0;
}