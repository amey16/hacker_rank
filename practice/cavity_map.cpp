#include<iostream>
#include<string>
#include<climits>
using namespace std;

int main(int argc,char** argv){
    int n;
    cin>>n;
    string words[n];
    for(int i=0;i<n;i++)
        cin>>words[i];
    int word[n][n];
//    int max=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            word[i][j]=(int)((words[i][j])-'0');
         //   cout<<word[i][j]<<" ";
            // if(max<word[i][j])
            //     max=word[i][j];
        }
        //cout<<endl;
    }    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=1 && i<=n-2 && j>=1 && j<=n-2){
                if(word[i-1][j]<word[i][j] && word[i+1][j]<word[i][j] && word[i][j+1]<word[i][j] && word[i][j-1]<word[i][j]){
                    cout<<"X";
                }
                else
                    cout<<word[i][j];
            }
            else
                cout<<word[i][j];
            // }
            // else
                // cout<<word[i][j];
        }
        cout<<endl;
    }


}
