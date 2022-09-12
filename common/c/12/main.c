#include<stdio.h>

short f(int x)
{
    return !(x%400) || (!(x%4) && x%100);
}

int main(int argc, char** argv)
{
    int x;
    int run=0;
    scanf("%d", &x);
    if(x<=2000 || x>2100)
    {
        puts("Invalid year!");
        return 0;
    }
    for(int i=2001; i!=x+1; i++)
        if(f(i))
        {
            printf("%d\n", i);
            run++;
        }
    if(!run) puts("None");
    return 0;
}
