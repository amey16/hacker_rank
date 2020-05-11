#include<iostream>
using namespace std;

long int **take_input(int r,int c){
    long int **arr=new long int*[r];
    for(int i=0;i<r;i++){
        arr[i]=new long int[c];
        for(int j=0;j<c;j++)
            cin>>arr[i][j];
    }
    return arr;
}
int mini(int a,int b){
    if(a<b)
        return a;
    else
        return b;
}
int rot(long int **a,int r,int c,int k){
    int nrings=mini(r,c)/2;
    for(int i=0;i<nrings;i++){
        int nrotate=k%(2*(r+c-4*i)-4);
        for(int k=0;k<nrotate;k++){
            for(int j=i;j<c-i-1;j++){
                int temp=a[i][j];
                a[i][j]=a[i][j+1];
                a[i][j+1]=temp;
            }
            for(int j=i;j<r-i-1;j++){
                int temp=a[j][c-i-1];
                a[j][c-i-1]=a[j+1][c-i-1];
                a[j+1][c-i-1]=temp;
            }
            for(int j=c-i-1;j>i;j--){
                int temp=a[r-i-1][j];
                a[r-i-1][j]=a[r-i-1][j-1];
                a[r-i-1][j-1]=temp;
            }
            for(int j=r-i-1;j>i+1;j--){
                int temp=a[j][i];
                a[j][i]=a[j-1][i];
                a[j-1][i]=temp;
            }

        }
    }
    return **a;            
}
int main(int argc,char** argv){
    int r,c,k;
    cin>>r>>c>>k;
    long int **arr=take_input(r,c);
    **arr=rot(arr,r,c,k);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }    
}
