#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,i,*p,sum=0;
    printf("enter the no. of elements\n");
    scanf("%d",&n);                     //number of elements you want to enter is stored in n
    p=(int*)malloc(n * sizeof(int));   //dynamic memory allocation using malloc function
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);         //taking input elements
    }   

    for(i=0;i<n;i++)
    {
        sum=sum+*(p+i);             //calculating sum of elements
    }

    printf("sum = %d\n",sum);           //displaying sum of the elements
}
