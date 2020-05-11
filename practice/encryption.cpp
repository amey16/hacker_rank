#include<iostream>
#include<string>

using namespace std;

int main(int argc,char** argv){
    string s;
    cin>>s;   
    int i=0;
    for(i=0;i*i<s.length();i++);
    int floor=i-1;
    int ceil=i;
 
    if(floor*ceil<s.length())
        floor++;
    //    cout<<floor<<" "<<ceil<<endl;
    string words[floor];
    for(i=0;i<floor-1;i++){
        words[i]=s.substr(i*ceil,ceil);
    }
    words[i]=s.substr(i*ceil,s.length()-i*ceil);
    // cout<<words[i]<<endl;
    if(i>0){
        for(int j=0;j<words[i-1].length();j++){
            if(words[i][j]<='z' && words[i][j]>='a')
                continue;
            else
                words[i][j]+=' ';    
        }   
    }         
    // for(int j=0;j<floor;j++)
    //     cout<<words[j]<<" ";
    // cout<<endl;    

    string words2[ceil];
    for(int j=0;j<ceil;j++)
        words2[j]="";
    for(int j=0;j<ceil;j++){
        for(int k=0;k<floor;k++){
            if(words[k][j]!=' ')
                words2[j]+=words[k][j];
            else
                words2[j]+="";
        }
    }
    for(int j=0;j<ceil;j++)
        cout<<words2[j]<<" ";
    cout<<endl; 
}
