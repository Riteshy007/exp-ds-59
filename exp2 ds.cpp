#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int stack[MAX];
int top = -1;

int isfull() {
    return top == MAX - 1;
}

int isempty() {
    return top == -1;
}

void push() {
    int value;
    if (isfull()) {
        printf("Stack Overflow!\n");
        return;
    }
    printf("Enter value to push: ");
    scanf("%d", &value);
    stack[++top] = value;
}

void pop() {
    if (isempty()) {
        printf("Stack Underflow!\n");
        return;
    }
    printf("Popped element: %d\n", stack[top--]);
}

void display() {
    int i;
    if (isempty()) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements are:\n");
    for (i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}

int main() {
    int choice;
    do {
        printf("\n*** Stack Menu ***\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: 
                push(); 
                break;
            case 2: 
                pop(); 
                break;
            case 3: 
                display(); 
                break;
            case 4: 
                printf("Exiting...\n"); 
                break;
            default: 
                printf("Invalid choice!\n");
        }
    } while (choice != 4);
    return 0;
}

