#include <iostream>
using namespace std;

int main(){
    int m,M,S;
    cin>>m;
    cin>>M;
    cin>>S;
    do{
        int C = (5.0/9.0)*(m-32);
        cout<<m<<"\t"<<C<<endl;
        m=m+S;
    }while(m<=M);
    return 0;
}
