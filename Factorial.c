#include<stdio.h>
int main()
{
    int i,n;
    unsigned long fact=1;
    printf("Enter an integer:");
    scanf("%d",&n);
    if(n<0)
    printf("Error! Factorial of a negative number doesnt exist.");
    else{
        for(i=1;i<=n;i++)
        {
            fact*=i;
        }
        
    }
    printf("Factorial of %d=%llu",n,fact);
    return 0;
}