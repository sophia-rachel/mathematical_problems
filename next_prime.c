//Program to print the next prime number
//input:
//17
//output:
//19
#include <stdio.h>
int main()
{
    int a,b,f,i;
    scanf("%d",&a);
    b=a+1;
    while(1)
    {   f=0;
        for(i=2;i<=b/2;i++)
        if(b%i==0)
        {
            f=1;
            break;
        }
        if(f==0)
        {
            printf("%d",b);
            exit(0);
        }
        b++;
    }
    return 0;
}
