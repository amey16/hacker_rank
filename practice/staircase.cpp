#include<cstdio>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=n-i;k>=1;k--)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("#");
        printf("\n");
    }
}