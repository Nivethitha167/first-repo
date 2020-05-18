# substring-generation
#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,len,j,b=0,k=0;
    char str[10];
    printf("Enter the string");
    scanf("%s",&str);
    len=strlen(str);
    for(i=1;i<=len;i++)
    {
        for(j=0;j<=len-i;j++)
        {
            b=i+j-1;
            for(k=j;k<=b;k++)
            {
                printf("%s",str[k]);
            }
        }
    }
    return 0;
}
