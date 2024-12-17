# **Standard Template Library (STL) in C++**

The **Standard Template Library (STL)** is a collection of template-based classes and functions in C++ that provide common data structures and algorithms. It makes programming efficient by reusing well-tested, generic code.

---

### **Components of STL**

1. **Containers**: Data structures that store collections of data.
2. **Iterators**: Objects used to traverse elements in containers.
3. **Algorithms**: Predefined functions to perform operations like searching, sorting, etc.
4. **Functors**: Function objects that can be used as arguments for algorithms.

---

### **1. Containers**

Containers are classified into three types:

#### **a. Sequence Containers**
Maintain the order of elements.

- **Vector**: Dynamic array.
- **Deque**: Double-ended queue.
- **List**: Doubly linked list.
- **Forward List**: Singly linked list.
- **Array**: Static array with fixed size.

#### **b. Associative Containers**
Maintain key-value pairs in sorted order.

- **Set**: Unique keys in sorted order.
- **Multiset**: Duplicate keys allowed.
- **Map**: Key-value pairs with unique keys.
- **Multimap**: Key-value pairs with duplicate keys.

#### **c. Unordered Containers**
Maintain key-value pairs in hashed order (not sorted).

- **Unordered Set**: Unique keys in hashed order.
- **Unordered Multiset**: Duplicate keys allowed.
- **Unordered Map**: Key-value pairs with unique keys.
- **Unordered Multimap**: Key-value pairs with duplicate keys.

---

### **2. Iterators**

Iterators provide a way to traverse elements in a container.

#### **Types of Iterators**:
1. **Input Iterator**: Read-only forward traversal.
2. **Output Iterator**: Write-only forward traversal.
3. **Forward Iterator**: Read/write forward traversal.
4. **Bidirectional Iterator**: Read/write forward and backward traversal.
5. **Random Access Iterator**: Direct access to any element (like arrays).

#### **Example**:
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    // Using iterators to traverse the vector
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    return 0;
}
```

---

### **3. Algorithms**

STL provides several algorithms to perform operations on containers. These are generic and work with iterators.

#### **Examples of Algorithms**:
1. **Sorting**:
   ```cpp
   #include <iostream>
   #include <algorithm>
   #include <vector>
   using namespace std;

   int main() {
       vector<int> v = {5, 2, 9, 1, 7};
       sort(v.begin(), v.end());
       for (int x : v) cout << x << " "; // Output: 1 2 5 7 9
       return 0;
   }
   ```

2. **Searching**:
   ```cpp
   #include <iostream>
   #include <algorithm>
   #include <vector>
   using namespace std;

   int main() {
       vector<int> v = {1, 2, 5, 7, 9};
       if (binary_search(v.begin(), v.end(), 5)) {
           cout << "Element found!" << endl;
       } else {
           cout << "Element not found." << endl;
       }
       return 0;
   }
   ```

3. **Other Common Algorithms**:
   - `find()`: Locate an element.
   - `reverse()`: Reverse elements in a range.
   - `accumulate()`: Compute the sum of a range.
   - `count()`: Count occurrences of an element.

---

### **4. Functors**

A **functor** is a class or struct that overloads the `operator()` to act like a function.

#### **Example**:
```cpp
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct MultiplyByTwo {
    void operator()(int &x) { x *= 2; }
};

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    for_each(v.begin(), v.end(), MultiplyByTwo());
    for (int x : v) cout << x << " "; // Output: 2 4 6 8 10
    return 0;
}
```

---

### **Container-Specific Features**

1. **Vector**:
   - Dynamic resizing.
   - Random access in O(1).
   - Example:
     ```cpp
     vector<int> v = {10, 20, 30};
     v.push_back(40); // Add an element at the end
     v.pop_back();    // Remove the last element
     ```

2. **Deque**:
   - Efficient insertion and deletion at both ends.
   - Example:
     ```cpp
     deque<int> dq = {10, 20, 30};
     dq.push_front(5);  // Add to front
     dq.push_back(40);  // Add to back
     ```

3. **Set**:
   - Stores unique elements in sorted order.
   - Example:
     ```cpp
     set<int> s = {10, 20, 30};
     s.insert(25);
     s.erase(20);
     ```

4. **Map**:
   - Stores key-value pairs with unique keys.
   - Example:
     ```cpp
     map<string, int> m;
     m["Alice"] = 25;
     m["Bob"] = 30;
     ```

5. **Unordered Map**:
   - Key-value pairs with faster lookups using hashing.
   - Example:
     ```cpp
     unordered_map<string, int> um;
     um["Alice"] = 25;
     um["Bob"] = 30;
     ```

---

### **Advantages of STL**
1. **Efficiency**: Reusable, pre-tested components save development time.
2. **Generality**: Can work with any data type using templates.
3. **Consistency**: Common interfaces and conventions across components.

---

### **Best Practices for Using STL**

1. Use **containers** best suited for the problem:
   - `vector` for dynamic arrays.
   - `set` for unique, sorted elements.
   - `map` for key-value pairs.
   
2. Prefer **algorithms** over manual implementations to reduce bugs and improve readability.
   
3. Use **iterators** for container traversal to make code generic and compatible with STL algorithms.

Would you like to dive deeper into any specific STL component, such as detailed examples of `map`, advanced algorithms, or custom functors?