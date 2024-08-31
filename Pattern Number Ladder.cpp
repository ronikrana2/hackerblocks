#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int No=1;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<No<<"    ";
            No++;
        }
    cout<<endl;}
    return 0;
}
