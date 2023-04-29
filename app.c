#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int stack[MAX];
int top = -1;

void push(){
    int element;
    printf("Enter element to push: "); scanf("%d", &element);

    if (top == MAX - 1) {
        printf("Stack overflow\n");
    } else {
        top++;
        stack[top] = element;
        printf("Pushed element is %d\n", element);
    }
}

void pop(){
    int element;

    if (top == -1) {
        printf("Stack underflow \n");
    } else {
        element = stack[top];
        top--;
        printf("Popped element is %d\n", element);
    }
}

void display(){
    int i;

    if (top<=0) {
        printf("stack is empty \n");
    } else {
        printf("the elements in stack are: ");   
        
        for (i = top; i >= 0; i--){
            printf(" %d ", stack[i]);
        }
    }
}


int main(){
    int choice, input;

    printf("New stack of size %d initialized... \n", MAX);

    while (1){
        printf("\n");
        printf("Enter 0 to EXIT  \n");
        printf("Enter 1 to DISPLAY  \n");
        printf("Enter 2 to PUSH  \n");
        printf("Enter 3 to POP  \n");

        printf("\nEnter your choice:    "); scanf("%d", &choice);
        printf("\n");
        
        switch (choice){
            case 0:
                printf("Thank You!");
                exit(0);
                break;

            case 1:
                display();
                break;

            case 2:
                
                push(input);
                break;

            case 3:
                pop();
                break;
            
            default:
                printf("Wrong Choice!");
                break;
        }
    }       

    return 0;
}