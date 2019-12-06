#include "student.h"
#include <stdlib.h>
#include <stdio.h>
int *pcur;
int main()
{
    student *ptr = malloc(MAX_COUNT * sizeof(student));
    printf("Welcome to Student Data \n Enter your Roll No followed by name and age\n");
    readData(&ptr);
    printf("Read data Collected \n");
    display(&ptr);
    printf("\n");
    student *pcur=findStudentByRollno(&ptr,5,100);
    display (&pcur);
    free(ptr);
    ptr=NULL;
    return 0;
}
