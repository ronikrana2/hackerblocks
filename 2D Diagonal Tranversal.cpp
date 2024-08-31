#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int row=0,col=0;
    while(row<n && col<m){
        while(row>=0 && col<m){
                cout<<a[row][col]<<" ";
                row--;
                col++;
        }
        row++;
        if(col>=m){
            col--;
            row++;
        }

        while(col>=0 && row<n){
            cout<<a[row][col]<<" ";
            row++;
            col--;
        }
        col++;
        if(row>=n){
            row--;
            col++;
        }
    }



    return 0;

}
