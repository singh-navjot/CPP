/*
Errors and warnings:
 There are 3 kinds of errors and warnings:
    - Compile time errors
    - Runtime errors
    - Warnings

The ultimate goal of a compiler is to genrate an executable binary file of the code.
*/

//Compile time errors
#include <iostream>

int main(){

    std::cout << "Hello world in c++ 20" << std::endl;
    //"message": "expected a ';'", this is a compile time error.
    
    //Runtime errors:
    int val = 7/0;
    std::cout << "Value :" << val << std::endl;
    
    
    return 0;


}

/*
Runtime error:
In case of runtime error the compilation is going to succeed but when you execute the program,
it will not do what you intended it to do.
It is a logical error in your program which you have to fix.
Sometimes the runtime errors cause your program to fail or terminate immediately.
*/

/*
Warnings:
These problems are not serious enough for the compiler to halt compilation.
The compilation will succeed, it is just the compiler warning you about fixing some problems
before they end up into causing errors.
Eg: Some compilers warn you when you divide by 0.
*/