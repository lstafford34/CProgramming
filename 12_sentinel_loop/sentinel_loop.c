/*
A program navigating sentinel loops.

A program that sums the grade of students.
*/

#include <stdio.h>

// Function prototypes
double getGrade (int student_number);
/*
    Return the sum of grades on n students
*/
double sumStudentGrades (int n_students);
double sumStudentGradesSentinel (void);



int main(void) {
        double total = sumStudentGradesSentinel()
        ;printf("%lf\n", total);
        
    return 0;
}

double getGrade (int student_number){
    double grade;
    printf("Please enter the grade for student %d: ", student_number);
    scanf("%lf", &grade);

    return grade;
}

double sumStudentGrades (int n_students){
    int current_student = 1;
    double total = 0;
    // Counter-controlled iteration
    while(current_student <= n_students) {
        double grade = getGrade(current_student); // Getting the grade
        total += grade; // Adding scanned grade to the total
        current_student++;
    }

    return total;
}

double sumStudentGradesSentinel(void) {
    double total = 0;
    double grade = 0;
    int current_student = 1;

    // Sentinel loop
    while (grade != -1) {
        grade = getGrade(current_student);
        if (grade != -1) {
            total += grade;
        }
        current_student++;
    }

    return total;
}