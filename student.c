#include "student.h"
#include <stdio.h>
#include <stddef.h>

 void readData (student *ptr) {
    scanf("%d %s %d",&ptr->roll,ptr->name,&ptr->age);
    }

void readAll (student *ptr , int n)
{
    student *pcur = ptr;
    for(int i=0; i<n ;i++)
        readData(pcur++);
}

student* findStudentByRollno(const student* ptr,int n,int keyRollno) {
    const student *pcur=ptr;    //parr,&parr[0]
    for(int i=0; i<n; i++) {
        if(pcur->roll==keyRollno)
            return pcur;    //display(pcur)
        pcur++;
    }
    return NULL;
}

void display (student *ptr)
{
    printf("Roll No= %d \n Name= %s \n Age= %d",ptr->roll,ptr->name,ptr->age);
}

void displayAll (student *ptr , int n)
{
    student *pcur = ptr;
    for(int i=0; i<n; i++)
        display(&pcur[i]);
}
