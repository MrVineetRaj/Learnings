#include<bits/stdc++.h>
using namespace std;


int summationOfNNumbers(int n){
    if(n == 1){
        return 1;
    }
    return n + summationOfNNumbers(n-1);
}

int factorial(int n){
    if(n == 1){
        return 1;
    }
    return n * factorial(n-1);
}

void printFibonacci(int a,int b,int n){
    if(n == 0){
        cout<<endl;
        return;
    }
    cout<<a+b<< " ";
    printFibonacci(b,a + b,n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<"Summation of N Numbers : "<<summationOfNNumbers(n);
    cout<<"\nFactorial of N Numbers : "<<factorial(n);
    cout<<"\nFibonacci Series : ";
    cout<<"0 1 ";
    printFibonacci(0,1,n-2);
}