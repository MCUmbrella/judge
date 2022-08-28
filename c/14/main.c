#include<stdio.h>

double f(int n)
{
    int a=1, b=1, c=1;
    double d=0;
    for(int i=0; i!=n; i++)
    {
        d += (double)a / b * c;
        a++;
        b+=2;
        c*=-1;
    }
    return d;
}

int main(int argc, char** argv)
{
    int n;
    scanf("%d", &n);
    printf("%.3lf\n", f(n));
    return 0;
}
