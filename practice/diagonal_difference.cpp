#include<cstdio>
int main()
{
    int n,i,j,s1=0,s2=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);  
    for(i=0;i<n;i++)
        s1+=a[i][i];
    for(i=0;i<n;i++)
        s2+=a[i][n-i-1];
    if(s1>=s2)
        printf("%d",s1-s2);
    else if(s2>s1)
        printf("%d",s2-s1);        
}