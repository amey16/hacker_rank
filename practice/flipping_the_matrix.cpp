#include<iostream>
#include<cmath>
using namespace std;

int main(int argc,char** argv){
    int q;
    cin>>q;
    for(int k=0;k<q;k++){
        int n;
        cin>>n;
        int a[2*n][2*n];
        for(int i=0;i<2*n;i++)
            for(int j=0;j<2*n;j++)
                cin>>a[i][j];
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int num1=a[i][(2*n)-j-1];
                int num2=a[i][j];
                int num3=a[(2*n)-i-1][j];
                int num4=a[(2*n)-i-1][(2*n)-j-1];
                sum+=max(num1,max(num2,max(num3, num4)));
            }
        }
        cout<<sum<<endl;
    }
}
