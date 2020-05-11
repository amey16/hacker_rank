#include <cstdio>
int min(int a,int b){
    return a<b?a:b;
}
int max(int a,int b){
    return a>b?a:b; 
}
int main(){
    int n,k,a,total=0;
    scanf("%d %d",&n,&k);
    int mods[k];
    for(int i=0;i<k;i++)
        mods[i] = 0;
    while(n--){
        scanf("%d",&a);
        mods[a % k]++;
    }
    total+=min(1,mods[0]);
    if(k%2==0)
        total+=min(1,mods[k/2]);
    for(int d=1;d<(k+1)/2;d++){
        total+=max(mods[d],mods[k-d]);
    }
    printf("%d",total);
    return 0;
}
