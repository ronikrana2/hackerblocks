#include <iostream>
using namespace std;

void RotateImage(int a[][100],int n){
    for(int col =n-1;col>=0;col--){
        for(int row=0;row<n;row++){
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    int a[100][100];
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    RotateImage(a,n);

    return 0;
}
