/*

    Write a program that converts your age in years to minutes

*/

#include <stdio.h>

int main(){
    //prompt for age in years
    puts("Enter your age in years:");

    int age_years = 0;
    int age_minutes = 0;

    //Get the input
    scanf("%d", &age_years);

    //do the math
    age_minutes = age_years * 525600;

    //output result
    printf("\"%d\" years is \"%d\" minutes", age_years, age_minutes);


    return 0;
}