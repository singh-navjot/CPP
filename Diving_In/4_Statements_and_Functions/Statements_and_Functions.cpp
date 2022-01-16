/*
Statements and Functions

- A statement is the basic unit of computation in c++.(Smallest thing a cpu can execute in a program)
- Every c++ program is a collection of statments organized in a certain way to achieve some goal.
- statements end with a (;) semicolon in c++.
- statements are executed in order from top to bottom when the program is run.
- Execution keeps on going until there is a statement causing the prpogram to terminate,
  or run another sequence of statements.

Functions:
- It is like a machine to which we provide inputs and it generates output.
- <return type> function_name(<input_parameters>){
    <body of function>
    }
- A function must be defined before it is used. 
- Functions are "reusable" piece of code which group a bunch of statements to perform a specific task.
*/

#include <iostream>

//function
int addNumbers(int first_param, int second_param){

    int result = first_param + second_param;
    return result;
}

int main(){

    int first_number {13}; //Statement
    int second_number {7};

    std::cout << "First number :"<< first_number << std::endl;
    std::cout << "Second number :" << second_number << std::endl;

    int sum = first_number + second_number;
    std::cout << "Sum :" << sum << std::endl;

    sum = addNumbers(15, 27);
    std::cout << "Sum :" << sum << std::endl;

    sum = addNumbers(15, 99);
    std::cout << "Sum :" << sum << std::endl;

    std::cout << "Sum :" << addNumbers(10, 100) << std::endl;
    

    return 0;
}









