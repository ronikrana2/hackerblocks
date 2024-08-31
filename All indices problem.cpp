#include <iostream>
using namespace std;
int ans[100];
void insertarray(int *a,int n){
        for(int i=0;i<n;i++){
        cin>>a[i];
    }
}

int indices(int *a,int n,int m,int i,int j){
    if(i==n){
        return j;
    }
    if(a[i]==m){
        ans[j]=i;
        return indices(a,n,m,i+1,j+1);
    }else{
        return indices(a,n,m,i+1,j);
    }
}



int main(){
    int n;
    cin>>n;
    int a[n];
    insertarray(a,n);
    int m;
    cin>>m;
    int count=indices(a,n,m,0,0);
    for(int i=0;i<count;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}


