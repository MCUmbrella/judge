#include<stdio.h>
#include<math.h>

// ....................../´¯/) 
// ....................,/¯../ 
// .................../..../ 
// ............./´¯/'...'/´¯¯`·¸ 
// ........../'/.../..../......./¨¯\ 
// ........('(...´...´.... ¯~/'...') 
// .........\.................'...../ 
// ..........''...\.......... _.·´ 
// ............\..............( 
// ..............\.............\...

int cache[23];
char c;

void genSpace(int counts)
{
    for(int i=0;i!=counts;i++)
        putchar(' ');
}

void genChar(int counts)
{
    for(int i=0;i!=counts;i++)
        if(i<counts-1)
        {
            putchar(c);
            putchar(c);
        }
        else putchar(c);
    puts("");
}

void rtmd(int lines)
{
    for(int i=lines; i!=-lines-1; i--)
    {
        if(i==1) i-=2;
        genSpace(lines-fabs(i));
        genChar(fabs(i));
    }
}

int locate(int chars)
{
    if(chars>=cache[22]) return 22;
    if(chars<=cache[0]) return 0;
    for(int i=0; i!=23; i++)
        if(chars>=cache[i] && chars<cache[i+1]) return i;
}

int main(int argc, char** argv)
{
    cache[0]=1;
    int chars=1;
    int base=6;
    for(int i=1; i!=23; i++)
    {
        chars+=base;
        base+=4;
        cache[i]=chars;
    }
    /*for(int i=0; i!=23; i++)
        printf("+%d lines: %d chars\n", i, cache[i]);*/
    int lines;
    scanf("%d %c", &lines, &c);
    //printf("located: +%d line, %d chars left\n", locate(lines), lines-cache[locate(lines)]);
    rtmd(locate(lines)+1);
    printf("%d\n", lines-cache[locate(lines)]);
    return 0;
}
