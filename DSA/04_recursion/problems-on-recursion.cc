#include<bits/stdc++.h>
using namespace std;

// Problem 1: Print name n times
void printName(int n, string name){
    if(n == 0) return;
    cout << name << endl;
    printName(n-1, name);
}

// Problem 2: Print numbers from 1 to n
void printNumbers(int n){
    if(n == 0) return;
    printNumbers(n-1);
    cout << n << endl;
}

// Problem 3: Print numbers from n to 1
void printNumbersReverse(int n){
    if(n == 0) return;
    cout << n << endl;
    printNumbersReverse(n-1);
}

int main(){
    int n1,n2,n3,n4;

    // Problem 1: Print name n times
    // cin>>n1;
    // string name;
    // cin>>name;
    // printName(n1, name);

    // Problem 2: Print numbers from 1 to n
    // cin>>n2;
    // printNumbers(n2);

    // Problem 3: Print numbers from n to 1
    cin>>n3;
    printNumbersReverse(n3);

}