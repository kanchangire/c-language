#include<stdio.h>
void main()
{
    int i=1,n,counter=1;
    printf("Enter n : ");
    scanf("%d",&n);
 
    while(i<=n)
    {
        printf("%d\t",counter);
        counter = counter + 2;
        i++;
    }
}
