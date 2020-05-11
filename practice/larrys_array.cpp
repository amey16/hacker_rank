#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int arr[1000];
        cin>>n;
        for (int i=0;i<n;i++)
            cin>>arr[i];
        int inv = 0;
        for (int i=0;i<n;i++)
            for (int j=i+1;j<n;j++)
                if (arr[i] > arr[j])
                    inv++;
        if (inv%2==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
