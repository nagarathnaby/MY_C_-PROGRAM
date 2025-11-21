#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int age;
    float marks;
};
    int main() {
    struct Student s1;
    strcpy(s1.name, "Rathna");
    s1.age = 18;
    s1.marks = 96.6;
    printf("Student Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Marks: %.2f\n", s1.marks);
    }
