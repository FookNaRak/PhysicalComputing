#include<stdio.h>

int main()
{
    char first_name[31];
    char last_name[31];
    char date[11];
    int studentID;
    float grade;

    scanf("%s %s %d %s %f", first_name, last_name, &studentID, date, &grade);
    
    int day, month, year;
    sscanf(date, "%d/%d/%d", &day, &month, &year);

    printf("Fullname: %s %s\n", first_name, last_name);
    printf("ID: %d\n", studentID);
    printf("DOB: %02d-%02d-%02d\n", day, month, year);
    printf("GPA: %.2f", grade);
    return 0;
}