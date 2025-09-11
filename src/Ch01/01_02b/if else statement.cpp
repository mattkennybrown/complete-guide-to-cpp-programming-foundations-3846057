#include <iostream>

int main(){

    int a = 5; //Declaration statement
    int b = 10; //Declaration statement
    int c = a + b; //Declaration statement with expression

    if (c > 5) { //conditional statement
        std::cout << "c is greater than 5" << std::endl; //Output statement
    } else {
        std::cout << "c is not greater than 5" << std::endl; //Output statement
    }
    return 0; //Return statement
}