#include <iostream>
using namespace std;

int main (){
    int n,a;
    cin>>n;
    int t=1;
    int sum=0;
    int c=n;
    int count=0;
    while(c>0){
        c=c/10;
        count++;
    }
    for(int i=1;i<=count;i++){
        a=n%10;
        n=n/10;
        for(int k=count;k>i;k--){
            t*=10;
        }
        sum+=a*t;
        t=1;
        }
        cout<<sum;
        return 0;
}
