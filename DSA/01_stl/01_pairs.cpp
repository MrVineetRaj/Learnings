#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int> mypair;
    mypair.first = 10;
    mypair.second = 20;
    cout<<"My Pair is: ";
    cout<<mypair.first<<" "<<mypair.second<<endl;

    // Nested Pair
    pair<int,pair<int,int>> nestedpair = {10,{20,30}};

    cout<<"Nested Pair is: ";
    cout<<nestedpair.first<<" "<<nestedpair.second.first<<" "<<nestedpair.second.second<<endl;

    // Pair array
    pair<int,int> pairarray[5] = {{1,2},{3,4},{5,6},{7,8},{9,10}};
    cout<<"Pair Array is: ";
    for(int i=0; i<5; i++){
        cout<<pairarray[i].first<<" "<<pairarray[i].second<<endl;
    }
}