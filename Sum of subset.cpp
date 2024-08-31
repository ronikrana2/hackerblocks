#include <iostream>
using namespace std;

bool Sumzero(int *a,int i,int n,bool ans){
    if(i==n){
        return false;
    }
    for(int j=0;j<n;j++){
        if(a[i]+a[j]==0){
            return true;
        }
    }
    return Sumzero(a,i+1,n,ans);
}

int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int n;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        bool ans=Sumzero(a,0,n,false);
        if(ans){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
            }
    }
    return 0;
}
