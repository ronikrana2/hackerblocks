#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a=0;
    int b=1;
    for (int i=1;i<=n;i++){
            int c=a+b;
            if (i==1){
                cout<<a;
            }
             else if (i==2){
                cout<<b<<"    "<<b;
                a=b;
                b=c;
                c=a+b;
            }else{
        for(int j=1;j<=i;j++){
            cout<<c<<"    ";
            a=b;
            b=c;
            c=a+b;;
        }}
        cout<<endl;}
    return 0;
}
