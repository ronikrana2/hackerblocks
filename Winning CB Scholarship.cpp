#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int total_students,total_coupons,coupons_required,get_coupons;
    cin>>total_students>>total_coupons>>coupons_required>>get_coupons;
    int cnt=total_coupons/coupons_required;
    total_coupons=total_coupons-(cnt*coupons_required);
    if(total_students<=cnt){
        cnt=total_students;
        total_students=0;
    }
    else{
         total_students-=cnt;
    }
    while(total_students>0){
        total_students--;
        total_coupons+=get_coupons;
        if(total_coupons>=coupons_required && total_students>0){
            int temp = (total_coupons/coupons_required);
             if(total_students<=temp){
            cnt+=total_students;
             total_students=0;
             }else{
                 total_students-=temp;
            cnt+=temp;
             }

            total_coupons=total_coupons-(temp*coupons_required);
        }
    }

    cout<<cnt;
    return 0;

}
