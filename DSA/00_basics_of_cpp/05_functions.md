# **Functions in C++**

Functions are reusable blocks of code that perform a specific task. They help organize code, improve readability, and avoid repetition by encapsulating functionality into modular units.

---

# **Key Components of a Function**

1. **Return Type**: Specifies the type of value the function returns (e.g., `int`, `float`, `void`).
2. **Function Name**: Identifies the function. Should be meaningful and follow naming conventions.
3. **Parameters (Optional)**: Inputs to the function, enclosed in parentheses.
4. **Function Body**: Contains the code that defines the behavior of the function.
5. **Return Statement**: Ends the function and optionally returns a value (if the return type is not `void`).

---

# **Function Syntax**

```cpp
return_type function_name(parameters) {
    // Function body
    return value; // Optional, depends on the return type
}
```

---

# **Types of Functions**

1. **Built-in Functions**: Provided by the C++ standard library (e.g., `sqrt()`, `abs()`).
2. **User-Defined Functions**: Defined by the programmer.

---

# **Defining and Calling a Function**

## Example:
```cpp
#include <iostream>
using namespace std;

// Function definition
int add(int a, int b) {
    return a + b; // Return the sum of a and b
}

int main() {
    int x = 10, y = 20;

    // Function call
    int result = add(x, y);
    cout << "Sum: " << result << endl;

    return 0;
}
```

**Output:**
```
Sum: 30
```

---

# **Types of Function Parameters**

1. **Pass by Value**:
   - A copy of the argument is passed to the function.
   - Modifications inside the function do not affect the original variable.

   ## Example:
   ```cpp
   void increment(int x) {
       x++; // Modifies the copy
   }

   int main() {
       int num = 10;
       increment(num);
       cout << num; // Output: 10
   }
   ```

2. **Pass by Reference**:
   - A reference to the original variable is passed.
   - Modifications inside the function affect the original variable.

   ## Example:
   ```cpp
   void increment(int &x) {
       x++; // Modifies the original
   }

   int main() {
       int num = 10;
       increment(num);
       cout << num; // Output: 11
   }
   ```

3. **Pass by Pointer**:
   - A pointer to the variable is passed, allowing access to its memory location.

   ## Example:
   ```cpp
   void increment(int *x) {
       (*x)++; // Dereferences the pointer to modify the original
   }

   int main() {
       int num = 10;
       increment(&num);
       cout << num; // Output: 11
   }
   ```

---

# **Default Parameters**

You can specify default values for function parameters, which are used if no argument is provided.

## Example:
```cpp
int add(int a, int b = 5) {
    return a + b;
}

int main() {
    cout << add(10) << endl;    // Output: 15
    cout << add(10, 20) << endl; // Output: 30
}
```

---

# **Function Overloading**

C++ allows multiple functions with the same name, as long as their parameter lists are different.

## Example:
```cpp
int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

int main() {
    cout << add(10, 20) << endl;       // Calls the int version
    cout << add(10.5f, 20.5f) << endl; // Calls the float version
}
```

---

# **Inline Functions**

An `inline` function is a suggestion to the compiler to replace the function call with the actual code of the function. It can improve performance for small, frequently called functions.

## Example:
```cpp
inline int square(int x) {
    return x * x;
}

int main() {
    cout << square(5) << endl; // Output: 25
}
```

---

# **Recursive Functions**

A function that calls itself to solve a smaller instance of a problem. Be cautious about termination conditions to avoid infinite recursion.

## Example:
```cpp
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    cout << factorial(5) << endl; // Output: 120
}
```

---

# **Lambda Functions (C++11 and Later)**

A lambda function is an anonymous function that can be defined inline.

## Example:
```cpp
#include <iostream>
using namespace std;

int main() {
    auto add = [](int a, int b) -> int {
        return a + b;
    };

    cout << add(10, 20) << endl; // Output: 30

    return 0;
}
```

---

# **Function Templates**

Templates allow you to create generic functions that work with any data type.

## Example:
```cpp
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add(10, 20) << endl;        // Output: 30
    cout << add(10.5, 20.5) << endl;    // Output: 31.0
}
```

---

# **Best Practices for Functions**

1. **Meaningful Names**: Use descriptive names for functions to reflect their purpose.
2. **Keep Functions Short**: A function should ideally perform a single task.
3. **Use Parameters**: Avoid using global variables inside functions.
4. **Comment Complex Logic**: Explain the purpose of the function and any non-trivial logic.
5. **Avoid Side Effects**: Minimize unintended changes to variables outside the function.
