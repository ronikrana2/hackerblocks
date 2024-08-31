#include <iostream>
using namespace std;
int count=0;
void towerofhanoi(int n,string src,string dest,string helper){
    //base case
    if(n==0){
        return;
       }
    //rec case
    //first step n-1 disk move from src to helper
    towerofhanoi(n-1,src,helper,dest);
    cout<<"Move "<<n<<"th Disk from "<<src<<" to "<<dest<<endl;
    count++;
    towerofhanoi(n-1,helper,dest,src);
}

int main(){
    int n;
    cin>>n;
    towerofhanoi(n,"T1","T3","T2");
    cout<<count<<endl;
    return 0;
}
