#include <iostream>
using namespace std;

int main(){
    int N,a,n;
    int b=1;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        cin>>N;
    for(int i=0;N;i++){
        a=N%10;
        N=N/10;
        for (int k=1;k<=i;k++){
                b*=2;
        }
        sum+=a*b;
        b=1;
    }
        cout<<sum<<endl;
        sum=0;
}
return 0;}

