#include<stdio.h> 

void main()
{
 int num,newn,i,sum=0;

 printf("Enter number : ");
 scanf("%d",&num);
 printf("Numbers entered....\n");
 for(i=1;i<=num;i++)
 {
  scanf("%d",&newn);
  sum=sum+newn;
 }
 printf("Sum of given n digits is... %d",sum);
}
