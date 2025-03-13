#include <stdio.h>

void setToZero (int *n);

double productPointers(double *p1, double *p2);

int main(void){
    int luck = 100;

    //access 
    printf("%d\n",luck);

    //modify
    luck += 10;

    //print the address of luck
    printf("The address of luck is %p\n", &luck); // %p - to print an address

    //create a pointer variable
    // <data_type> *pointer_name
    int *luck_ptr = &luck;

    //access the data the pointer is pointing to
    // * - dereferencing operator

    printf("Dereference luck_ptr %d\n", *luck_ptr);

    // modify the data through the pointer 
    *luck_ptr = 300;
    printf("The value of luck after modification %d\n",luck);


    //passing by-reference
    setToZero(&luck);
    printf("The value of luck after setting to zero %d\n",luck);


    double d1 = 2.4;
    double d2 = 6.43;

    printf("%lf\n", productPointers(&d1, &d2));

    return 0;
}


void setToZero (int *n) {
    *n = 0;
}

double productPointers(double *p1, double *p2){
    return *p1 * *p2; 
}
