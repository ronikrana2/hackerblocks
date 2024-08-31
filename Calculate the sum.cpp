#include <iostream>
using namespace std;

int main(){
    int n,m,X;
    cin>>n;
    if(n<1){
        return 0;
    }
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>X;

    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    sum=sum%(1000000007);
    cout<<sum<<endl;
    return 0;
}
