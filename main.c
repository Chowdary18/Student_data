#include "student.h"
#include <stdlib.h>
#include <stdio.h>
int main()
{
    student *ptr = malloc(MAX_COUNT * sizeof(student));
    scanf("%s",ptr->name);
    printf("%s",ptr->name);
    printf("Welcome to Student Data \n Enter your Roll No followed by name and age\n");
    readData(&ptr);
    printf("Read data Collected \n");
    display(&ptr);

    free(ptr);
    ptr=NULL;
    return 0;
}
