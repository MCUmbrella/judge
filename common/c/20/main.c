#include<stdio.h>

int f(int n)
{
    int a=1;
    for(int i=1; i!=n; i++)
    {
        a++;
        a*=2;
    }
    return a;
}

int main(int argc, char** argv)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
    return 0;
}
