#include<stdio.h>
#include<math.h>

int f(int s)
{
    int r=0; // result
    int x=s; // temp s
    int w=0; // result digits
    int n[9]; // result raw
    for(int i=9; i!=0; i--)
    {
        if(i<=x)
        {
            //printf("%d <= %d\n", i, x);
            n[w] = i;
            x-=i;
            w++;
        }
        //else printf("%d > %d\n", i, x);
        //for(int k=0; k!=9; k++) printf("%d ", n[k]); puts("");
    }
    for(int i=0; i!=w; i++)
        r+=pow(10, i) * n[i];
    return r;
}

int main(int argc, char** argv)
{
    int t;
    scanf("%d", &t);
    for(int i=0; i!=t; i++)
    {
        int s;
        scanf("%d", &s);
        printf("%d\n", f(s));
    }
    return 0;
}
