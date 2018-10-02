# sum-of-N
sum of N elements using dynamic memory allocations
#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,i,*p,i,sum=0;
printf("enter the no. of elements\n");
scanf("%d",&n);
p=(int*)malloc(n*size of(int));
printf("enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",p+i);
for(i=0;i<n;i++)
sum=sum+*(p+i);
printf("sum=%d:,sum);
}
