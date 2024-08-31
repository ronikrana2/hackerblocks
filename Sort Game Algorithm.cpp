#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare (pair<string,int>a,pair<string,int>b){
    if(a.second==b.second){
        return a.first<b.first;
    }
    else{
        return a.second>b.second;
    }

}

int main(){
    int x,n;
    cin>>x;
    cin>>n;
    vector<pair<string,int> > data;
    for(int i=0;i<n;i++){
        string tempStr;
        int tempInt;
        cin>>tempStr>>tempInt;
        if(tempInt>=x){
                data.push_back(make_pair(tempStr,tempInt));
        }
    }

    sort(data.begin(),data.end(),compare);

    for(int i=0;i<data.size();i++){
        cout<<data[i].first<<" "<<data[i].second<<endl;
    }
}
