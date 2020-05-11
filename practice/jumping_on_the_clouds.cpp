#include<iostream>
#include<climits>
using namespace std;

int min1=INT_MAX;
void count(int a[],int s,int n,int cnt){
    if(s>n || a[s]==1)
        return;
    if(s==n-1){
        if(cnt<min1)
            min1=cnt;    
        return;
    }    
    count(a,s+1,n,cnt+1);
    count(a,s+2,n,cnt+1);
}
int main(int argc ,char** argv){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    count(a,0,n,0);
    cout<<min1<<endl;
}
