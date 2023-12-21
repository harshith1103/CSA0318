#include<stdio.h>
int main()
{
int arr[]={1,2,3,4,8,12,44,85};
int size=sizeof(arr)/sizeof(arr[0]);
int key=8;
int low=0,high=size;
int mid;
while(low<high)
{
    mid=(low+high)/2;
    if(key==arr[mid])
    {
        break;
    }
    if(key<arr[mid])
    {
        high=mid-1;
    }
    else{
        low=mid+1;
    }
}
printf("position of key %d is %d\n",key,mid);
}
