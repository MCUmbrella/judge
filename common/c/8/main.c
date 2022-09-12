#include<stdio.h>
#include<math.h>

float f(float x)
{
    return x < 0.0 ? pow((x+1),2) + x*2.0 + 1.0/x : sqrt(x);
}

int main(int argc, char** argv)
{
    float x;
    scanf("%f",&x);
    printf("%.2f",f(x));
    return 0;
}
