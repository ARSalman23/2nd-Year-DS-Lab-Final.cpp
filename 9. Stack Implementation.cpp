#include<bits/stdc++.h>
using namespace std;

#define STACK_MAX 100

typedef struct
{
    int top;
    int data[STACK_MAX];
} Stack;

void push(Stack *s, int val)
{
    if (s->top < STACK_MAX)
    {
        s->data[s->top] = val;
        s->top = s->top + 1;
    }
    else
    {
        cout << "Stack is full!" << endl;
    }
}

int pop(Stack *s)
{
    if (s->top == 0)
    {
        cout << "Stack is empty!" << endl;
        return -1;
    }
    else
    {
        s->top = s->top - 1;
        return s->data[s->top];
    }
}

int main()
{
    Stack my_stack;
    int val;

    my_stack.top = 0;

    push(&my_stack, 1);
    push(&my_stack, 2);
    push(&my_stack, 3);

    val = pop(&my_stack);
    if (val != -1)
    {
        cout << val << endl;
    }

    val = pop(&my_stack);
    
    if (val != -1)
    {
        cout << val << endl;
    }

    val = pop(&my_stack);
    if (val != -1)
    {
        cout << val << endl;
    }

    val = pop(&my_stack);
    
    if (val != -1)
    {
        cout << val << endl;
    }

    return 0;
}
