#include <iostream>
using namespace std;

int TrappedWater(int arr[],int N){
    int left=0,right=N-1;
    int left_max=0,right_max=0;
    int water=0;

    while(left<right){
        if(arr[left]<=arr[right]){
            if(arr[left]>=left_max){
                left_max=arr[left];
            }else{
                water+= left_max-arr[left];
            }
            left++;
        }else{
            if(arr[right]>=right_max){
                right_max=arr[right];
            }else{
                water+=right_max-arr[right];
            }
            right--;
        }

    }
    return water;

}


int main(){
    int T;
    cin>>T;

    for(int i=0;i<T;i++){
        int N;
        cin>>N;
        int arr[N]={};
        for(int i=0;i<N;i++){
            cin>>arr[i];
            }
        int water=TrappedWater(arr,N);
        cout<<water<<endl;

    }
    return 0;

}
