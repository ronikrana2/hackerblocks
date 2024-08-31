#include <iostream>
using namespace std;

int main(){
    int a[]={5,3,4,1,2};
    int n=5; // (or) sizeof(a)/sizeof(int);
    //to print array before sorting
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        swap(a[i],a[min]);
    }
    //to print array after sorting
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
