#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q;
    cin>>n>>q;
    vector<int> a[n];
    for(int i=0;i<n;i++){
        int t,o;
        cin>>t;
        for(int j=0;j<t;j++)
        {
            cin>>o;
            a[i].push_back(o);
        }
    }
    int r,s;
    for(int i=0;i<q;i++)
    {
        cin>>r>>s;
        cout<<a[r][s]<<endl;
    }
    return 0;
}
