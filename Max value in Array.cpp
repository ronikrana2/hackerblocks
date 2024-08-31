#include <iostream>
#include <climits>
using namespace std;

int main(){
    int N,Max;
    cin>>N;
    int arr[N]={};
    Max=INT_MIN;
    for (int i=0;i<N;i++){
        cin>>arr[i];
        if(arr[i]>Max){
            Max=arr[i];
        }
    }
    cout<<Max;
    return 0;

}
