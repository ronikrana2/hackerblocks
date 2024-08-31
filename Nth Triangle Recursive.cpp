#include <iostream>
using namespace std;

int NthTriangle(int n,int ans){
    if(n==1){
        return 1;
    }
    return n+NthTriangle(n-1,ans);

}


int main(){
    int n;
    cin>>n;
    int ans=NthTriangle(n,0);
    cout<<ans<<endl;

    return 0;
}
