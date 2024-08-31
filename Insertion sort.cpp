#include <iostream>
using namespace std;

int main(){
    int a[5]={5,3,1,2,4};
    int n=5,i,j;

    cout<<"Before Sorting:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //Inserting Sorting

    for(i=1;i<n;i++){
        int pickedupnumber=a[i];
        for(j=i-1;j>=0 and a[j]>pickedupnumber;j--){
            a[j+1]=a[j];
        }
        a[j+1]=pickedupnumber;

    }


    cout<<"After Sorting:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}
