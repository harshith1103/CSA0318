#include<stdio.h>
void function (int m,int n,int nxt,int num)
{
    if(num>=2)
    {
        printf(" ,%d",nxt);
        m=n;
        n=nxt;
        nxt=m+n;
        fibonacci(m,n,nxt,num-1);
    }
}
int main()
{
    int num=10;
    int m=0;
    int n=1;
    int nxt=m+n;
    printf("fibonacci series:%d,%d",m,n);
    fibonacci(m,n,nxt,num);
}