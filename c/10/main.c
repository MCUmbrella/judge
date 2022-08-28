#include<stdio.h>

char f(float x)
{
    return x>=90?'A':
    x>=80?'B':
    x>=70?'C':
    x>=60?'D':
    'E';
}

int main(int argc, char** argv)
{
    float x;
    scanf("%f", &x);
    printf("%c\n", f(x));
    return 0;
}
