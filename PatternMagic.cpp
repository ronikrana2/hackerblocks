#include <iostream>
using namespace std;

int main(){
    int n,a,space;
    cin>>n;
    a=2*n-1;
    space=1;
    for (int i=1;i<=n;i++){
        if(i==1){
            int j=0;
            while(j<a){
                cout<<"*";
                j++;
            }

        }else{

            for(int k=i;k<=n;k++){
                cout<<"*";
            }
            for(int l=0;l<space;l++){
                cout<<" ";
            }
            for(int k=i;k<=n;k++){
                cout<<"*";
            }
            space=space+2;
        }
        cout<<endl;

    }

    int space2=n;
    for (int i=2;i<=n;i++){
        if(i==n){
            int j=0;
            while(j<a){
                cout<<"*";
                j++;
            }
            cout<<endl;
        }
       else{
        for(int k=0;k<i;k++){
            cout<<"*";
        }
        for(int l=1;l<=space2;l++){
            cout<<" ";
        }
        for(int k=0;k<i;k++){
            cout<<"*";
        }
        cout<<endl;
        space2=space2-2;
        }
        }
    return 0;
    }
