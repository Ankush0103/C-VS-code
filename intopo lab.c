// LAB INFIX TO POSTFIX
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
# define MAXSIZE = 10;
struct stack{
    int size;
    int top;
    int *arr;
};

int stackTop(struct stack *s){
      return s->arr[s->top];
}

int isEmpty(struct stack *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *s)
{
    if (s->top == s->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *s, int val){
    int x;
    x = isFull(s);
    if(x==1){
        printf("Stack is full\n");
    }
    else{
        s->top++;
        s->arr[s->top] = val;
    }
}
char pop(struct stack *s){
    int y;
    y = isEmpty(s);
    if(y==1){
        printf("Stack is Empty\n");
        return -1;
    }
    else{
        char val = s->arr[s->top];
        s->top--;
        return val;
    }
}

int precedence(char ch)
{
    if (ch == '*' || ch == '/')
    {
        return 3;
    }
    else if (ch == '+' || ch == '-')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

int isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char *infixtoPostfix(char* infix)
{
    struct stack * s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));
    char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char));
    int i = 0; // Track infix traversal
    int j = 0; // Track postfix addition
    while (infix[i] != '\0')
    {
        if (!isOperator(infix[i]))
        {
            postfix[j] = infix[i];
            j++;
            i++;
        }
        else
        {
            if (precedence(infix[i]) > precedence(stackTop(s)))
            {
                push(s, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(s);
                j++;
            }
        }
    }


    while (!isEmpty(s))
    {
        postfix[j] = pop(s);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}

int main()
{
    char * infix = "x-y/z";
    printf("Postfix is %s", infixtoPostfix(infix));
    return 0;
}

