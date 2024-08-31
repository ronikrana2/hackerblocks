#include <iostream>
using namespace std;
int main (){
    int n,c;
    cin>>n;
    int a=0;
    int b=1;
    if(n==0){
            cout<<"0";
        }
    else if(n==1){
        cout<<"1";
    }
    else{
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
        if(i==n){
        cout<<c<<endl;
            }
        }}

    return 0;
}
