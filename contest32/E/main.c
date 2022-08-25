#include<stdio.h>
#include<math.h>

long long f(long long a0, long long a1, long long a2, long long a3, long long a4, long long x)
{
    return a0 + a1*x + a2*pow(x,2) + a3*pow(x,3) + a4*pow(x,4);
}

int main()
{
    long long z,x,c,v,b,n;
    scanf("%lld%lld%lld%lld%lld%lld",&z,&x,&c,&v,&b,&n);
    printf("%lld\n",f(z,x,c,v,b,n));
}