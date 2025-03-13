//Program that outputs student information

#include <stdio.h>

int main(){
    
    int course_id = 2271;
    int student_id = 8888;
    int sum = 7 + 3 * 6 / 2 - 5 % 2;
    printf("%d", sum);
    printf("Name: John Doe\n");
    printf("Course ID: %d\n", course_id);
    printf("Student ID: %d\n", student_id);

    int id_dif = student_id - course_id;
    printf("Student ID - Course ID is: %d\n", id_dif);
 
 
    return 0;
}