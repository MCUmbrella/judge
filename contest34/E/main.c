#include<stdio.h>
#include<malloc.h>

int f(int* m, int n)
{
    for(int i=1; i!=n+1; i++)
        for(int j=1; j!=n+1; j++)
        {
            //printf("%d\n", m[i*(n+2) + j]);
            if(m[i*(n+2) + j]==-1) continue;
            int mines=0;
            if(m[(i-1)*(n+2) + j-1]==-1) mines++;
            if(m[(i-1)*(n+2) + j]==-1) mines++;
            if(m[(i-1)*(n+2) + j+1]==-1) mines++;
            if(m[i*(n+2) + j-1]==-1) mines++;
            if(m[i*(n+2) + j+1]==-1) mines++;
            if(m[(i+1)*(n+2) + j-1]==-1) mines++;
            if(m[(i+1)*(n+2) + j]==-1) mines++;
            if(m[(i+1)*(n+2) + j+1]==-1) mines++;
            //printf("mines: %d\n", mines);
            if(mines!=m[i*(n+2) + j]) return 0;
        }
    return 1;
}

int main(int argc, char** argv)
{
    int n;
    int* map;
    scanf("%d", &n);
    int n2=n+2;
    //int map[n2][n2]={};
    map=(int*)malloc(sizeof(int)*n2*n2);
    for(int i=1; i!=n+1; i++)
        for(int j=1; j!=n+1; j++)
            scanf("%d", &map[i*n2 + j]);
    /*for(int i=0; i!=n2; i++)
    {
        for(int j=0; j!=n2; j++)
        {
            printf("%d  ", map[i*n2 + j]);
        }
        puts("");
    }*/
    printf("%s\n", f(map, n) ? "YES" : "NO");
    return 0;
}
