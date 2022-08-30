#include<stdio.h>

double f(int x)
{
    double a=1;
    for(int b=1; b!=x;) a*=++b;
    return a;
}

double e=1;

int main(int argc, char** argv)
{
    int n;
    scanf("%d", &n);
    for(int i=0; i!=n;)
        e+=(double)1/f(++i);
    printf("%.8f\n", e);
    return 0;
}
