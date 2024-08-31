#include <iostream>
using namespace std;

int main(){
    char a[1000];
    cin>>a;
    int freq[26]={0};
    for(int i=0;a[i]!='\0';i++){
        char ch=a[i];
        int indx= ch-'a';
        freq[indx]++;
    }
    int max=0;
    int wi=0;
    for(int i=0;i<26;i++){
        if(freq[i]>max){
            max=freq[i];
            wi=i;
        }
    }
    char maxfreq=wi+'a';
    cout<<maxfreq<<endl;

    return 0;
}
