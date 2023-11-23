#include <stdio.h>
#include <stdlib.h>

#define INITIAL_SIZE 5

// Structure to represent the stack
struct DynamicStack {
    int* array;
    int top;
    int capacity;
};

// dynamic stack
struct DynamicStack* createStack() {
    struct DynamicStack* stack = (struct DynamicStack*)malloc(sizeof(struct DynamicStack));
    stack->capacity = INITIAL_SIZE;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}

// stack is empty
int isEmpty(struct DynamicStack* stack) {
    return (stack->top == -1);
}

// stack is full
int isFull(struct DynamicStack* stack) {
    return (stack->top == stack->capacity - 1);
}

// resize capacity
void resize(struct DynamicStack* stack) {
    stack->capacity *= 2;
    stack->array = (int*)realloc(stack->array, stack->capacity * sizeof(int));
}

// push
void push(struct DynamicStack* stack, int data) {
    if (isFull(stack))
        resize(stack);

    stack->array[++stack->top] = data;
    printf("%d pushed to stack\n", data);
}

// pop
int pop(struct DynamicStack* stack) {
    if (isEmpty(stack))
        return -1; // Stack is empty

    return stack->array[stack->top--];
}

// peek
int peek(struct DynamicStack* stack) {
    if (isEmpty(stack))
        return -1;

    return stack->array[stack->top];
}

int main() {
    struct DynamicStack* stack = createStack();

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);

    printf("%d popped from stack\n", pop(stack));

    printf("Top element is %d\n", peek(stack));

    free(stack->array);
    free(stack);

    return 0;
}