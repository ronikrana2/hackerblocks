#include <iostream>
using namespace std;

void arrayread(int arr[],int index,int n){
    if(index==n){
        return;
    }
    cin>>arr[index];
    arrayread(arr,index+1,n);
}

void invertedarray(int arr[], int arrinv[],int index,int n){
    if(index==n){
        return;
    }
    int pos=arr[index];
    arrinv[pos]=index;
    invertedarray(arr,arrinv,index+1,n);
}

void printinvertedarray(int arrinv[],int index, int n){
    if(index==n){
        return;
    }
    cout<<arrinv[index]<<" ";
    printinvertedarray(arrinv,index+1,n);
}


int main(){
    int n;
    cin>>n;
    int arr[n]={};
    int arrinv[n]={};

    arrayread(arr,0,n);

    invertedarray(arr,arrinv,0,n);

    printinvertedarray(arrinv,0,n);

    return 0;
}
