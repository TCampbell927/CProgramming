#include <stdio.h>

double avgStudentGradesSentinel(void);
double getGrade(void);
//to do: get another function for getting grade
// do not divide by zero.
int main(){
    printf("%.2lf\n", avgStudentGradesSentinel());
    return 0;
}

double avgStudentGradesSentinel(void){
    double grade = 0;
    double total_grade = 0;
    int amt_grade = 0;
    while (grade != -1) {
        grade = getGrade();
        //printf("Enter the grade (-1 to exit): ");
        //scanf("%lf", &grade);
        
        if (grade >= 0){
            ++amt_grade;

            total_grade += grade;
        }  
    
    }
    if (amt_grade == 0){
        puts("No grades were entered");
        return 0;
    }
    else{
        return total_grade/amt_grade;  
    }
}


double getGrade(void){
    //return only grades in the range [-1; 100]
    double grade;

    //do while loop
    do{
        printf("Enter the grade (-1 to exit): ");  
        scanf("%lf", &grade);
        if(grade < -1 || grade > 100){
            puts("INCORRECT GRADE! Try again.");
        }
    }while (grade < -1 || grade > 100);
    
   

    return grade;
}

