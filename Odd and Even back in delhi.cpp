#include <iostream>
using namespace std;

bool EvenCheck(int a){
    if(a%4==0){
        return true;
    }
    else{
        return false;
    }
}

bool OddCheck(int a){
    if(a%3==0){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    int N,n,sum=0,sum1=0,a;
    cin>>N;
    for(int i=1;i<=N;i++){
        cin>>n;
        for(int j=1;n;j++){
            a=n%10;
            n=n/10;
            if (a%2==0){
                    sum+=a;
            }else{
                sum1+=a;
                }
        }
        bool b=EvenCheck(sum);
        bool c=OddCheck(sum1);
        if(b==true || c==true){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
        cout<<endl;
        sum=0;
        sum1=0;
    }
    return 0;
}
