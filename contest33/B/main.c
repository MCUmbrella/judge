#include<stdio.h>

int scores[5];
int fails;

int main(int argc, char** argv)
{
    for(int i=0; i!=5; i++)
        scanf("%d", &scores[i]);
    for(int i=0; i!=5; i++)
        if(scores[i] < 60)
            fails++;
    printf("%s\n", fails==1?"wu wu wu":"xi xi");
    return 0;
}
