#include<stdio.h>
#define ull unsigned long long

ull n(ull x)
{
    ull a=1;
    for(ull b=1; b!=x;) a*=++b;
    return a;
}

ull f(ull x)
{
    ull a=0;
    for(ull i=0; i!=x; i++) a+=n(i+1);
    return a;
}

int main(int argc, char** argv)
{
    ull x;
    scanf("%llu", &x);
    printf("%llu\n", f(x));
    return 0;
}
