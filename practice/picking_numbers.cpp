#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main(int argc,char** argv){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    // for(int i=0;i<n;i++)
    //     cout<<a[i]<<" ";
    // cout<<endl;    
    int cnt=1,max=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]==a[i] || a[j]==a[i]+1)
                cnt++;    
        }
        if(cnt>max)
            max=cnt;
        cnt=1;
    }
    cout<<max<<endl;
}
