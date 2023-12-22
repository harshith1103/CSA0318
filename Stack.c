#include<stdio.h>
#define size 5
int top=-1;
int stack[size];
void push(int num)
{
    if(top==size-1)
    {
        printf("\nOverFlow\n");
    }
    else
    {
        top++;
        stack[top]=num;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("\nUnderFlow\n"); 
    }
    else
    {
        top--;
    }
}
void show()
{
    for(int i=top;i>=0;i--)
    printf("%d\n",stack[i]);
}
int main()
{
    int option;
    int num;
    while(1)
    {
        printf("***********************\n");
        printf("\n\nPerform Operation in a Stack");
        printf("\n.Push Element\n2.Pop Element\n3.show\n4.End\n");
        printf("choose an option:");
        scanf("%d",&option);
        switch(option)
        {

            case 1:
            scanf("%d",&num);
            push(num);
            break;
            case 2:
            pop();
            break;
            case 3:
            show();
            break;
            case4:
            return 0;
            default:
            printf("Invalid Operation!Please Try Again");
            break;
        }
    }
}