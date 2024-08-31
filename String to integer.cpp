#include <iostream>
#include <cmath>
using namespace std;

int StringtoInteger(string ch, int i){
    int ans;
    if(i==ch.length()){
            return 0;
    }
    int digit=ch[i]-'0';

    int remaining=StringtoInteger(ch,i+1);
    int pow=1;
    for(int j=1;j<=(ch.length()-1-i);j++)
        pow*=10;
    return digit*pow +remaining;
}

int main(){
    string ch;
    cin>>ch;
    int result=StringtoInteger(ch,0);
    cout<<result;
    return 0;
}
