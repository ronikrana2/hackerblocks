#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    int *pos=find(arr,arr+n,m);
    int indx=pos-arr;
    cout<<indx;
    return 0;
}
