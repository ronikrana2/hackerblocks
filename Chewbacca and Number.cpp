#include <iostream>
#include <cmath>
using namespace std;

int Invert(int a){
    return 9-a;
}


int main(){
    long long int N;
    cin>>N;

    string num=to_string(N);
    string result="";

    for(int i=0;i<num.size();++i){
        int digit=num[i]-'0';
        if(i==0 && digit==9){
            result+='9';
        }
        else{
            int inv_digit=Invert(digit);
            if(inv_digit<digit){
                result+=to_string(inv_digit);
            }
            else{
                result+=to_string(digit);
            }
        }

    }



        cout<<result<<endl;
        return 0;
}




