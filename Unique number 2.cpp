#include <iostream>
using namespace std;

int main(){
    int a[]={6,5,1,6,1,3};
    int n=sizeof(a)/sizeof(int);

    int ans=0;
    for(int i=0;i<n;i++){
            ans ^=a[i];
    }
    int result=ans;
    int pos=0;
    while(ans>0){
        if(ans&1>0){
            break;
        }
        pos++;
        ans=ans>>1;
    }

    int x = (1<<pos);
    int uni1=0;

    for(int i=0;i<n;i++){
        if((a[i]&x)==0){
            uni1 ^= a[i];
        }
    }
    int uni2=result^uni1;

    cout<<uni1<<" "<<uni2<<endl;

    return 0;


}
