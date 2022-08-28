#include<stdio.h>

float f(float x)
{
    if(x<=50) return 0.53*x;
    return 50*0.53+(x-50)*0.58;
}

int main(int argc, char** argv)
{
    float x;
    scanf("%f", &x);
    if(x<0)
    {
        puts("Invalid Value!");
        return 0;
    }
    printf("%.2f\n", f(x));
    return 0;
}
