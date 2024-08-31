#include <iostream>
using namespace std;

void SpiralPrint(int a[][100],int n,int m){
    //initialize the four iterators
    int starting_row=0, starting_col=0, ending_row=n-1,ending_col=m-1;

    while(starting_row<=ending_row and starting_col<=ending_col){
            //1. print the sr from sc to ec, sr++;
            for(int col=starting_col; col<=ending_col;col++){
                cout<<a[starting_row][col]<<" ";
            }
            starting_row++;

            //2. print the ec from sr to er, ec--;
            for(int row=starting_row; row<=ending_row;row++){
                cout<<a[row][ending_col]<<" ";
            }
            ending_col--;

            //3. print the er from ec to sc, er--;
            if(starting_row<ending_row){
                for(int col=ending_col;col>=starting_col;col--){
                    cout<<a[ending_row][col]<<" ";
                    }
                ending_row--;
            }

            //4. print the sc from er to sr, sc++;
            if(starting_col<ending_col){
                for(int row=ending_row;row>=starting_row;row--){
                    cout<<a[row][starting_col]<<" ";
                }
                starting_col++;
            }
    }

}

int main(){
    int a[100][100];
    int r,c;
    cin>>r >>c;
    int val=1;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            a[i][j]=val;
            val++;
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    SpiralPrint(a,r,c);

    return 0;
}
