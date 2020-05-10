#include<cstdio>
int main()
{
    int i;long int a[5],s;long long unsigned int t=0,sum=0;
    for(i=0;i<5;i++)
        scanf("%ld",&a[i]);
    for(i=0;i<5;i++)
        sum+=a[i];
    long long unsigned int b=sum;
    for(i=0;i<5;i++)
    {
        s=sum-a[i];
        if(s>t)
            t=s;
        if(s<b)
            b=s;
    }
    printf("%llu %llu",b,t);
}

