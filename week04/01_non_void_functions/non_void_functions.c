/*
    practice w a non void function
*/
#include <stdio.h>

//function prototypes
// The function named getFive which returns an integer and takes no arguments
int getFive(void);
//function named printCourse which returns nothing and takes an integer argument
void printCourse(int course_number);
//void function that takes an integer and describes the weather
void describeWeather (int temp);
//function that converts the given number of miles to kilometers
double milesToKilometers (int miles);
//function that converts kilometers to miles
double kmsToMiles (int kms);

int main(void){
   
    int var = 0;

    //call getFive function
    var = getFive();
    printf("var is %d\n", var);

    //call printCourse
    printCourse(var);

    //Test describeWeather
    int temp = 0;
    printf("Enter a temperature: ");
    scanf("%d", &temp);
    describeWeather(temp);
    
    //test milesToKilometers

    int miles = 0;
    printf("Enter the amount of miles: ");
    scanf("%d", &miles);
    int kms = milesToKilometers(miles);
    printf("%d miles is %d kilometers\n", miles, kms);
    

    //kmsToMiles idk girl test it
    int kms = 0;
    printf("Enter the amount of kms: ");
    scanf("%d", &kms);
    int miles = kmsToMiles(kms);
    printf("%d kilometers is %d miles\n", kms, miles);
    

    return 0;
}

//getFive implementation
int getFive(void){
    int five = 5;

    return five;
}
/*********************************/
void printCourse(int course_number){
    printf("You are in COP%d course.\n",course_number);
}

/*********************************/
void describeWeather (int temp){
    //if statement <3
    if (temp > 70){
        puts("HOT");
    }
    if (temp <= 70){
        puts("COLD");
    }
}

double milesToKilometers (int miles){
    double kms = miles * 1.609;
    
    return kms;
}
double kmsToMiles (int kms){
    double miles = kms / 1.609;

    return miles;
}
