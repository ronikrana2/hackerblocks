#include <iostream>
using namespace std;

int main(){
    int N1,N2,a;
    cin>>N1;
    cin>>N2;
    int count=0;
    for (int i=1;;i++){
         a=3*i+2;
         if(a%N2==0){
            continue;
         }
         else{
                if(count==N1){
                    break;
                }
                else{
                    cout<<a<<endl;
                    count++;
         }
        }
    }
    }
