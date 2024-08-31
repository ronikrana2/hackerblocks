#include <iostream>
using namespace std;

int main(){
    int n,sp,no;
    cin>>n;
    sp=2*n-3;
    no=1;
    for(int i=1;i<=n;i++){
        if(i!=n){
        for(int j=1;j<=i;j++){
            cout<<no;
            no++;
        }
        for(int k=1;k<=sp;k++){
            cout<<" ";
        }
        no--;
        for(int j=1;j<=i;j++){
            cout<<no;
            no--;
        }}
        else{
            for(int i=1;i<=n;i++){
                cout<<no;
                no++;
            }
            no=no-2;
            for(int i=1;i<n;i++){
                cout<<no;
                no--;
            }
        }
        sp=sp-2;
        no=1;
        cout<<endl;
    }
}
