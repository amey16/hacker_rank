#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a[3],b[3],A=0,B=0;
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    scanf("%d %d %d",&b[0],&b[1],&b[2]);
    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
            A+=1;
        else if(a[i]<b[i])
            B+=1;        
    }
    printf("%d %d",A,B);
}