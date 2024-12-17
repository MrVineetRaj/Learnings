# Switch Case Statements

In C++, the **`switch`** statement is a control flow construct that is used to handle multiple potential values for a variable in a clean and readable manner. It is particularly useful when you have many `if-else` conditions for the same variable.

### **Syntax of `switch`**

```cpp
switch (expression) {
    case value1:
        // Code to execute if expression == value1
        break;

    case value2:
        // Code to execute if expression == value2
        break;

    // You can have as many cases as you want
    default:
        // Code to execute if none of the cases match
        break;
}
```

### **Key Components**
1. **`switch (expression)`**: The `expression` is evaluated, and its result is compared with each `case` label.
   - The `expression` must evaluate to an integral type (e.g., `int`, `char`, `enum`). Floating-point types (`float`, `double`) are not allowed.

2. **`case value:`**: These are labels that specify the values the `expression` is compared against. Each `case` must be unique.

3. **`break;`**: Exits the `switch` block. Without it, the execution continues to the next case, even if the value doesn’t match (known as **fall-through**).

4. **`default:`**: This is optional. It specifies the code to execute if none of the `case` values match the `expression`.

---

### **How it Works**

1. The `switch` evaluates the `expression`.
2. It compares the result with each `case`.
3. If a match is found, the code in that `case` is executed.
4. Execution stops when a `break` statement is encountered or the end of the `switch` block is reached.
5. If no match is found, the `default` case (if present) is executed.

---

### **Example**

```cpp
#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter a number (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You selected One.\n";
            break;

        case 2:
            cout << "You selected Two.\n";
            break;

        case 3:
            cout << "You selected Three.\n";
            break;

        default:
            cout << "Invalid choice.\n";
    }

    return 0;
}
```

---

### **Fall-Through Behavior**

If you omit the `break` statement, the code "falls through" to the next `case`. This can sometimes be intentional.

```cpp
#include <iostream>
using namespace std;

int main() {
    int num = 2;

    switch (num) {
        case 1:
            cout << "Case 1\n";
        case 2:
            cout << "Case 2\n";
        case 3:
            cout << "Case 3\n";
        default:
            cout << "Default\n";
    }

    return 0;
}
```

**Output:**
```
Case 2
Case 3
Default
```

---

### **Best Practices**

1. **Always use `break`** unless you intentionally want fall-through behavior.
2. **Default case**: Include it to handle unexpected input.
3. **Avoid duplicating cases**: Every `case` must have a unique value.
4. **Keep it readable**: Limit the number of cases in a single `switch`. For many cases, consider using a map or lookup table.

---

### **Nested Switch**

You can nest `switch` statements, though this is less common:

```cpp
switch (x) {
    case 1:
        switch (y) {
            case 10:
                cout << "x = 1, y = 10\n";
                break;
        }
        break;
}
```

---

### **Limitations of `switch`**
1. **Data Types**: `switch` only supports integral types (`int`, `char`, `enum`). You cannot use strings or floating-point numbers.
2. **No Range Matching**: You cannot directly match a range (e.g., `case 1-5:`). Use `if-else` for such conditions.

With this understanding, the `switch` statement can be a powerful tool for managing multiple conditional paths efficiently and clearly!