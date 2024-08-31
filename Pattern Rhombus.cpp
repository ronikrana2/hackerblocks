#include <iostream>
using namespace std;

int main(){
    int n,sp,no,nos,noss;
    cin>>n;
    sp=n-1;
    nos=1;
    noss=1;
    for( int i=1;i<=n;i++){
        no=i;
        for(int j=0;j<sp;j++){
                cout<<"    ";
        }
    for( int k=0;k<nos;k++){
        cout<<no<<"    ";
        no++;
    }
    no=no-2;
    for(int j=1;j<nos;j++){
        cout<<no<<"    ";
        no--;
    }
    cout<<endl;
    sp--;
    nos++;
    noss++;
    }
    sp=1;
    int a=n-1;
    nos=a;
    noss=a-1;
    for(int i=a;i>=1;i--){
        no=i;
        for(int j=0;j<sp;j++){
                cout<<"    ";
        }
    for( int k=0;k<nos;k++){
        cout<<no<<"    ";
        no++;
    }
    no=no-2;
    for(int j=1;j<nos;j++){
        cout<<no<<"    ";
        no--;
    }
    cout<<endl;
    sp++;
    nos--;
    noss--;
    }
    return 0;
}
