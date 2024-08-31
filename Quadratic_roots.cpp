#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int a,b,c,root1,root2,root;
    cin>>a;
    cin>>b;
    cin>>c;
    int dis= b*b - 4*a*c;
    if (dis>0){
        cout<<"Real and Distinct"<<endl;
        root1 = (-b + sqrt(dis))/2*a;
        root2= (-b - sqrt(dis))/2*a;
        if ( root1<root2){
        cout<<root1<<" "<<root2;
        }
        else{
        cout<<root2<<" "<<root1;
        }
    }
    else if (dis ==0){
        cout<<"Real and Equal"<<endl;
        root = -b / (2*a);
        cout<<root;
    }
    else{
        cout<<"Imaginary";
    }

}
