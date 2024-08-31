#include <iostream>
using namespace std;

void longestkunique(char a[],int key){
    int freq[26]={0};
    int len=-1;
    int cnt=0;
    int i=0;
    for(int j=0;a[j]!='\0';j++){
        freq[a[j]-'a']++;
        if(freq[a[j]-'a']==1){
            cnt++;
        }
        while(cnt>key){
            freq[a[i]-'a']--;
            if(freq[a[i]-'a']==0){
                cnt--;
            }
            i++;
        }
        if(cnt==key){
            len=max(len,j-i+1);
        }
    }
    cout<<"Largest string length with "<<key<<" unique characters "<<len<<endl;
}

int main(){
    char a[]="abbceddd";
    int k=3;

    longestkunique(a,k);

    return 0;
}
