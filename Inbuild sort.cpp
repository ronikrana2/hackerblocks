#include <iostream>
#include<algorithm>
using namespace std;

int main(){
    int a[7]={5,3,1,2,4,7,6};
    int n=sizeof(a)/sizeof(int);

    cout<<"Before Sorting:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //InBuild  Sorting
    sort(a,a+n);


    cout<<"After Sorting:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}
