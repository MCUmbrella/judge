#include<stdio.h>
#include<malloc.h>

int main(int argc, char** argv)
{
    int* nums;
    int numsLength;
    double sum=0.0;
    scanf("%d", &numsLength);
    nums=(int*)(malloc(sizeof(int)*numsLength));
    for(int i=0; i!=numsLength; i++)
        scanf("%d", &nums[i]);
    for(int i=0; i!=numsLength; i++)
        sum+=nums[i];
    printf("%.0lf %.1lf\n", sum, sum/numsLength);
    return 0;
}
