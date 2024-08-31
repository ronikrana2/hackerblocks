#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int no=n;
    for (int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=n;k>=i;k--){
                cout<<no;
                no--;
        }
        no=1;
        for(int k=n;k>i;k--){
            cout<<no;
            no++;
        }
        cout<<endl;
        no=no-2;
    }

    no=1;
    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<no;
            no--;
        }
        no=1;
        for(int k=1;k<=i;k++){
            cout<<no;
            no++;
        }
        cout<<endl;
        }
        return 0;
}
