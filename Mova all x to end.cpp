#include <iostream>
#include <cstring>
using namespace std;

void MoveX(string &ch,int i){
    if(i>=ch.length()-1){
            return;
    }
    if(ch[i]=='x'){
            for(int j=i+1;j<ch.length();j++){
                if(ch[j]!='x'){
                   swap(ch[i],ch[j]);
                    break;
                   }
            }
    }
        MoveX(ch,i+1);
}

int main(){
    string ch;
    cin>>ch;
    MoveX(ch,0);
    cout<<ch;
    return 0;
}
