#include <iostream>
using namespace std;

int main(){
 int n;
 int arr[n]={};
 int arrinv[n]={};
 cin>>n;
 for (int i=0;i<n;i++){
    cin>>arr[i];
 }

 for(int i=0;i<n;i++){
    int pos=arr[i];
    arrinv[pos]=i;
 }
 for(int i=0;i<n;i++){
    cout<<arrinv[i]<<" ";
 }
 return 0;
}
