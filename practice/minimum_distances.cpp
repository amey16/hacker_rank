#include<iostream>
#include<vector>
using namespace std;

int main(int argc,char** argv){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    vector<int> diff;    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]==a[i])
                diff.push_back(j-i);
        }
    }    
    int min=n;
    if(diff.size()==0){
        cout<<"-1"<<endl;
        return 0;
    }
    for(int i=0;i<diff.size();i++)
        if(min>diff[i])
            min=diff[i];
    cout<<min<<endl;        
}
