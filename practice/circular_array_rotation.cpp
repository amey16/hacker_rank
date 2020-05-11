#include<iostream>
using namespace std;
void swap(int *brr,int left,int right){
    int temp=brr[left];
    brr[left]=brr[right];
    brr[right]=temp;
}
void rev(int *crr,int l,int r){
    int left=l;
    int right=r-1;
    while(left<right){
        swap(crr,left,right);
        left++;
        right--;
    }
}

int main(int argc,char **argv){
    int n,k,q;
    cin>>n>>k>>q;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    while(k<0)
        k+=n;
    k=k%n;
    rev(a,0,n-k);
    rev(a,n-k,n);
    rev(a,0,n);
    int h;
    for(int i=0;i<q;i++){
        cin>>h;
        cout<<a[h]<<endl;
    }
                
}
