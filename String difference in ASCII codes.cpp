#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char a[1000];
    cin>>a;
    int j=1;
    for(int i=0;a[i]!='\0';i++){
        if(a[j]=='\0'){
            cout<<
            a[i];
        }
        else{
        cout<<a[i]<<a[j]-a[i];
        j++;
    }
    }

    return 0;

}


