#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
        cin>>arr[i];
    
    int sorted[n];
    for (int i=0;i<n;i++)
        sorted[i]=arr[i];
    sort(sorted,sorted+n);
    vector<int> diff;
    for (int i=0;i<n;i++)
        if (sorted[i]!=arr[i])
            diff.push_back(i);
    if (diff.size()==0)
        cout<<"yes"<<endl;  
    else if (diff.size()==2){
        cout<<"yes"<<endl;
        cout<<"swap"<<" "<<diff[0]+1<<" "<<diff[1]+1;
    }
    else 
    {
        int st = diff[0], ed = diff[diff.size()-1];
        while (st<ed)
        {
            swap(arr[st],arr[ed]);
            st++;
            ed--;
        }
        int flag=1;
        for (int i=0;i<n;i++)
            if (sorted[i]!=arr[i])
            {
                cout<<"no"<<endl;  
                return 0;
            }
        cout<<"yes"<<endl;
        cout<<"reverse"<<" "<<diff[0]+1<<" "<<diff[diff.size()-1]+1;
    }
}
