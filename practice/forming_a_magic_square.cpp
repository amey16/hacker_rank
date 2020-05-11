#include<iostream>
#include<climits>
using namespace std;
int **take_input(int r,int c){
    int **arr=new int*[r];
    for(int i=0;i<r;i++){
        arr[i]=new int[c];
        for(int j=0;j<c;j++)
            cin>>arr[i][j];
    }
    return arr;
}
int diff(int a,int b){
    if(a>=b)
        return a-b;
    else
        return b-a;    
}
int main(int argc ,char ** argv){
    int **arr=take_input(3,3);
    int a[8][3][3]={
        {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
        {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
        {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
        {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
        {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
        {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
        {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
        {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},
    };
    int min=INT_MAX,sum=0;
    for(int i=0;i<9;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                sum+=diff(arr[j][k],a[i][j][k]);
            }
        }
        if(min>sum)
            min=sum;
        sum=0;    
    }
    cout<<min<<endl;
}
