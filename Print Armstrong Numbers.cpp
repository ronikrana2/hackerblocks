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

void ArmstrongNumbers(int a,int b){
    int sum=0;
    for(int i=a;i<=b;i++){
        int n=i;
        int c=Count(n);
        for(int i=1;i<=c;i++){
            int m=n%10;
            n=n/10;
            sum+= pow(m,c);
        }
        if(i==sum){
            cout<<i<<endl;
        }
        sum=0;
        }
    }



int main(){
    int N1,N2;
    cin>>N1;
    cin>>N2;
    ArmstrongNumbers(N1,N2);
    return 0;
}
