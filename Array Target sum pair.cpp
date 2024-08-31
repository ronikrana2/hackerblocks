#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    int arr[n]={};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cin>>m;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
                if(arr[i]+arr[j]==m){
                    cout<<arr[i]<<" and "<<arr[j]<<endl;
                }
        }
    }
    return 0;
}
