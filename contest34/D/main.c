#include<stdio.h>
#include<malloc.h>

void sort(int* nums, int numsLen)
{
    int sorted=0;
    int tmp=0;
    do
        for(int i=0; i!=numsLen-1; i++)
            if(nums[i] <= nums[i+1])
                sorted++;
            else
            {
                tmp=nums[i+1];
                nums[i+1]=nums[i];
                nums[i]=tmp;
                sorted=0;
            }
    while(sorted<=numsLen);
}

int main(int argc, char** argv)
{
    int* a;
    int al;
    scanf("%d", &al);
    a=(int*)malloc(sizeof(int)*al);
    for(int i=0; i!=al; i++)
        scanf("%d", &a[i]);
    sort(a, al);
    for(int i=0; i!=al-1; i++) printf("%d ", a[i+1] - a[i]);
    return 0;
}
