# If-Else Statement in C++

The if-else statement is used to execute a block of code among two alternatives based on a condition. It is a fundamental control structure in C++.

## Syntax

```cpp
if (condition) {
    // code to be executed if condition is true
} else {
    // code to be executed if condition is false
}
```

## Explanation

1. **Condition**: The condition is an expression that evaluates to either true or false.
2. **If Block**: If the condition evaluates to true, the code inside the if block is executed.
3. **Else Block**: If the condition evaluates to false, the code inside the else block is executed.

## Example

Let's consider the following example to understand the `if-else` statement:

```cpp
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible to vote" << endl;
    } else {
        cout << "You are not eligible to vote" << endl;
    }

    return 0;
}
```

## Explanation of the Example

1. The program prompts the user to enter their age.
2. The user's input is stored in the variable age.
3. The if statement checks if age is greater than or equal to 18.
   - If age is 18 or more, the message "You are eligible to vote" is printed.
   - If age is less than 18, the message "You are not eligible to vote" is printed.

This simple example demonstrates how the if-else statement can be used to make decisions based on conditions in C++.
