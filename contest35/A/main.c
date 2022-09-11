#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char in[131072];
char out[131072];

int main(int argc, char** argv)
{
    char curChr=0;
    char curCnt=1;

    scanf("%131071[^\n]", in);

    curChr=in[0];
    for(size_t i=0; i!=strlen(in); i++)
    {
        if(in[i] == ' ')
        {
            strcat(out, "-");
            curCnt=1;
            curChr=in[i+1];
            continue;
        }
        if(in[i+1] == in[i]) curCnt++;
        else
        {
            char s[16];
            sprintf(s, "%d%c", curCnt, curChr);
            strcat(out, s);
            curChr=in[i+1];
            curCnt=1;
        }
    }

    printf("%s\n", out);
    return 0;
}
