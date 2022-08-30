#include<stdio.h>

void genStars(int counts)
{
    for(int i=0; i!=counts; i++)
        putchar('*');
    putchar('\n');
}

int main(int argc, char** argv)
{
    int x,y;
    scanf("%d%d", &x, &y);
    for(int i=0; i!=y; i++)
        genStars(x);
    return 0;
}
