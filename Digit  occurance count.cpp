#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int a=n;
    int count=0;
    int count1=0;
    while(a>0){
        count++;
        a=a/10;
    }
    for(int i=1;i<=count;i++){
        int N=n%10;
        n=n/10;
        if (N==m){
            count1+=1;
        }
    }
    cout<<count1;
    return 0;
}
