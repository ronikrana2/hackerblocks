#include <iostream>
using namespace std;

int main(){
    long long int n,X,Y,m;
    cin>>n;
    if (n<=0){
        cout<<"-1"<<endl;
        return 0;
    }
    else if(n%2==0){
        m=n/2;
        X=m*m-1;
        Y=m*m+1;
    }else {
        m=(n-1)/2;
        X=2*m*(m+1);
        Y=2*m*(m+1)+1;

    }
    if(X>0 && Y>0){
        cout<<X<<" "<<Y;
    }else{
    cout<<"-1";
    }
    return 0;
}
