#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n,q;
    cin>>n;
    int prices[n]={};

    for(int i=0;i<n;i++){
        cin>>prices[i];
    }

    sort(prices,prices+n);

    cin>>q;

    while(q--){
        int A,k;
        cin>>A>>k;

        int count=0;

        for (int i = 0; i < n; i++) {
            if (prices[i] <= A) {
                count++;
            } else {
                break;
            }
        }
        if(count>=k){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
            }
        }
        return 0;

    }
