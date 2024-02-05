#include<stdio.h>
void main()
{
 int a,b;

 printf("Enter numbers...");
 scanf("%d%d",&a,&b);
 if(a>b)
  printf("a is greater than b");
 else if(b>a)
  printf("b is greater than a");
 else
  printf("both are equal");

}
