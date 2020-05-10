#include<cstdio>
int main()
{
    int i,j;
    scanf("%d",&j);
    long int a[1000];
    long int sum=0;
    for(i=0;i<j;i++)
        scanf("%ld",&a[i]);
    for(i=0;i<j;i++)
        sum+=a[i];
    printf("%ld",sum);
}