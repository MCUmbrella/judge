#include<stdio.h>
#include<math.h>

int f(int x)
{
    int a=0;
    for(int i=0; i!=x;)
        a+=pow(2, ++i);
    return a;
}

int main(int argc, char** argv)
{
    int x;
    scanf("%d", &x);
    printf("%d\n", f(x));
    return 0;
}
