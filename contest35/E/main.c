#include<stdio.h>
#include<stdlib.h>

void solve(int ***ptr_nums, int n)
{
    int nt=n;
    int lines=0;
    int s=0;
    for(;;)
    {
        if((nt = nt-lines) <= 0) break;
        lines++;
    }
    *ptr_nums = (int**)malloc(sizeof(int*)*lines); // assign lines
    for(int i=0; i!=lines; i++) // assign line elements and initialize
    {
        (*ptr_nums)[i] = (int*)malloc(sizeof(int)*(i+1));
        for(int j=0; j!=i+1; j++)
            (*ptr_nums)[i][j] = s < n ? ++s : -1;
    }
}

int main(int argc, const char *argv[])
{
    int n;
    scanf("%d", &n);
    int **nums;
    solve(&nums, n);
    int size;
    int s = 0;
    for (size = 1; s < n; size++)
    {
        s += size;
    }
    size -= 1;
    for (int i = 1; i <= size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d", nums[i - 1][j]);
        }
        printf("\n");
        free(nums[i - 1]);
    }
    free(nums);
    return 0;
}
