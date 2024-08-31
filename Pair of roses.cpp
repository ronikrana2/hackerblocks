#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        int n,m;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>m;
        sort(arr,arr+n);
        int best_i=-1,best_j=-1;
        int min_diff=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]+arr[j]==m){
                    int diff=abs(arr[i]-arr[j]);
                    if(diff<min_diff){
                        best_i=i;
                        best_j=j;
                        min_diff=diff;
                    }

                }

            }
        }
        if(best_i !=-1 && best_j!=-1){
        cout<<"Deepak should buy roses whose prices are "<<arr[best_i]<<" and "<<arr[best_j]<<"."<<endl<<endl;

    }
    }
    return 0;
}
