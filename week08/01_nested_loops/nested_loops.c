#include <stdio.h>
#include <unistd.h>

void printTriangleTopLeftStars(int size);
void printTriangleBottomLeftStars(int size);
void printTriangleBottomLeftNumbers(int size);
//TODO
/*
void printTriangleTopRightStars(int size);
void printTriangleBottomRightStars(int size);
void printTriangleBottomRightNumbers(int size);
*/

int main(void){
    int n = 0;

    //scan a positive integer

    do{
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    }while (n <= 0);

    printTriangleBottomLeftNumbers(n);
    //int i = 1;
    //while (i < 100){
    //    printTriangleTopLeftStars(n);
    //    printTriangleBottomLeftStars(n);
    //    i++;
    //}
   


    return 0;
}

void printTriangleTopLeftStars(int size){
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i; j++){
            printf("%c", '*');
            usleep(3000);
        }
        puts(""); //new line after we are done printing a line of *
    }
}


void printTriangleBottomLeftStars(int size){
    for (int i = 0; i < size; i++) {
        for (int j = 0; j <=i ; j++){
            printf("%c", '*');
        }
        puts(""); //new line after we are done printing a line of *
    }
}

void printTriangleBottomLeftNumbers(int size){
    for (int i = 0; i < size; i++) {
        for (int j = size; j >= size - i ; j--){
            printf("%d", j);
        }
        puts(""); //new line after we are done printing a line of *
    }
}


