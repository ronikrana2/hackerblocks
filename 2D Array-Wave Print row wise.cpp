#include <iostream>
using namespace std;

void WavePrintRowWise(int a[][100],int n,int m){
    for(int row=0;row<n;row++){
        if(row%2==0){
            for(int col=0;col<m;col++){
                cout<<a[row][col]<<", ";
            }
        }
        else{
            for(int col=m-1;col>=0;col--){
                cout<<a[row][col]<<", ";
            }
        }
    }
    cout<<"END"<<endl;;
}

int main(){
    int n,m;
    cin>>n>>m;
    int a[100][100];
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            cin>>a[row][col];
        }
    }

    WavePrintRowWise(a,n,m);

    return 0;
}
