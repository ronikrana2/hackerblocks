#include <iostream>
using namespace std;

int main(){
    int n,m,r,a;
    cin>>n;
    cin>>m;
    int n1,m1;
    n1=n;
    m1=m;
     if(m>n){
        a=n;
        n1=m;
        m1=a;
    }
    for (int i=1;n;i++){
        r=n1%m1;
        n1=m1;
        m1=r;
        if(r==0){
            break;
        }

    }
    int lcm = n*m/n1;
    cout<<lcm;
    return 0;
}
