//Program to print the nth term of an arithmetic progression
//input
//5 10
//6
//output
//30
#include <stdio.h>
int main()
{
    int n,a,b,d,s;
    scanf("%d%d%d",&a,&b,&n);
    d=b-a;
    s=a+(n-1)*d;
    printf("%d",s);
    return 0;
}
