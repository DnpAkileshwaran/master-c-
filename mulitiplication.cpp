// This is a program to multiply two numbers with the help of functions

#include <iostream>

// function to multiply given two numbers and return the product
int multiplication ( int num1, int num2 ) {
    int product = num1 * num2;
    return product;
}

int main () {
    std::cout<< multiplication ( 10, 20 );
    return 0;
}
