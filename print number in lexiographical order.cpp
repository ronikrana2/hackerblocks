#include <iostream>
using namespace std;

void printlexio(int current,int n){
    if (current>n){
        return;
    }
    cout<<current<<" ";
    for(int i=0;i<=9;i++){
        if(current*10+i>n){
            break;
        }
        printlexio(current*10+i,n);
    }
}

int main(){
    int n;
    cin>>n;
    if(n>=0){
        cout<<"0"<<" ";
        for(int i=1;i<=9;i++){
                printlexio(i,n);
        }
    }
    return 0;
}
