#include <iostream>
using namespace std;

void insertarray(int *a,int n){
        for(int i=0;i<n;i++){
        cin>>a[i];
    }
}

bool isarraysorted(int *a,int i,int n){
    if(i==n-1){
        return true;
    }
    if(a[i]<=a[i+1]){
        return isarraysorted(a,i+1,n);
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    insertarray(a,n);
    bool ans= isarraysorted(a,0,n);
    if(ans==true){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    return 0;
}
