#ifndef _STUDENTDATA_H_
#define _STUDENTDATA_H_

#define MAX_COUNT 5

struct Student {
    unsigned int roll;
    char name[20];
    unsigned int score[4];
    unsigned int age;
    };

typedef struct Student student;

void readData(student *ptr);
void readAll(student *ptr, int n);
void display (student *ptr);
void displayAll (student *ptr , int n);

#endif // _STUDENTDATA_H
