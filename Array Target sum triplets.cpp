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
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==m){
                    cout<<arr[i]<<", "<<arr[j]<<" and "<<arr[k]<<endl;

            }
            }
        }
    }
    return 0;
}
