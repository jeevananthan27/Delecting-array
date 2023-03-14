#include<stdio.h>
void main()
{
    int i,pos,num;
    int arr[7]={5,10,20,25,30.35,40};
    printf("Enter the position of number to be deleted : ");
    scanf("%d",&pos);
    num=arr[pos];
    for(i=pos;i<num;i++){
        arr[i]=arr[i+1];
    }
    printf("The number deleted is %d\n",num);
    for(i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
}
