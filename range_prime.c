//program to print the prime numbers in a given range
//input
//1 10
//output
//2 3 5 7
#include <stdio.h>
int main()
{
    int a,b,i,j,flag;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {    
        flag=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0 && i!=1)
        printf("%d ",i);
    }
    return 0;
}
