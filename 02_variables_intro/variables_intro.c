/*
    The introduction to variables

*/

//preprocessor directive
//stdio - standard input output
#include <stdio.h>

//create main function
int main() {
    // Create a variable
    int first_number;
    // assign the value to a variable
    first_number = 100;

    // create and intialize
    int second_number = -19;

    //print the value of a variable
    printf("The first number is %d\n", first_number);
    printf("The second number is %d\n", second_number);

    //create a sum of two numbers
    int sum = first_number + second_number;
    printf("%d + %d = %d", first_number, second_number, sum);

    
    return 0;
}