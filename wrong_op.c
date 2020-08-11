//Program to correct the wrong arithmetic operator
//input:
//5+15=75
//output:
//*
#include <stdio.h>
int main()
{
    int a,b,c;
    char d,e[100];
    scanf("%s",e);
    sscanf(e,"%d%c%d=%d",&a,&d,&b,&c);
    if(a+b==c)printf("+");
    if(a-b==c)printf("-");
    if(a*b==c)printf("*");
    if(a/b==c)printf("/");
    return 0;
}
