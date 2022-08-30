#include<stdio.h>

short f(int x, int y)
{
    return (!(x%2) && (y==1||y==3||y==5||y==6)) || (x%2 && (y==2||y==4||y==6||y==7));
}

int main(int argc, char** argv)
{
    int x,y;
    scanf("%d%d", &x, &y);
    printf("%s\n", f(x,y)?"Hao ye":"Wo ai xue xi");
    return 0;
}
