
#include <iostream>
using namespace std;

void WavePrintColWise(int a[][100],int n,int m){
    for(int col=0;col<m;col++){
        if(col%2==0){
            for(int row=0;row<n;row++){
                cout<<a[row][col]<<", ";
            }
        }
        else{
            for(int row=n-1;row>=0;row--){
                cout<<a[row][col]<<", ";\
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

    WavePrintColWise(a,n,m);

    return 0;
}
