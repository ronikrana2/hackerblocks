#include <iostream>
using namespace std;

void countsetbits(int a,int b){
    int cnt=0;
    if(a==b){
        cout<<1<<endl;
    }
    else{
        while(a<=b){
            int mask=1;
            int n=a;
            while(n>0){
                if(n&mask>0){
                    cnt++;
                }
                n=(n>>1);
            }
            a++;
        }
        cout<<cnt<<endl;
    }
}

int main(){
    int Q,a,b;
    cin>>Q;
    while(Q>0){
        Q--;
        cin>>a;
        cin>>b;
        countsetbits(a,b);
    }
    return 0;
}
