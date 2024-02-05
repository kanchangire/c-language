#include<stdio.h>
void main()
{
  int i=1,num;

  printf("Enter number : ");
  scanf("%d",&num);
  i=num;
  do
  {
     printf("%d\t",i);
     i--;
  }while(i>=1);

}
