#include<stdio.h>

int ftoc(int f)
{
    return 5*(f-32)/9;
}

int main(int argc, char** argv)
{
    int a;
    scanf("%d",&a);
    printf("%d\n",ftoc(a));
    return 0;
}
