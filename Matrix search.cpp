#include <iostream>
using namespace std;

void StairCaseSearch(int a[][100],int n,int m,int key){
    int i=0,j=m-1;
    bool iskeypresent=false;
    while(i<n and j>=0){
        if(a[i][j]==key){
            cout<<"1"<<endl;
            iskeypresent=true;
            break;
        }
        else if(a[i][j]<key){
            i++;
        }
        else{
            j--;
        }
    }
    if(iskeypresent==false){
        cout<<"0"<<endl;
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    int a[100][100];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
     }

    int key;
    cin>>key;

    StairCaseSearch(a,n,m,key);

    return 0;
}
