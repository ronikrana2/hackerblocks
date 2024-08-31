#include <iostream>
using namespace std;

int toDecimal(int n,int db){
    int result=0;
    int multiplier=1;
    for(int i=1;n;i++){
        int c=n%10;
        n=n/10;
        c*=multiplier;
        result+=c;
        multiplier*=db;
    }
    return result;
}

int DecimalToAny(int n,int db){
    int result=0;
    int multiplier=1;
    for(int i=1;n>0;i++){
        int c=n%db;
        n=n/db;
        c*=multiplier;
        result+=c;
        multiplier*=10;
         }

    return result;
}

int main(){
    int sb,db,n;
    cin>>sb>>db>>n;
    int ans;
    if(sb==10){
        ans=DecimalToAny(n,db);
    }
    else if(db==10){
       ans=toDecimal(n,sb);
    }
    else{
        int a=toDecimal(n,sb);
        ans=DecimalToAny(a,db);
    }

    cout<<ans<<endl;


    return 0;
}
