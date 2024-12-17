### **Pairs in C++**

This code demonstrates the usage of the `pair` class in C++ along with its variants, such as nested pairs and arrays of pairs. Here's a detailed breakdown:

---

### **1. The `#include<bits/stdc++.h>` Directive**
- **Purpose**: Includes all standard headers in one line.
- **Use Case**: Commonly used in competitive programming for convenience.
- **Note**: Not recommended for production code due to potential overhead and lack of explicit header specification.

---

### **2. Using the `pair` Class**

The `pair` class is part of the Standard Template Library (STL) and is defined in the `<utility>` header. It is used to store two values as a single unit.

#### **Basic Usage**
```cpp
pair<int, int> mypair;
mypair.first = 10;
mypair.second = 20;
```
- **`first`**: Accesses the first element.
- **`second`**: Accesses the second element.

#### **Output**
```text
My Pair is: 10 20
```

---

### **3. Nested Pairs**

Pairs can contain another pair as their second element, creating a **nested pair**.

#### **Initialization**
```cpp
pair<int, pair<int, int>> nestedpair = {10, {20, 30}};
```

#### **Accessing Nested Pair Elements**
- `nestedpair.first`: The first element (`10`).
- `nestedpair.second.first`: The first element of the nested pair (`20`).
- `nestedpair.second.second`: The second element of the nested pair (`30`).

#### **Output**
```text
Nested Pair is: 10 20 30
```

---

### **4. Pair Array**

You can create an array of `pair` objects, which is particularly useful for storing related data like coordinates, intervals, or key-value pairs.

#### **Initialization**
```cpp
pair<int, int> pairarray[5] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
```

#### **Accessing Elements**
```cpp
for (int i = 0; i < 5; i++) {
    cout << pairarray[i].first << " " << pairarray[i].second << endl;
}
```

#### **Output**
```text
Pair Array is:
1 2
3 4
5 6
7 8
9 10
```

---

### **Key Points about `pair`**
1. **Data Type**: `pair` is a template class, so it can hold any two data types, including other STL types.
   ```cpp
   pair<string, vector<int>> complexpair;
   ```
   
2. **Initialization**:
   - Using curly braces `{}`.
   - Using `make_pair()` function.
   ```cpp
   pair<int, int> p = make_pair(10, 20);
   ```

3. **Comparison**:
   - Pairs can be compared lexicographically using relational operators (`<`, `>`, etc.).
   ```cpp
   pair<int, int> p1 = {1, 2}, p2 = {1, 3};
   if (p1 < p2) cout << "p1 is smaller";
   ```

4. **Swapping**:
   - You can swap two pairs using the `swap` function.
   ```cpp
   pair<int, int> p1 = {1, 2}, p2 = {3, 4};
   p1.swap(p2); // Now p1 is {3, 4}, p2 is {1, 2}.
   ```

---

### **Suggestions for Best Practices**
1. Use **`#include<bits/stdc++.h>`** only in competitive programming or quick prototypes. Prefer explicit headers like `<utility>` in production.
2. Always comment on the purpose of pairs or nested pairs for better code readability.
