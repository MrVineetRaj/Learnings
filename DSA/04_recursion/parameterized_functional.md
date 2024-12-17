# Recursion Examples Documentation

## Overview

This code demonstrates three fundamental recursive algorithms:

1. Summation of N numbers
2. Factorial calculation
3. Fibonacci series generation

## Implementation Approaches

This code implements recursion using two distinct approaches:

### Functional Approach

- Returns value through function return
- State maintained through return values
- Pure functions without side effects
- Examples: summationOfNNumbers(), factorial()

### Parameterized Approach

- Uses parameters to maintain state
- Void return type common
- Results through parameter modifications
- Example: printFibonacci()

### Key Differences

| Aspect       | Functional       | Parameterized      |
| ------------ | ---------------- | ------------------ |
| Return Type  | Non-void         | Usually void       |
| State        | Through returns  | Through parameters |
| Side Effects | Minimal          | Common             |
| Code Style   | Expression-based | Statement-based    |

## Functions

### 1. summationOfNNumbers(int n)

- **Purpose**: Calculates sum of first n natural numbers
- **Algorithm**: Uses recursive addition approach
- **Base Case**: n == 1 returns 1
- **Recursive Case**: n + sum of (n-1) numbers
- **Time Complexity**: O(n)
- **Space Complexity**: O(n) due to recursive stack

### 2. factorial(int n)

- **Purpose**: Calculates factorial of number n
- **Algorithm**: Uses recursive multiplication approach
- **Base Case**: n == 1 returns 1
- **Recursive Case**: n \* factorial of (n-1)
- **Time Complexity**: O(n)
- **Space Complexity**: O(n) due to recursive stack

### 3. printFibonacci(int a, int b, int n)

- **Purpose**: Prints Fibonacci series
- **Algorithm**: Uses recursive addition of previous two numbers
- **Parameters**:
  - a: first number
  - b: second number
  - n: remaining count of numbers to print
- **Base Case**: n == 0 returns void
- **Time Complexity**: O(n)
- **Space Complexity**: O(n) due to recursive stack

## Requirements Table

| Function            | Input Requirements | Output Format          | Error Handling |
| ------------------- | ------------------ | ---------------------- | -------------- |
| summationOfNNumbers | n > 0, integer     | Single integer         | None           |
| factorial           | n > 0, integer     | Single integer         | None           |
| printFibonacci      | n ≥ 2, integer     | Space-separated series | None           |

## Important Notes

1. Code uses standard template library (STL)
2. All functions assume positive integer inputs
3. No input validation implemented
4. Recursive solutions may cause stack overflow for large values
5. Main function handles the input and output formatting
6. Fibonacci series starts with 0, 1 explicitly in main

## Limitations

1. No error handling for negative inputs
2. Integer overflow possible for large inputs
3. Stack overflow possible for large recursive calls
4. No handling for edge cases (n = 0)

```cc
#include<bits/stdc++.h>
using namespace std;
// Paramterized way in detail
// Functional way in detail
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
```
