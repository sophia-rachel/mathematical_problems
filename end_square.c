//program to square the first and last digits of number and replace them in place of the corresponding digits
//input:
//8783
//output:
//64789
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int squareEnds(int n)
{
    int i,j=0,a,b;
    char s[1000],t[20],u[20],v[20],x[1000];
    a=n%10;
    sprintf(s,"%d",n);
    b=s[0]-'0';
    a=a*a;
    b=b*b;
    sprintf(t,"%d",a);
    sprintf(u,"%d",b);
    for(i=1;i<strlen(s)-1;i++)
    v[j++]=s[i];
    v[j]='\0';
    strcat(x,u);
    strcat(x,v);
    strcat(x,t);
    return (atoi(x));
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",squareEnds(n));
    return 0;
}
