#include<iostream>
#include<vector>
using namespace std;

int main(int argc,char** argv){
    int r,c;
    cin>>r>>c;
    int a[r][c];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    int sum=0,s1,s2,s3,s4,s5,s6;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            s1=s2=s3=s4=s5=s6=0;
            if(a[i][j]!=0){
                s1=1;
                s6=1;
            }
            if(i==0)
                sum+=a[i][j];
            if(i==r-1)
                sum+=a[i][j];
            if(j==0)
                sum+=a[i][j];
            if(j==c-1)
                sum+=a[i][j];
            if(i>0 && a[i][j]>a[i-1][j])
                s2=a[i][j]-a[i-1][j];
            if(i<r-1 && a[i+1][j]<a[i][j])
                s5=a[i][j]-a[i+1][j];
            if(j>0 && a[i][j]>a[i][j-1])
                s3=a[i][j]-a[i][j-1];
            if(j<c-1 && a[i][j+1]<a[i][j])
                s4=a[i][j]-a[i][j+1];
            sum+=(s1+s2+s3+s4+s5+s6);
        }
    }
    cout<<sum<<endl;
}
