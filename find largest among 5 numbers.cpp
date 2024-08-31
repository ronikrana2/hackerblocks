#include <iostream>
#include<climits>
using namespace std;

int main(){
    int l=INT_MIN;
    for(int i=1;i<=5;i++){
            int a;
            cin>>a;
            if(a>l){
                l=a;
            }

    }
    cout<<l;
    return 0;
}
