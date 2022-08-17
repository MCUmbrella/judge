#include<stdio.h>

float average3(int a,int b,int c)
{
    return (a+b+c)/3.0;
}

int getInt()
{
    int a;
    scanf("%d",&a);
    return a;
}

int main(int argc, char** argv)
{
    printf("%.2f\n",average3(getInt(),getInt(),getInt()));
    return 0;
}
