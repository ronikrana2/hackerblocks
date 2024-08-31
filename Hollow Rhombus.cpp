#include <iostream>
using namespace std;

int main(){
    int n,sp;
    cin>>n;
    sp=n-1;
    int sp2=n-2;
    for(int i=1;i<=n;){
        for(int j=1;j<=sp;j++){
            cout<<" ";
        }
        sp--;
        if (i==1 || i==n){
            for(int k=0;k<n;k++){
                cout<<"*";
            }
        }
        else{
                cout<<"*";
                for(int j=0;j<sp2;j++){
                    cout<<" ";
                }
                cout<<"*";

        }
        i++;
        cout<<endl;

    }
    return 0;
}
