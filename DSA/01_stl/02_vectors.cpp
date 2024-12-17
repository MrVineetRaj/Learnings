#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a;
    int x;
    for(int i=0; i<5; i++){
        cin>>x;
        a.push_back(x);
        a.emplace_back(x); // This is also used to insert element in vector but it is faster than push_back
    }

    for(auto it: a){ // auto is used to automatically detect the type of variable
        cout<<it<<" ";
        a.pop_back();

    }

    vector<int> b = {1,2,3,4,5};

    cout<<endl<<"Now giving array_b ->"<<endl;
    vector<int> c(b);



    cout<<"Array c is: ";
    for(auto it: c){
        cout<<it<<" ";
    }
    cout<<endl;

    // Inserting element in vector
    c.insert(c.begin(), 10);
    c.insert(c.begin()+2, 2,3); // Inserting 3 two times at 2nd position

    
    vector<int>::iterator it = c.begin();
    it+=2;


    cout<<"Updated array c is: ";
    for(auto it: c){
        cout<<it<<" ";
    }

    vector<int> copy = {1,2,3,4,5};
    c.clear();
    c.insert(c.begin(), copy.begin(), copy.end());

    cout<<endl;
    cout<<"Updated array c is: ";
    for(auto it: c){
        cout<<it<<" ";
    }

    cout<<endl;

    
}