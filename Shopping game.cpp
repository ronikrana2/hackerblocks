#include <iostream>
using namespace std;

string Winner(int M,int N){
    int a=0,h=0;
    string result="";
    for(int i=1;;i++){
        if(i%2==0){
            h+=i;
            if(N<h){
                result="Aayush";
                break;
            }
        }
        else{
            a+=i;
            if(M<a){
                result="Harshit";
                break;
            }
        }
     }
     return result;


}

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int M1,N1;
        cin>>M1;
        cin>>N1;
        string winner=Winner(M1,N1);
        cout<<winner<<endl;

    }
    return 0;
}
