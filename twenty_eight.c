#include<stdio.h>
void main()
{
    int i=1,num,counter=2;
    printf("Enter number : ");
    scanf("%d",&num);
  
    while(i<=num)
    {
        printf("%d\t",counter);
        counter = counter + 2;
        i++;
    }
}
