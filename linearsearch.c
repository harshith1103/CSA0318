#include<stdio.h>
int main()
{
    int arr[]={44,68,74,22,98,86};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=98;
    for(int i=0;i<size;i++)
    {
        if(key==arr[i])
        {
            printf("position of key %d is %d\n",key,i);
        }
    }
}