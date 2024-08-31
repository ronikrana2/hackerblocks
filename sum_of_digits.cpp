#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    while(n!=0){
            sum=sum+n%10;
            n=n/10;
            cout<<n;
    }
    cout<<"Sum of digits :"<<sum;
    cout<<endl;
    return 0;
}
