#include<stdio.h>
#include<malloc.h>

int f(int* nums, int numsLen)
{
    int cur=1;
    int max=0;
    for(int i=0; i!=numsLen-1; i++)
    {
        if(nums[i+1] > nums[i])
        {
            //printf("%d>%d, cur=%d\n", nums[i+1], nums[i], cur+1);
            cur++;
        }
        else
        {
            //printf("%d<=%d\n", nums[i+1], nums[i]);
            if(cur>max) max=cur;
            cur=1;
        }
    }
    return max>cur?max:cur;
}

int main(int argc, char** argv)
{
    int* ns;
    int n;
    scanf("%d", &n);
    ns=(int*)malloc(sizeof(int)*n);
    for(int i=0; i!=n; i++)
        scanf("%d", &ns[i]);
    printf("%d\n", f(ns,n));
    return 0;
}
