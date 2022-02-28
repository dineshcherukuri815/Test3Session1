#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("Enter the numerator of first num: ");
  scanf("%d",num1);
  printf("Enter the numerator of first num: ");
  scanf("%d",den2);
  printf("Enter the numerator of second num: ");
  scanf("%d",num2);
  printf("Enter the numerator of second num: ");
  scanf("%d",den1);
}
void add(int num1,int den1, int num2, int den2, int *num3, int *den3)
{
  *den3=den1*den2;
  *num3=((*den3/den1)*num1+(*den3/den2)*num2);
}
void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("sum of %d/%d and %d/%d is is%d/%d",num1,den1,num2,den2,num3,den3);
}
int main()
{
  int num1,den1,num2,den2,num3,den3;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&num3,&den3);
  output(num1,den1,num2,den2,num3,den3);
  return 0;
}