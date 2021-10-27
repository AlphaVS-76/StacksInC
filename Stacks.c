#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack[N];
int top = -1;

void push() {
    int x;

    printf("Enter a number:\n");
    scanf("%d", &x);

    if(top == N-1)
        printf("Overflow\n");
    else{
        top++;
        stack[top] = x;
    }
}

void pop() {
    int item;

    if(top == -1)
        printf("Underflow\n");
    else{
        item = stack[top];
        top--;
        printf("Item popped: %d\n", item);
    }
}

void peak() {
    if(top == -1)
        printf("Empty\n");
    else
        printf("Topmost element = %d\n", stack[top]);
}

void display() {
    for (int i = 0; i >= 0; i--){
        printf("%d ", stack[top]);
    }
    printf("\n");
}

int main(){
    int choice;

    while(1) {
        printf("1. Push\n2. Pop\n3. peak\n4. Display\nEnter choice:\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peak();
                break;
            case 4:
                display();
                break;
            default:
                printf("Invalid Choice");
                break;
        }
    }

    return 0;
}