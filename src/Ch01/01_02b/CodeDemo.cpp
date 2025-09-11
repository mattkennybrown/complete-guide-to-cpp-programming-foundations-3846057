// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

// directive to include the iostream header file into the program
#include <iostream>

int main(){
    // statement -  the line saying what to do, ends in ;
    // std::endl is a manipulator that inserts a newline character and flushes the stream (like enter)
    // << directs the output to the standard output stream (console)
    std::cout << "Hello World!" << std::endl;
    // return 0 indicates that the program ended successfully, no errors
    // two new lines for better readability in terminal
    std::cout << std::endl << std::endl; 
    return 0;
}