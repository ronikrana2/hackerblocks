#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int num=n+m;
    int a[num][num];
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if(i>=n || j>=m){
                a[i][j]=INT_MIN;
            }
            else{
            cin>>a[i][j];
        }
        }
    }

    for(int i=0;i<num;i++){
        int row=0,col=i;
        for(int j=0;j<=i;j++){
            if (row>=0 and col>=0){
            if(a[i][j]==INT_MIN){
                col--;
                row++;
            }
            else{
            if(i%2==0){
                cout<<a[col][row]<<" ";
                col--;
                row++;
            }
            else{
                cout<<a[row][col]<<" ";
                col--;
                row++;

            }
            }

        }
        }
    }
    return 0;

}
