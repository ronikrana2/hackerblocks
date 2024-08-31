#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool compare(string a,string b){
    int i=0;
    int cnt=0;
    int small = min(a.length(),b.length());

    while(a[i]==b[i] && i<small){
            i++;
            cnt++;
    }
    if(cnt==small){
        return a.length()>b.length();
    }
    else{
        return a<b;
    }

}
int main(){
    int n;
    cin>>n;
    string s[1000];
    cin.get();
    for(int i=0;i<n;i++){
        getline(cin,s[i]);
    }

    sort(s,s+n,compare);


    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }

    return 0;
}
