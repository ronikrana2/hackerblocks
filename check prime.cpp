#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(i!=n){
            if(n%i==0){
                cout<<"Not Prime";
                break;
            }
        }
        else{
            cout<<"Prime";
        }
    }
    return 0;
}
