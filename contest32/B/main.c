#include<stdio.h>
float a1,a2;
int b1,b2;
int main()
{
  scanf("%f%f%d%d",&a1,&a2,&b1,&b2);
  printf("%.2f\n",a1-b1+a2-b2);
}