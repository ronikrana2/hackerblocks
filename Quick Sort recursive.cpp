#include <iostream>
using namespace std;

void insertarray(int *a,int n){
        for(int i=0;i<n;i++){
        cin>>a[i];
    }
}

int partition(int *a,int s,int e){
    int i=s-1;
    for(int j=s;j<e;j++){
        if(a[j]<=a[e]){
           i++;
           swap(a[i],a[j]);
           }
    }
    swap(a[i+1],a[e]);
    return i+1;
}

void Quicksort(int *a,int s,int e){
    if(s>=e){
        return;
    }

    int indx=partition(a,s,e);
    Quicksort(a,s,indx-1);
    Quicksort(a,indx+1,e);

}

int main(){
    int n;
    cin>>n;
    int a[n];
    insertarray(a,n);
    Quicksort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";

    }
    return 0;
}
