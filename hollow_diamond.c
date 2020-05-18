# hollow diamond symbol-pattern
#include <stdio.h>
main()
{
    int i,j,n,c,temp,k;
    printf("Enter no of rows");
    scanf("%d",&n);
    c=1;
    temp=n;
    for(i=1;i<n;i++)
    {
        for(k=1;k<=c;k++)
        {
            printf(" ");
        }
        for(j=1;j<=temp;j++)
        {
            printf(" *");
        }
        c++;
        temp--;
        printf("\n");
    }
    c=n;
    temp=1;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=c;k++)
        {
            printf(" ");
        }
        for(j=1;j<=temp;j++)
        {
            printf(" *");
        }
        c--;
        temp++;
        printf("\n");
    }
}
