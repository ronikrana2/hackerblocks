#include <iostream>
using namespace std;

int StairCaseSearch(int a[][4],int n ,int m){
    int i=0,j=m-1;
    int key=14;
    bool isKeyPresent=false;
    while(i<n and j>=0){
            if(a[i][j]==key){
                cout<<"Key found at index "<<i<<","<<j<<endl;
                isKeyPresent=true;
                break;
            }
            else if(a[i][j]<key){
                i++;
            }
            else{
                j--;
            }
    }
    if(isKeyPresent==false){
        cout<<"key not found"<<endl;
    }
}


int main(){

    int a[4][4]={
        {1,4,8,10},
        {2,5,9,15},
        {6,13,18,20},
        {11,14,21,25}
    };
    int n=4,m=4;

    int ans=StairCaseSearch(a,n,m);

    return 0;

    }

