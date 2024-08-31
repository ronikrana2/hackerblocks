#include <iostream>
using namespace std;

int main(){
    char a;
    cin>>a;
    if(islower(a)){
        cout<<"lowercase";
    }
    else if(isupper(a)){
        cout<<"UPPERCASE";
    }
    else{
        cout<<"Invalid";
    }
    return 0;
}
