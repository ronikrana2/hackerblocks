#include <iostream>
#include <cmath>
using namespace std;

int Count(int c){
 int count=0;
 while (c>0){
    c=c/10;
    count++;
 }
 return count;
}


void Armstrong(int N){
    int b=Count(N);
    int sum=0;
    int M=N;
    for(int i=1;i<=b;i++){
        int a=N%10;
        N=N/10;
        sum+= pow(a,b);
    }
    if(M==sum){
        cout<<"true";
    }else{
        cout<<"false";
        }

}

int main(){
    int n;
    cin>>n;
    Armstrong(n);
    return 0;
}
