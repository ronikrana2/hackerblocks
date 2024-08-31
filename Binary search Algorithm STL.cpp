#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    bool present=binary_search(a,a+n,m);
    if(present){
    int *ans=find(a,a+n,m);
    int indx= ans-a;
    cout<<indx;
    }
    else{
        cout<<"-1";
    }

    return 0;
}
