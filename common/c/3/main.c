#include<stdio.h>

void genStar(int counts)
{
    for(int i=0;i!=counts;i++)
        if(i==counts-1)printf("*");
        else printf("* ");
    puts("");
}

void genSpace(int counts)
{
    for(int i=0;i!=counts;i++)
        printf(" ");
}

int main(int argc, char** argv)
{
    for(int i=4;i!=0;i--)
    {
        genSpace(4-i);
        genStar(i);
    }
    return 0;
}
