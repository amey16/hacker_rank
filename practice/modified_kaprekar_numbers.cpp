#include<iostream>
#include<vector>
using namespace std;
long int power(long int pwr){
    long int ans=1;
    for(long int i=0;i<pwr;i++)
        ans*=10;
    return ans;    
}
int main(int argc,char** argv){
    long int sr,er;
    cin>>sr>>er;
    vector<long int> a;
    for(long int i=sr;i<=er;i++){
        if(i>0){
            long int num=i,ans=i;
            long int l=0;
            while(num!=0){
                num/=10;
                l++;
            }
            long int square=i*i;    
            long int scnum=0;
            for(long int j=0;j<l;j++){
                scnum+=((square%10)*power(j));
                square/=10;
            }
            if((scnum+square)==ans){
                cout<<ans<<" ";
                a.push_back(ans);
            }    
        }
    }
    if(a.size()==0)
        cout<<"INVALID RANGE";
    cout<<endl;

}

