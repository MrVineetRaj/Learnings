# Loops in C++

Loops are control flow constructs that allow a block of code to be executed repeatedly based on a condition. They are fundamental in programming for tasks that require iteration.

---

# **Types of Loops in C++**

1. **`for` Loop**
2. **`while` Loop**
3. **`do-while` Loop**
4. **Range-based `for` Loop** (introduced in C++11)

---

# **1. `for` Loop**

The `for` loop is used when the number of iterations is known beforehand. It consists of three parts:
- **Initialization**: Executes once before the loop starts.
- **Condition**: Evaluated before each iteration; if `false`, the loop terminates.
- **Update**: Executes after each iteration.

## Syntax:
```cpp
for (initialization; condition; update) {
    // Loop body
}
```

## Example:
```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) { // Loop runs 5 times
        cout << "Iteration: " << i << endl;
    }
    return 0;
}
```

---

# **2. `while` Loop**

The `while` loop is used when the number of iterations is not predetermined, but the loop must run as long as a condition is true.

## Syntax:
```cpp
while (condition) {
    // Loop body
}
```

## Example:
```cpp
#include <iostream>
using namespace std;

int main() {
    int counter = 0;

    while (counter < 5) {
        cout << "Counter: " << counter << endl;
        counter++; // Increment to avoid infinite loop
    }

    return 0;
}
```

---

# **3. `do-while` Loop**

The `do-while` loop guarantees that the loop body executes **at least once**, as the condition is checked after the loop.

## Syntax:
```cpp
do {
    // Loop body
} while (condition);
```

## Example:
```cpp
#include <iostream>
using namespace std;

int main() {
    int counter = 0;

    do {
        cout << "Counter: " << counter << endl;
        counter++;
    } while (counter < 5);

    return 0;
}
```

---

# **4. Range-Based `for` Loop** (C++11 and later)

This loop is used to iterate over elements in a container (like arrays, vectors, or other STL collections).

## Syntax:
```cpp
for (data_type variable : container) {
    // Loop body
}
```

## Example with Array:
```cpp
#include <iostream>
using namespace std;

int main() {
    int numbers[] = {10, 20, 30, 40, 50};

    for (int num : numbers) {
        cout << num << " ";
    }

    return 0;
}
```

## Example with `std::vector`:
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};

    for (int num : numbers) {
        cout << num << " ";
    }

    return 0;
}
```

---

# **Control Statements in Loops**

1. **`break`**: Exits the loop immediately.
2. **`continue`**: Skips the current iteration and moves to the next iteration.
3. **`goto`**: Jumps to a labeled statement (not recommended for regular use).

## Example: Using `break` and `continue`
```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) break; // Exit the loop when i is 5
        if (i % 2 == 0) continue; // Skip even numbers
        cout << i << " ";
    }
    return 0;
}
```

**Output:**
```
1 3
```

---

# **Nested Loops**

Loops can be nested inside other loops. This is useful for working with multi-dimensional data like matrices.

## Example:
```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << "(" << i << ", " << j << ") ";
        }
        cout << endl;
    }
    return 0;
}
```

**Output:**
```
(1, 1) (1, 2) (1, 3) 
(2, 1) (2, 2) (2, 3) 
(3, 1) (3, 2) (3, 3)
```

---

# **Infinite Loops**

An infinite loop occurs when the termination condition is never met. Use them cautiously, typically in event-driven programming.

## Example:
```cpp
#include <iostream>
using namespace std;

int main() {
    while (true) { // Infinite loop
        cout << "This will run forever!" << endl;
        break; // Use break to exit the loop
    }
    return 0;
}
```

---

# **Common Use Cases of Loops**

1. **Iterating through arrays or collections**:
   ```cpp
   int arr[] = {1, 2, 3, 4};
   for (int i = 0; i < 4; i++) {
       cout << arr[i] << " ";
   }
   ```

2. **Summing numbers**:
   ```cpp
   int sum = 0;
   for (int i = 1; i <= 10; i++) {
       sum += i;
   }
   cout << "Sum: " << sum << endl;
   ```

3. **User Input Until Valid**:
   ```cpp
   int number;
   do {
       cout << "Enter a positive number: ";
       cin >> number;
   } while (number <= 0);
   ```

4. **Generating Patterns**:
   ```cpp
   for (int i = 1; i <= 5; i++) {
       for (int j = 1; j <= i; j++) {
           cout << "*";
       }
       cout << endl;
   }
   ```

**Output:**
```
*
**
***
****
*****
```

---

# **Best Practices for Loops**
1. **Avoid Infinite Loops**: Ensure your condition eventually evaluates to `false`.
2. **Use Range-Based Loops for Collections**: They are safer and reduce indexing errors.
3. **Keep Conditions Simple**: Complex loop conditions can make code harder to read.
4. **Comment Nested Loops**: Explain their purpose for better readability.

Let me know if you'd like deeper insights into any specific type of loop or a practical example!