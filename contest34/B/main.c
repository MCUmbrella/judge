#include<stdio.h>
#include<malloc.h>

int main(int argc, char** argv)
{
    int n;
    int* blocks;
    int loc=1;
    int flips=0;
    scanf("%d", &n);
    blocks=(int*)malloc(sizeof(int)*n);
    for(int i=0; i!=n; i++)
        scanf("%d", &blocks[i]);
    for(;;)
    {
        if(loc<1 || loc>n)
        {
            printf("%d\n", flips);
            break;
        }
        loc+=blocks[loc-1];
        //printf("%d\n", loc);
        flips++;
        if(flips==1000)
        {
            puts("FALSE");
            break;
        }
    }
    return 0;
}
