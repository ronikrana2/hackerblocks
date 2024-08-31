#include <iostream>
using namespace std;

int main(){
    int n,a;
    cin>>n;
    int sodd=0;
    int seven=0;
    for(int i=1;n;i++){
            a=n%10;
            n=n/10;
            if(i%2==0){
                seven+=a;
            }
            else {
                sodd+=a;
            }

    }
    cout<<sodd<<endl;
    cout<<seven<<endl;
    return 0;
    }
