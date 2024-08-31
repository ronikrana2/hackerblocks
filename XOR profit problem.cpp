#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int max_xor=0;
    for(int i=a;i<=b;i++){
        for(int j=a;j<=b;j++){
                int current_xor=(i^j);
            if(current_xor>max_xor){
                max_xor=current_xor;
            }
        }
    }

    cout<<max_xor<<endl;

    return 0;
}
