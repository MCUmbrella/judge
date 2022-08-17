#include<stdio.h>

float f(float x)
{
    return x==0?0:1/x;
}

int main(int argc, char** argv)
{
    float x;
    scanf("%f",&x);
    printf("%.1f\n",f(x));
    return 0;
}
