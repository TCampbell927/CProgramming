#include <stdio.h>

int main(void) {
    //Get the uppercase character
    char input;
    do{
        printf("Enter an uppercase character: ");
        scanf(" %c", &input);    

    }while(input < 'A' || input > 'Z');
   
    //Get the positive integer
    int number;
    do{
        printf("Enter a postive number: ");
        scanf(" %d", &number); 
    }while(number <= 0);

    //Print the scanned char the integer number of times (for loop)
    // A 
    // 5
    // AAAAA
    char symbol;
    do{
        printf("Enter a * or # sign: ");
        scanf(" %c", &symbol); 
    }while(symbol != '*' && symbol != '#');

    for(int i = 1; i <= number; i++){
       if(i%2 == 0){
        printf("%c%c", symbol, input);
       } 
       else {
        printf("%c%c", input, symbol);
       }
    }
    //TODO: 
    // Scan a second character which should be either * or # and nothing else
    // Print the pattern
    // B 5 *
    // B*B*B*B*B*
    // Advanced pattern B**BB**BB*

    return 0;
}