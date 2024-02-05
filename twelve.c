#include<stdio.h> 
void main()
{
  int roll_no,mark1,mark2,mark3,total;
  float average;

  printf("Enter roll number : ");
  scanf("%d",&roll_no);
  printf("Enter marks 1 : "); 
  scanf("%d",&mark1);
  printf("Enter marks 2 : ");
  scanf("%d",&mark2);
  printf("Enter marks 3 : ");
  scanf("%d",&mark3);
  total=mark1+mark2+mark3;
  average=total/3.0;
  printf("\nStudent Roll Number : %d",roll_no);
  printf("\nMarks 1 : %d",mark1);
  printf("\nMarks 2 : %d",mark2);
  printf("\nMarks 3 : %d",mark3);
  printf("\nTotal : %d ",total);
  printf("\nAverage : %f ",average);

}
