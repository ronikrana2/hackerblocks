#include <iostream>
#include <cstring>
using namespace std;

void rotatestring(char a[],int n){
    int len=strlen(a);
    int i=len-1;

    while(i>=0){
        a[i+n]=a[i];
        i--;
    }
    int k=0,j=len;
    while(k<n){
        a[k]=a[j];
        k++;
        j++;
    }
    a[len]='\0';
    return;
}

int main(){
    char a[10]="Hello";
    int n=3;

    cout<<"Before Rotation: "<<a<<endl;

    rotatestring(a,n);

    cout<<"After Rotation: "<<a<<endl;

    return 0;
}
