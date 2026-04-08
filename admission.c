#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char name[50];
    int rollno;
    struct Date dob;   
    struct Date doa;   
};

int main() {
    struct Student s;

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollno);

    printf("Enter Date of Birth: ");
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);

    printf("Enter Date of Admission: ");
    scanf("%d %d %d", &s.doa.day, &s.doa.month, &s.doa.year);

    printf("\nStudent Details\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.rollno);

    printf("Date of Birth: %02d/%02d/%04d\n",
           s.dob.day, s.dob.month, s.dob.year);

    printf("Date of Admission: %02d/%02d/%04d\n",
           s.doa.day, s.doa.month, s.doa.year);

}