/*
    Getting the input from the keyboard

*/

#include <stdio.h>

int main(){
    int square_side = 1;
    int square_perimeter = 0;
    int square_area = 0;

    //Write the prompt
    puts("Enter the side of a sqaure");

    // Get the input
    // & - address operater
    scanf("%d", &square_side);

    // Do the math
    square_perimeter = square_side * 4;

    // Create the output
    printf("The perimeter of a square with side %d is %d\n", square_side, square_perimeter);

    //Do the math
    square_area = square_side * square_side;

    //Create the output
    printf("The area of a square with side %d is %d\n", square_side, square_area);
    
    return 0;
}