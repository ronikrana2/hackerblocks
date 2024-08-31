#include <iostream>
using namespace std;

void insertarray(int *a,int n){
        for(int i=0;i<n;i++){
        cin>>a[i];
    }
}

int firstindex(int *a,int n,int m,int i){
    if(i==n){
        return -1;
    }
    if(a[i]==m){
        return i;;
    }else{
        return firstindex(a,n,m,i+1);
    }
}



int main(){
    int n;
    cin>>n;
    int a[n];
    insertarray(a,n);
    int m;
    cin>>m;
    int ans=firstindex(a,n,m,0);
    cout<<ans<<endl;
    return 0;
}

