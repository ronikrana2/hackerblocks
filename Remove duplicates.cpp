#include <iostream>
#include <cstring>
using namespace std;

void Remove_Duplicates(char a[1000]){
    int len=strlen(a);
    int j=0,i=0;

    while(j<len){
        if(a[i]!=a[j]){
            i++;
            a[i]=a[j];
        }
        j++;
    }
    a[i+1]='\0';
    return;
}

int main(){

    char a[1000];
    cin.getline(a,1000);

    Remove_Duplicates(a);
    cout<<a<<endl;
    return 0;
}
