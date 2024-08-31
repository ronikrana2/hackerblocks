#include <iostream>
using namespace std;

int main(){
    int n,m,a,r;
    cin>>n;
    cin>>m;
    if(m>n){
        a=n;
        n=m;
        m=a;
    }
    for (int i=1;n;i++){
        r=n%m;
        n=m;
        m=r;
        if(r==0){
            cout<<n;
            break;
        }

    }
    return 0;
}

