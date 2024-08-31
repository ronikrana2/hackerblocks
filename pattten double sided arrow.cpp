#include <iostream>
using namespace std;

int main (){
    int n;
    cin>>n;
    int sp=2*n-2;
    int sp1=2;
    int up=(n+1)/2;
    for (int i=1;i<=up;i++){
        if(i==1){
                for(int j=1;j<=sp;j++){
                cout<<" ";
                }
            cout<<1;
        }
        else{
            for(int j=1;j<=sp;j++){
                cout<<" ";
            }
            for(int j=i;j>0;j--){
                cout<<j<<" ";
            }
            for(int k=1;k<=sp1;k++){
                cout<<" ";
            }

            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            sp1=sp1+4;
        }
        sp=sp-4;
        cout<<endl;
    }
    sp=sp+8;
    sp1=sp1-8;
    int low=n-up;
    for(int i=low;i>0;i--){
            if(i==1){
                for(int j=1;j<=sp;j++){
                cout<<" ";
                }
            cout<<1;
        }
        else{
            for(int j=1;j<=sp;j++){
                cout<<" ";
            }
            for(int j=i;j>0;j--){
                cout<<j<<" ";
            }
            for(int k=1;k<=sp1;k++){
                cout<<" ";
            }

            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            sp1=sp1-4;
        }
        sp=sp+4;
        cout<<endl;

    }


    return 0;

}
