#include <stdio.h>
#include <stdlib.h>

// Structure for the stack node
struct StackNode {
    int data;
    struct StackNode* next;
};

// Structure for the stack
struct Stack {
    struct StackNode* top;
};

// Function to initialize an empty stack
struct Stack* initializeStack() {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = NULL;
    return stack;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return (stack->top == NULL);
}

// Function to push an element onto the stack
void push(struct Stack* stack, int data) {
    struct StackNode* newNode = (struct StackNode*)malloc(sizeof(struct StackNode));
    newNode->data = data;
    newNode->next = stack->top;
    stack->top = newNode;
    printf("Pushed %d onto the stack.\n", data);
}

// Function to pop an element from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Error: Stack underflow\n");
        exit(EXIT_FAILURE);
    }

    int popped = stack->top->data;
    struct StackNode* temp = stack->top;
    stack->top = stack->top->next;
    free(temp);

    printf("Popped %d from the stack.\n", popped);

    return popped;
}

// Function to display the elements of the stack
void display(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
        return;
    }

    struct StackNode* current = stack->top;
    printf("Stack elements: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Stack* stack = initializeStack();
    int choice, element;

    do {
        // Display menu
        printf("\nMenu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter element to push onto the stack: ");
            scanf("%d", &element);
            push(stack, element);
            break;
        case 2:
            pop(stack);
            break;
        case 3:
            display(stack);
            break;
        case 4:
            printf("Exiting the program.\n");
            break;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 4);

    // Free the dynamically allocated memory for the stack
    free(stack);

    return 0;
}