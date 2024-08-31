#include <iostream>
using namespace std;

int main(){
    int n,a,sp,nos;
    cin>>n;
    a=(n+1)/2;
    sp=(n-a);
    nos=1;
    if(n%2==0){
        cout<<"";
    }
    else{
    for (int i=1;i<=a;i++){
        for (int j=0;j<sp;j++){
            cout<<"    ";
        }
        for(int k=0;k<nos;k++){
            cout<<"*   ";
        }
        cout<<endl;
        nos=nos+2;
        sp--;

    }
    int spa=1;
    int r=(n-a);
    nos=nos-4;
    for( int i=r;i>0;i--){
        for(int j=0;j<spa;j++){
            cout<<"    ";
        }
        for(int k=0;k<nos;k++){
            cout<<"*   ";
        }
        cout<<endl;
        nos=nos-2;
        spa++;
    }
    }
    return 0;
}

