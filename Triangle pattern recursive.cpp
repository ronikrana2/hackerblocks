#include <iostream>
using namespace std;

void printpattern(int n,int i){
    if(i>n){
        return;
    }
    for(int j=1;j<=i;j++){
        cout<<"*    ";
    }
    cout<<endl;
    printpattern(n,i+1);
}

int main(){
    int n;
    cin>>n;
    printpattern(n,0);
    return 0;
}



