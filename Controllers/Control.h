#include"../Models/Model.h"

void pushPQ(Data *temp){
    if(!head){
        head = tail = temp;
    }
    else if(temp->yy < tail->yy || (temp->yy == tail->yy && temp->mm < tail->mm) || (temp->yy == tail->yy && temp->mm == tail->mm && temp->dd < tail->dd)){
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
    else if(temp->yy > head->yy || (temp->yy == head->yy && temp->mm > head->mm) || (temp->yy == head->yy && temp->mm == head->mm && temp->dd > head->dd)){
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    else{
        Data *curr = head;
        while(curr && curr->next->yy > temp->yy){
            curr = curr->next;
        }
        if(curr->next->yy == temp->yy){
            while(curr->next->yy == temp->yy && curr->next->mm < temp->mm){
                curr = curr->next;
            }
            if(curr->next->mm == temp->mm){
                while(curr->next->mm == temp->mm && curr->next->dd < temp->dd){
                    curr = curr->next;
                }
            }
        }
        curr->next->prev = temp;
        temp->next = curr->next;
        curr->next = temp;
        temp->prev = curr;
    }
}

void popTail(){
    if(!head) return;
    else if(head == tail){
        tail = NULL;
        free(tail);
    }
    else{
        Data *temp = tail->prev;
        temp->next = NULL;
        tail = NULL;
        free(tail);
        tail = temp;
    }
}

void printAll(){
    Data *curr = head;
    while(curr){
        printf("%d %s %d - %s\n", curr->dd, curr->month, curr->yy, curr->name);
        curr = curr->next;
    }
}