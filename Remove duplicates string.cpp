#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char a[1000];
    cin>>a;
    int j=1;
    for(int i=0;a[i]!='\0';i++){
        cout<<a[i];
        int cnt=1;
        while(a[i]==a[j]){
            cnt++;
            j++;
            i++;
        }
        j++;
    }

    return 0;

}
