// Leo Mindlin
// CS 50
// Project 6
// 12/03/2022

#include <stdio.h>
#include <math.h>

typedef struct StudentRecord {
    int number;
    int quizGrades[2];
    int examGrades[2];
    double averageGrade;
    char letterGrade;
} StudentRecord;

// Collect user input
void input(StudentRecord  * student);

// Calculate average & letter grade
void computeGrade(StudentRecord * student);

// Print a student's record
void output(const StudentRecord student);


int main() {
    StudentRecord records[5];
    int i;

    for (i=0; i<5; i++) {
        // Collect input for all students
        input(&records[i]);

        // Calculate the student's grades after input
        computeGrade(&records[i]);
    }

    // Print records for all students
    for (i=0; i<5; i++) {
        output(records[i]);
    }

}

void input(StudentRecord  *student) {
    printf("Enter Student's Number: ");
    scanf("%d", &student->number);

    printf("Enter 2 Quiz Grades (Out of 10 Points):\n");
    for (int i=0; i<2; i++) {
        scanf("%d", &student->quizGrades[i]);
    }

    printf("Enter Midterm & Final Grades (Out of 100 Points):\n");
    for (int i=0; i<2; i++) {
        scanf("%d", &student->examGrades[i]);
    }

    printf("\n");
}

void computeGrade(StudentRecord *student) {

    int quizTotal = student->quizGrades[0] + student->quizGrades[1];

    student->averageGrade = (((double)quizTotal/20 * 0.25) + ((double)student->examGrades[0]/100 * 0.25) + ((double)student->examGrades[1]/100 * 0.5))*100;

    if (student->averageGrade >= 90.0) {
        student->letterGrade = 'A';
    } else if (student->averageGrade >= 80.0) {
        student->letterGrade = 'B';
    } else if (student->averageGrade >= 70.0) {
        student->letterGrade = 'C';
    } else if (student->averageGrade >= 60.0) {
        student->letterGrade = 'D';
    } else {
        student->letterGrade = 'F';
    }
}

void output(const StudentRecord student) {
    printf("Records for student %d:\n", student.number);
    printf("Quiz Grades: %d, %d\n", student.quizGrades[0], student.quizGrades[1]);
    printf("Midterm & Exam Grades: %d, %d\n", student.examGrades[0], student.examGrades[1]);
    printf("Numeric Average: %.2f\n", student.averageGrade);
    printf("Letter Grade: %c\n\n", student.letterGrade);
}


