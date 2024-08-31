#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

void AnyToDecimal(int a,int b){
    int result=0;
    for(int i=1;a;i++){
        int c=a%10;
        a=a/10;
        for(int k=1;k<i;k++){
            c*=b;
        }
        result+=c;
    }
    cout<<result<<endl;
}

void DecimalToAny(int a,int b){
    vector<int> result;
    for(int i=1;a>0;i++){
        int c=a%b;
        a=a/b;
        result.push_back(c);
         }

    for(int i=result.size()-1;i>=0;--i){
    cout<<result[i];
    }
    cout<<endl;
}

int NumbertoBinary(int a){
    int result=0;
    for(int i=1;a;i++){
        int c=a%2;
        a=a/2;
        for(int k=1;k<i;k++){
            c*=10;
        }
        result+=c;
        c=0;
    }
    return result;
}

void OctaltoBinary(int a){
    int result=0;
    for(int i=1;a;i++){
        int c=a%10;
        a=a/10;
        int d=NumbertoBinary(c);
        if(i!=1){
            d*=1000;
        }
        result+=d;
    }
    cout<<result;
}

void HexadecimaltoDecimal(int N){
    string hex= to_string(N);
    int result=0;
    int base=1;
    for(int i=hex.length()-1;i>=0;i--){
        char currentchar=hex[i];

        if(currentchar>='0' && currentchar<='9'){
            result+=(currentchar-'0')*base;
        }
        else if( currentchar>='A' && currentchar<='F'){
            result+=(currentchar-'A'+10)*base;
        }else if( currentchar>='a' && currentchar<='f'){
            result+=(currentchar-'a'+10)*base;
        }
        else{
            return;
        }
        base*=16;
    }
    cout<<result;
}

int main(){
    int B1,B2,N;
    cin>>B1;
    cin>>B2;
    cin>>N;
    if(B2==10){
            if (B1==16){
                HexadecimaltoDecimal(N);
            }
            else{
                AnyToDecimal(N,B1);
    }}
    else if(B1==10){
        DecimalToAny(N,B2);
    }
    else if(B1==8 && B2==2){
        OctaltoBinary(N);
    }


}
