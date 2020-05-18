# money-count
#include <stdio.h>

int main()
{
    int a[10]={2000,500,200,100,50,20,10,5,2,1};
    int c[10]={0},n,i,b=0;
    printf("Enter amount:");
    scanf("%d",&n);
    while(b<=9)
    {
       i=a[b];
       while((n-i)>=0)
       {
           n=n-i;
           c[b]=c[b]+1;
       }
       b++;
    }
    i=0;
    while((i<=9) || (c[i]!=0))
    {
        printf("%d:%d\n",a[i],c[i]);
        i++;
    }
    return 0;
}
