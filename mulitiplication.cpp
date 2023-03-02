// This is a program to multiply two numbers with the help of functions

#include <iostream>

// definition of the multiplication function but the funtion can be declared later part of the program
// function to multiply given two numbers and return the product
int multiplication ( int, int );

// this technique in which two or more function can have a same name but with different parameters is called polymorphism ( function overloading )
// function to multiply three numbers
int multiplication ( int num1, int num2, int num3 ) {
    int product = num1 * num2 * num3;
    return product;
}

// this is not possible in c++ i.e return type cannot be overloaded
/*
float multiplication ( int num1, int num2 ) {
    float product = num1 * num2;
    return product;
}
*/

int main () {
    std::cout<< multiplication ( 10, 20 ) << std::endl;
    std::cout<< multiplication ( 10, 20, 30 ) << std::endl;
    std::cout << multiplication ( 10, 30 ) << std::endl;

    // NULL statement - this is also a valid statement, since expressions are optional
    ;

    int end = 10;
    int start = 0;
    while ( ! (start++ == end ) ) ;
    std::cout << start << std::endl;

    // compound statements - statements enclosed within the curly braces and parenthesis
    if ( start == 11 ) {
        std::cout << "My name is Monkey D. Luffy" << std::endl;
    }
    return 0;
}

// declaration of the multiply function
int multiplication ( int num1, int num2 ) {
    int product = num1 * num2;
    return product;

    std::cout<<"sample";
}
