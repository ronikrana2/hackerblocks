#include <iostream>
using namespace std;

int main(){
     int a[]={5,3,4,1,2};
    int n=5;

    //to print array before sorting
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //Bubble sort algorithm
    for(int i=0;i<=n-2;i++){
        for(int j=0;j<=n-2;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }

    }
    //to print array after sorting
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;


}
