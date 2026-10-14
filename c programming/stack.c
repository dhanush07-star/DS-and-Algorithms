#include<stdio.h>
#include<stdbool.h>

#define MAXSIZE 100

typedef struct block{
    int arr[MAXSIZE];
    int top;
} stack;

void init(stack *s){
    s->top = -1;
}

bool isfull(stack *s){
    return s->top >= MAXSIZE-1;
}

bool isEmpty(stack *s){
    return s->top == -1;
}

void push(stack *s,int val){
    if(isfull(s)){
        return "Stack is full";
    }else{
        s->top++;
        s->arr[s->top] = val;
        printf("Successful updatation!\n");
    }
}

int peek(stack *s){
    if(isEmpty(s)){
        printf("Stack is empty!");
        return -1;
    }
    return s->arr[s->top];
}

void display(stack *s){
    for(int i = 0 ; i <= s->top;i++){
        printf("%d\n",s->arr[i]);
    }
}

int pop(stack *s){
    if(isEmpty(s)){
        printf("Stack is empty!");
        return -1;
    }
    int val = s->arr[s->top];
    s->top--;
    return val;
}

int main(){
    stack s;
    init(&s);

    push(&s,10);
    push(&s,20);
    push(&s,30);
    push(&s,40);
    push(&s,50);

    display(&s);

}


