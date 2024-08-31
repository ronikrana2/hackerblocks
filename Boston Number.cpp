#include <iostream>
#include <cmath>
using namespace std;

int SumOfDigits(int num){
    int sum=0;
    while(num>0){
        sum+=num%10;
        num/=10;
    }
    return sum;
}

int SumOfPrimeFactors(long long num){
    int sum=0;
    while(num%2==0){
        sum+=2;
        num/=2;

    }

    for(int i=3;i<=sqrt(num);i+=2){
        while(num%i==0){
            sum+=SumOfDigits(i);
            num/=i;
        }


    }

    if(num>2){
        sum+=SumOfDigits(num);
    }
    return sum;
}

int main(){

    long long N;
    cin>>N;

    if(N<=1){
        cout<<0<<endl;
        return 0;
    }

    int DigitSum=SumOfDigits(N);
    int PrimeFactorSum= SumOfPrimeFactors(N);

    if(DigitSum==PrimeFactorSum){
        cout<<"1"<<endl;
    }else{
        cout<<"0"<<endl;
    }

    return 0;
}
