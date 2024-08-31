#include <iostream>
using namespace std;
int main(){
    int n,c;
    int num=0;
    cin>>n;
    int a=1;
    for(int i=0;n;i++){
            c=n%8;
            n=n/8;
            for(int k=1;k<=i;k++){
                a*=10;
            }
            num+=c*a;
            a=1;
    }
    cout<<num;
    return 0;
}
