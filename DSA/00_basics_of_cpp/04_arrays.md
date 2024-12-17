# Arrays in C++

An **array** is a collection of elements of the same data type, stored in contiguous memory locations. Arrays are fundamental to programming in C++ and are particularly useful for storing and manipulating collections of data.

---

# **Key Characteristics of Arrays**
1. **Fixed Size**: The size of an array is fixed when it is declared and cannot be changed.
2. **Indexing**: Array elements are accessed using zero-based indexing.
3. **Homogeneous**: All elements in an array must be of the same data type.
4. **Contiguous Memory**: Elements are stored in consecutive memory locations, making access efficient.

---

# **Declaring Arrays**

## Syntax:
```cpp
data_type array_name[array_size];
```

## Examples:
```cpp
int numbers[5];             // An array of 5 integers
float grades[10];           // An array of 10 floating-point numbers
char letters[26];           // An array of 26 characters
```

---

# **Initializing Arrays**

You can initialize an array at the time of declaration:
```cpp
int numbers[5] = {1, 2, 3, 4, 5};   // Fully initialized
int numbers[5] = {1, 2};            // Partially initialized (others default to 0)
int numbers[] = {1, 2, 3, 4, 5};    // Compiler determines the size
```

Uninitialized arrays contain garbage values:
```cpp
int numbers[5];  // Contains unpredictable values
```

---

# **Accessing Array Elements**

You access elements using their index:
```cpp
#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    // Access and print elements
    cout << "First element: " << numbers[0] << endl;
    cout << "Last element: " << numbers[4] << endl;

    // Modify an element
    numbers[2] = 99;
    cout << "Modified element: " << numbers[2] << endl;

    return 0;
}
```

---

# **Multi-Dimensional Arrays**

## 2D Arrays:
Used for storing tabular data (like matrices).

```cpp
#include <iostream>
using namespace std;

int main() {
    int matrix[2][3] = { {1, 2, 3}, {4, 5, 6} };

    // Access elements
    cout << "Element at (0,1): " << matrix[0][1] << endl;

    // Modify an element
    matrix[1][2] = 99;
    cout << "Modified element: " << matrix[1][2] << endl;

    return 0;
}
```

## Declaring and Initializing:
```cpp
int matrix[2][3]; // 2 rows, 3 columns
int matrix[2][3] = { {1, 2, 3}, {4, 5, 6} };
int matrix[][3] = { {1, 2, 3}, {4, 5, 6} };  // Compiler deduces rows
```

You can also have higher-dimensional arrays (3D, 4D, etc.), but they are less common.

---

# **Common Array Operations**

1. **Traversing**:
   Loop through elements using `for` or `while` loops:
   ```cpp
   for (int i = 0; i < 5; i++) {
       cout << numbers[i] << " ";
   }
   ```

2. **Searching**:
   Use linear or binary search to find elements in arrays.

3. **Sorting**:
   Apply sorting algorithms like Bubble Sort, Selection Sort, or use the STL `sort()` function.

---

# **Limitations of Arrays**
1. **Fixed Size**: You cannot resize an array once declared.
2. **No Built-in Bounds Checking**: Accessing an invalid index leads to undefined behavior.
3. **Inefficient Insertions/Deletions**: Inserting or deleting elements in the middle requires shifting other elements.

---

# **Dynamic Arrays**

For flexible sizing, you can use dynamic arrays with pointers or use STL containers like `std::vector`.

## Example: Dynamic Array with Pointers
```cpp
#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int* array = new int[size];  // Dynamically allocate array

    // Initialize and print elements
    for (int i = 0; i < size; i++) {
        array[i] = i * 10;
        cout << array[i] << " ";
    }

    delete[] array;  // Free memory
    return 0;
}
```

## Using `std::vector`:
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;  // Dynamic array

    // Add elements
    numbers.push_back(10);
    numbers.push_back(20);

    // Access elements
    cout << numbers[0] << endl;

    return 0;
}
```

---

# **Best Practices**
1. **Use STL Containers**: For dynamic and safer operations, prefer `std::vector` over raw arrays.
2. **Always Check Bounds**: Avoid accessing out-of-bounds elements.
3. **Comment Dimensions**: In multi-dimensional arrays, clearly document the purpose of each dimension.

Would you like a deeper dive into any specific array topic, such as sorting, searching, or dynamic memory management?