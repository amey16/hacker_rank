#include<iostream>
#include<algorithm>
using namespace std;
int main(int argc,char** argv)
{
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int n;
        cin>>n;
        int a[n][n];
        int sumr[n];
        int sumc[n];
        for(int j=0;j<n;j++){
            sumr[j]=0;
            sumc[j]=0;
        }
        for(int j=0;j<n;j++)
            for(int k=0;k<n;k++)
                cin>>a[j][k];
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                sumr[j]+=a[j][k];
                sumc[j]+=a[k][j];
            }
        }
        sort(sumr,sumr+n);
        sort(sumc,sumc+n);
        // for(int j=0;j<n;j++)
        //     cout<<sumr[j]<<" ";
        // cout<<endl;    
        // show(sumr);
        int l;
        for(l=0;l<n;l++)
            if(sumr[l]!=sumc[l])
                break;
        if(l==n)        
            cout<<"Possible"<<endl;
        else
            cout<<"Impossible"<<endl;
    }
}
