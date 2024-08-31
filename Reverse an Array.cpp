#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    if(n<0){
        return 0;
    }
    int arr[n]={};
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n%2==0){
        m=n/2;
    }
    else{
        m=n/2 +1;
    }
    for(int i=0;i<m;i++){
        swap(arr[i],arr[n-1-i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
