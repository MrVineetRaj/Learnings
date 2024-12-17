# **Vectors in C++**

This program demonstrates various operations on `vector` (a dynamic array in the STL) and showcases key concepts like element insertion, copying, and clearing a vector.

---

### **1. `#include<bits/stdc++.h>`**
- **Purpose**: Includes all standard headers in a single line.
- **Use Case**: Commonly used in competitive programming for convenience.
- **Note**: Use explicit headers like `<vector>`, `<iostream>`, `<algorithm>`, etc., in production code for clarity and faster compilation.

---

### **2. Working with Vectors**

Vectors are dynamic arrays in C++ that can grow and shrink at runtime. They are part of the STL and defined in the `<vector>` header.

---

#### **Key Operations Demonstrated**

1. **Initialization**
   ```cpp
   vector<int> a; // Creates an empty vector of integers.
   ```

2. **Adding Elements**
   - **`push_back(x)`**: Adds an element to the end of the vector.
   - **`emplace_back(x)`**: Similar to `push_back`, but more efficient as it constructs the element in-place.
     ```cpp
     for (int i = 0; i < 5; i++) {
         cin >> x;
         a.push_back(x);     // Inserts x at the end of vector `a`.
         a.emplace_back(x);  // Faster insertion.
     }
     ```

3. **Iterating through the Vector**
   - **Range-based for loop** with `auto`:
     ```cpp
     for (auto it : a) {
         cout << it << " ";
     }
     ```
     - **`auto`**: Automatically deduces the type of `it`.

4. **Removing Elements**
   - **`pop_back()`**: Removes the last element of the vector.
     ```cpp
     a.pop_back();
     ```

5. **Copying Vectors**
   - **Direct Initialization**:
     ```cpp
     vector<int> b = {1, 2, 3, 4, 5};
     vector<int> c(b); // Copies all elements of `b` into `c`.
     ```

6. **Inserting Elements**
   - **Single Element**:
     ```cpp
     c.insert(c.begin(), 10); // Inserts 10 at the beginning.
     ```
   - **Multiple Elements**:
     ```cpp
     c.insert(c.begin() + 2, 2, 3); // Inserts `3` two times at index 2.
     ```
   - **Range Insertion**:
     ```cpp
     c.insert(c.begin(), copy.begin(), copy.end()); // Copies elements from `copy`.
     ```

7. **Clearing the Vector**
   - Removes all elements and resets the size of the vector to 0.
     ```cpp
     c.clear();
     ```

8. **Using Iterators**
   - **Declaration**:
     ```cpp
     vector<int>::iterator it = c.begin();
     ```
   - **Pointer Arithmetic**:
     ```cpp
     it += 2; // Moves the iterator to the 3rd position.
     ```

---

### **Output of Code Execution**

#### **Sample Input**:
```
1 2 3 4 5
```

#### **Output**:
```
1 2 3 4 5 Now giving array_b ->
Array c is: 1 2 3 4 5
Updated array c is: 10 1 3 3 2 3 4 5
Updated array c is: 1 2 3 4 5
```

---

### **Code Walkthrough**

1. **Dynamic Input Handling**:
   - User inputs elements to populate vector `a`.

2. **Efficient Insertion with `emplace_back`**:
   - Constructs elements directly at the end of the vector, avoiding unnecessary copies.

3. **Range-based Loop and `pop_back()`**:
   - Iterates over elements while removing elements from the back of the vector.

4. **Vector Copying and Initialization**:
   - Demonstrates how to create a new vector (`c`) from an existing vector (`b`).

5. **Advanced Insertion Techniques**:
   - Inserts single or multiple elements at specific positions.

6. **Range Insertion**:
   - Replaces elements of `c` with elements from another vector (`copy`).

---

### **Important Notes on the Code**

1. **`pop_back()` inside a loop**:
   - This modifies the vector's size while iterating, which may cause unintended behavior. Avoid this pattern unless explicitly desired.

2. **Efficient Iteration**:
   - Use iterators or range-based loops for clean and efficient traversal of vectors.

3. **`emplace_back()` vs. `push_back()`**:
   - `emplace_back` is faster because it avoids unnecessary copying.

4. **Clarity and Structure**:
   - Breaking operations into functions can improve readability and maintainability.

---

### **Key STL Vector Functions**

| **Function**          | **Description**                                   |
|------------------------|---------------------------------------------------|
| `push_back(x)`         | Adds `x` to the end of the vector.                |
| `emplace_back(x)`      | Constructs and adds `x` directly at the end.      |
| `pop_back()`           | Removes the last element.                         |
| `insert(pos, val)`     | Inserts `val` at the position `pos`.              |
| `insert(pos, n, val)`  | Inserts `val` `n` times at the position `pos`.    |
| `insert(pos, range)`   | Inserts elements from a range `[begin, end)`.     |
| `erase(pos)`           | Removes the element at position `pos`.            |
| `clear()`              | Removes all elements.                             |
| `begin(), end()`       | Returns iterators to the beginning and end.       |
| `size()`               | Returns the number of elements in the vector.     |

