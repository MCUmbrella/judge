#include<stdio.h>

int main(int argc, char** argv)
{
    int x;
    scanf("%d", &x);
    printf("%s\n", x==0||x%2?"NO":"YES");
    return 0;
}
