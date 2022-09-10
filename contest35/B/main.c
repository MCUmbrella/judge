#include<stdio.h>
#include<string.h>
#include<malloc.h>


char* reserved[8]={"if","else","switch","for","while","int","char","double"};

int check(char* str)
{
    if(str[0] >= '0' && str[0] <= '9') return 0;
    for(int i=0; i!=strlen(str); i++)
    {
        char c=str[i];
        if(!( (c>='0'&&c<='9') || (c>='A'&&c<='Z') || (c>='a'&&c<='z') || c=='_' ))
            return 0;
    }
    for(int i=0; i!=8; i++)
        if(!strcmp(reserved[i], str))
            return 0;
    return 1;
}

int main(int argc, char** argv)
{
    char** strs;
    int strsLen;
    scanf("%d", &strsLen);
    strs=(char**)malloc(sizeof(char*)*strsLen);
    
    for(int i=0; i!=strsLen; i++)
    {
        char s[64];
        scanf("%s", s);
        strs[i]=(char*)malloc(strlen(s)+1);
        memcpy(strs[i], s, strlen(s));
    }
    
    for(int i=0; i!=strsLen; i++)
        printf("%s\n", check(strs[i]) ? "YES" : "NO");
    return 0;
}
