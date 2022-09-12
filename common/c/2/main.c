#include<stdio.h>
void star(int counts)
{
    for(int i=0;i!=counts;i++)
        printf("*");
    puts("");
}

int main(int argc, char** argv)
{
    for(int i=4;i!=0;i--)
        star(i);
    return 0;
}
