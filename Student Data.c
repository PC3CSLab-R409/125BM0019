//Structure of students having following:
//Name, Roll no. and marks in 3 subjects.
//Define User-defined function to calculate average marks scored by the students.
#include <stdio.h>
struct student {
    char name[50];
    int roll;
    int marks[3];
};
float calculateAverage(struct student s) {
    int total = 0;
    for (int i = 0; i < 3; i++) {
        total += s.marks[i];
    }
    return total / 3.0;
}
int main() {
    struct student s1;
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter roll number: ");
    scanf("%d", &s1.roll);
    printf("Enter marks in 3 subjects: ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &s1.marks[i]);
    }
    float avg = calculateAverage(s1);
    printf("Average marks of %s (Roll No: %d) is: %.2f\n", s1.name, s1.roll, avg);
    return 0;
}