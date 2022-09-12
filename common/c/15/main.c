#include<stdio.h>

int letter, blank, digit, other;

void f(char x)
{
    if((x>='A' && x<='Z') || (x>='a' && x<='z')) letter++;
    else if(x>='0' && x<='9') digit++;
    else if(x==' ' || x=='\n') blank++;
    else other++;
}

int main(int argc, char** argv)
{
    for(int i=0; i!=10; i++) f(getchar());
    printf("letter = %d, blank = %d, digit = %d, other = %d\n",letter,blank,digit,other);
    return 0;
}
