#include <iostream>
using namespace std;

int main(){
    int n,a,space;
    cin>>n;
    a=(n+1)/2;
    space=1;
    int st=(n-1)/2;
    if(n%2==0){
        cout<<"";
    }
    else{
    for (int i=1;i<=a;i++){
        if(i==1){
            int j=0;
            while(j<n){
                cout<<"*   ";
                j++;
            }

        }else{

            for(int k=0;k<st;k++){
                cout<<"*   ";
            }
            for(int l=0;l<space;l++){
                cout<<"    ";
            }
            for(int k=0;k<st;k++){
                cout<<"*   ";
            }
            st--;
            space=space+2;
        }
        cout<<endl;

    }
    int b=n-a;
    int st=2;
    int space2=n-4;
    for (int i=1;i<=b;i++){
        if(i==b){
            int j=0;
            while(j<n){
                cout<<"*   ";
                j++;
            }
            cout<<endl;
        }
       else{
        for(int k=0;k<st;k++){
            cout<<"*   ";
        }
        for(int l=0;l<space2;l++){
            cout<<"    ";
        }
        for(int k=0;k<st;k++){
            cout<<"*   ";
        }
        cout<<endl;
        space2=space2-2;
        st++;
        }
        }
        }
    return 0;
    }

