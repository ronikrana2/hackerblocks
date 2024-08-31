#include <iostream>
using namespace std;

int main(){
    int N,a;
    int b=1;
    cin>>N;
    int sum=0;
    for(int i=0;N;i++){
        a=N%10;
        N=N/10;
        for (int k=1;k<=i;k++){
                b*=2;
        }
        sum+=a*b;
        b=1;
        }
        cout<<sum;
        return 0;
}
