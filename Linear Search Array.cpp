#include <iostream>
using namespace std;

int main(){
    int n,M;
    cin>>n;
    int arr[n]={};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>M;
    bool t=false;
    for(int i=0;i<n;i++){
            if(M==arr[i]){
                cout<<i<<endl;
                t=true;
    }
    }
    if(t==false){
        cout<<"-1";
    }
    return 0;
    }
