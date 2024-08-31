#include <iostream>
using namespace std;

int main(){
    int N,n1,n2,n3;
    cin>>N;
    cin>>n1;
    cin>>n2;
    bool a=true;
    for(int i=1;i<N-1;i++){
        cin>>n3;
        if(n1==n2==n3 || n1==n2 || n2==n3){
            a=false;
            }
        else if(n1<n2){
                if(n2<n3){
                }
                else{
                    a=false;
                }
        }
        n1=n2;
        n2=n3;
        }

    cout<<boolalpha<<a;
    cout<<noboolalpha;
    return 0;
}
