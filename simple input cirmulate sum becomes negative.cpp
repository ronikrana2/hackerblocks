#include <iostream>
using namespace std;

int main(){
    int sum=0;
    int n;
    while (sum>=0){
        cin>>n;
        sum+=n;
        if(sum<0){
            break;
        }
        cout<<n;
    }
    return 0;
}
