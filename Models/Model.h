#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Data{
    int dd;
    int mm;
    int yy;
    char name[255];
    char month[20];
    Data *next, *prev;
}*head, *tail;

Data *createData(int dd, int mm, int yy, char *month, char *name){
    Data *temp = (Data*)malloc(sizeof(Data));
    temp->dd = dd;
    temp->mm = mm;
    temp->yy = yy;
    strcpy(temp->month, month);
    strcpy(temp->name, name);
    temp->next=temp->prev=NULL;
    return temp;
}