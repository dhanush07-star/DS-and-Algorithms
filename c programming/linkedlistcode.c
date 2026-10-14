#include<stdio.h>
#include<stdlib.h>


typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node * head = NULL;


void insert(int val){
    
    Node* newNode= malloc(sizeof(Node));
    if(newNode == NULL){
        printf("Memory allpocation is failed!\n");
        return;
    }
    newNode->data= val;
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
        return;
    }

    Node* curr = head;

    while(curr->next!= NULL){
        curr=curr->next;
    }
    curr->next = newNode;
}

void display(){
    Node* curr = head;

    while(curr != NULL){
        printf("%d\n",curr->data);
        curr = curr->next;
    }
}


int main(){
 

    printf("*********************************************************");
    printf("\n");
    
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);

    display();







    printf("*********************************************************");
    printf("\n");
}

