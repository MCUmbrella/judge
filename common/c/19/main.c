#include<stdio.h>
#include<malloc.h>

int main(int argc, char** argv)
{
    int* nums;
    int numsLength;
    int min;
    scanf("%d", &numsLength);
    nums=(int*)malloc(sizeof(int)*numsLength);
    for(int i=0; i!=numsLength; i++)
        scanf("%d", &nums[i]);
    min=nums[0];
    for(int i=0; i!=numsLength; i++)
        if(nums[i]<min) min=nums[i];
    printf("min = %d\n", min);
    return 0;
}
