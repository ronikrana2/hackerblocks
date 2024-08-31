#include <iostream>
using namespace std;

int main(){
    char ch;
    int a,b;
    do{
        cin>>ch;
        if (ch=='+' || ch=='-' || ch=='*' ||ch=='/' || ch=='%'){
            cin>>a>>b;
            if(ch=='+'){
                cout<<a+b<<endl;
            }
            else if(ch=='-'){
                cout<<a-b<<endl;
            }
            else if(ch=='*'){
                cout<<a*b<<endl;
            }
            else if(ch=='/'){
                    if(b==0){
                        cout<<"Second Digit can not be zero";
                    }
                    else{
                cout<<a/b<<endl;
            }}
            else if(ch=='%'){
                     if(b==0){
                        cout<<"Second Digit can not be zero";
                    }
                    else{
                cout<<a%b<<endl;
            }
            }
        }
        else if(ch=='X' || ch=='x'){
            break;
        }
        else{
            cout<<"Invalid operation. Try again."<<endl;
        }
        }while(true);
        return 0;
    }




