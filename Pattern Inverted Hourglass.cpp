#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int no=n;
    int sp=4*n-2;
    for(int i=0;i<=n;i++){
        if(i!=n){
        for(int j=0;j<=i;j++){
            cout<<no<<" ";
            no--;
        }
        for(int k=1;k<=sp;k++){
            cout<<" ";
        }
        sp=sp-4;
        no++;
        for(int j=0;j<=i;j++){
            cout<<no<<" ";
            no++;
        }}
        else{
             for(int i=0;i<=n;i++){
                cout<<no<<" ";
                no--;
             }
             no=no+2;
             for(int i=0;i<n;i++){
                cout<<no<<" ";
                no++;
            }
    }
        no=n;
        cout<<endl;
    }

    sp=sp+4;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<no<<" ";
            no--;
        }
        for(int k=1;k<=sp;k++){
            cout<<" ";
        }
        no++;
        for(int j=i;j<=n;j++){
            cout<<no<<" ";
            no++;
        }
        no=n;
        sp=sp+4;
        cout<<endl;
    }
    return 0;
}
