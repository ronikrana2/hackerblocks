#include <iostream>
using namespace std;

void duplicateseperate(string &ch,int i){
    if(i>=ch.length()-1){
        return;
    }
    if(ch[i]==ch[i+1]){
        ch.insert(i+1,1,'*');
        duplicateseperate(ch,i+2);
    }else{
    duplicateseperate(ch,i+1);
    }
}

int main(){
    string ch;
    cin>>ch;
    duplicateseperate(ch,0);
    cout<<ch<<endl;
    return 0;
}
