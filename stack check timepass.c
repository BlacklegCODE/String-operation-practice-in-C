#include<stdio.h>
#define MAX 5

int stack[MAX];
int stack2[MAX];
int top = -1;

void push(int value)
{
    if(top == MAX -1)
    {
        printf("Stack overflow !\n");
    }
    else
    {
        top++;
        stack[top] = value;
        printf("%d element pushed into the stack !\n");
    }
}

int pop()
{
    if(top == -1)
    {
        printf("Stack underflow !\n");
        return top;
    }
    else
    {
        int value = stack[top];
        top--;
        return value;
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty !\n");
    }

    else
    {
         for(int i = top;i>=0;  i--)
    {
        printf("%d ",stack[i]);
        printf("\n");
    }
    printf("\n");
    }
}

int main()
{
    int a,b,c,d,z;


    printf("Enter first element :\n");
    scanf("%d",&a);
    printf("Enter second element :\n");
    scanf("%d",&b);
    printf("Enter third element :\n");
    scanf("%d",&c);
    printf("Enter fourth element :\n");
    scanf("%d",&d);

    push(a);
    push(b);
    push(c);
    push(d);

    display();

    int popval = pop();
    if(popval != -1)
    {
        printf("%d element ppopped !",popval);
    }

    display();

    if(stack[MAX] == stack2[MAX])
    {
        printf("Stacks are same");
    }
    else
    {
        printf("Stacks are not same !\n");
    }

    return 0;

}
