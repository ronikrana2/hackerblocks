#include <iostream>
using namespace std;

int main(){
    int n,no;
    cin>>n;
    int inv=0;
    no=1;
    for(int i=1;n;i++){
            int a=n%10;
            n=n/10;
            for(int j=1;j<=a-1;j++){
                no=no*10;
            }
            inv+=i*no;
            no=1;
    }
    cout<<inv;
    return 0;
}
