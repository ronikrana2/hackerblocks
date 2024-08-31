#include <iostream>
using namespace std;

int main (){
    int n,z;
    cin>>n;
    z=0;
    for(int i=1; i<=n;i++){
        if(i==1){
            cout<<i;
            cout<<endl;
        }
        else{
            cout<<i;
            for(int j=1;j<=z;j++){
                cout<<"0";
            }
            cout<<i;
            cout<<endl;
            z++;
            }
    }
    return 0;
}
