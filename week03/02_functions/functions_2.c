#include <stdio.h>


// Function prototypes
void two(void);
void one_three(void);


int main(){
    puts("starting now:");
    one_three();
    puts("done!");
}

void two(void){
    puts("two");
}

void one_three(void){
    puts("one");
    two();
    puts("three");
}