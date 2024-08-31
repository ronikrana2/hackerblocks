#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char a[1000];
    cin>>a;
    for(int i=0;a[i]!=0;i++){
        if(isupper(a[i])){
            a[i]=tolower(a[i]);
        }
        else{
            a[i]=toupper(a[i]);
        }
    }
    cout<<a<<endl;

    return 0;
}
