#include <iostream>
using namespace std;

void SpiralPrintClockWise(int a[][100],int n,int m){
    int sc=0,sr=0,er=n-1,ec=m-1;

    while(sc<=ec and sr<=er){
        for(int col=sc;col<=ec;col++){
            cout<<a[sr][col]<<", ";
        }
        sr++;
        for(int row=sr;row<=er;row++){
            cout<<a[row][ec]<<", ";
        }
        ec--;
        if(sr<=er){
            for(int col=ec;col>=sc;col--){
                cout<<a[er][col]<<", ";
            }
            er--;
        }
        if(sc<=ec){
            for(int row=er;row>=sr;row--){
                cout<<a[row][sc]<<", ";
            }
            sc++;
        }
    }
    cout<<"END";

}

int main(){
    int a[100][100];
    int n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    SpiralPrintClockWise(a,n,m);

    return 0;
}
