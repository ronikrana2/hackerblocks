#include <iostream>
using namespace std;

void insertarray(int *a,int n){
        for(int i=0;i<n;i++){
        cin>>a[i];
    }
}

void merge(int *a,int *b,int *c,int s,int e){
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;
    while(i<=mid and j<=e){
        if(b[i]<c[j]){
            a[k++]=b[i++];
        }else{
            a[k++]=c[j++];
        }
    }
    while(i<=mid){
        a[k++]=b[i++];
    }
    while(j<=e){
        a[k++]=c[j++];
    }
}

void mergesort(int *a,int s,int e){
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    int b[100];
    int c[100];
    for(int i=s;i<=mid;i++){
        b[i]=a[i];
    }
    for(int i=mid+1;i<=e;i++){
        c[i]=a[i];
    }
    mergesort(b,s,mid);
    mergesort(c,mid+1,e);

    merge(a,b,c,s,e);
}

void printarray(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    insertarray(a,n);
    mergesort(a,0,n-1);
    printarray(a,n);
    return 0;
}


