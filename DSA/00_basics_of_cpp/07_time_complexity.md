# **Time Complexity in Detail**

Time complexity is a measure used to evaluate the efficiency of an algorithm. It describes how the runtime of an algorithm grows as the size of the input data increases. Understanding time complexity is crucial in algorithm design to ensure solutions are scalable and efficient.

---

### **Why Time Complexity Matters**
1. **Performance Prediction**: Helps estimate how long an algorithm will take for large inputs.
2. **Scalability**: Ensures that the solution performs well with increasing input sizes.
3. **Comparing Algorithms**: Facilitates choosing the best algorithm for a given problem.

---

### **How to Express Time Complexity**
Time complexity is expressed using **Big-O Notation**, which represents the upper bound of an algorithm's runtime in the worst-case scenario.

#### Common Notations:
- **O(1)**: Constant time.
- **O(log n)**: Logarithmic time.
- **O(n)**: Linear time.
- **O(n log n)**: Linearithmic time.
- **O(n²)**: Quadratic time.
- **O(2ⁿ)**: Exponential time.
- **O(n!)**: Factorial time.

---

### **Types of Time Complexity**

1. **Constant Time (O(1))**
   - The algorithm executes in the same amount of time regardless of input size.
   - Example: Accessing an array element by index.
   ```cpp
   int arr[] = {10, 20, 30};
   cout << arr[0]; // O(1)
   ```

2. **Logarithmic Time (O(log n))**
   - The algorithm reduces the problem size with each step (e.g., divide and conquer).
   - Example: Binary Search.
   ```cpp
   int binarySearch(int arr[], int n, int key) {
       int low = 0, high = n - 1;
       while (low <= high) {
           int mid = (low + high) / 2;
           if (arr[mid] == key) return mid;  // O(log n)
           else if (arr[mid] < key) low = mid + 1;
           else high = mid - 1;
       }
       return -1;
   }
   ```

3. **Linear Time (O(n))**
   - The runtime grows linearly with the input size.
   - Example: Finding the maximum element in an array.
   ```cpp
   int findMax(int arr[], int n) {
       int max = arr[0];
       for (int i = 1; i < n; i++) { // O(n)
           if (arr[i] > max) max = arr[i];
       }
       return max;
   }
   ```

4. **Linearithmic Time (O(n log n))**
   - Common in divide-and-conquer algorithms like Merge Sort and Quick Sort.
   - Example: Merge Sort.
   ```cpp
   void mergeSort(int arr[], int l, int r) {
       if (l < r) {
           int m = l + (r - l) / 2;
           mergeSort(arr, l, m);      // O(log n)
           mergeSort(arr, m + 1, r);  // O(log n)
           merge(arr, l, m, r);       // O(n)
       }
   } // Total: O(n log n)
   ```

5. **Quadratic Time (O(n²))**
   - Nested loops where the work increases quadratically.
   - Example: Bubble Sort.
   ```cpp
   void bubbleSort(int arr[], int n) {
       for (int i = 0; i < n - 1; i++) {     // O(n)
           for (int j = 0; j < n - i - 1; j++) { // O(n)
               if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
           }
       }
   } // Total: O(n²)
   ```

6. **Exponential Time (O(2ⁿ))**
   - Runtime doubles with each additional input. Common in brute force algorithms.
   - Example: Solving the Tower of Hanoi problem.
   ```cpp
   void towerOfHanoi(int n, char from, char to, char aux) {
       if (n == 1) {
           cout << "Move disk 1 from " << from << " to " << to << endl;
           return;
       }
       towerOfHanoi(n - 1, from, aux, to); // O(2ⁿ)
       cout << "Move disk " << n << " from " << from << " to " << to << endl;
       towerOfHanoi(n - 1, aux, to, from);
   }
   ```

7. **Factorial Time (O(n!))**
   - Seen in problems like generating permutations.
   - Example: Generating all permutations of a string.

---

### **Analyzing Time Complexity**
#### Steps:
1. **Identify Loops**:
   - Single loops: O(n).
   - Nested loops: Multiply complexities (e.g., O(n²) for two nested loops).
   
2. **Recursive Functions**:
   - Use the **Master Theorem** for divide-and-conquer algorithms.
   - Example: T(n) = 2T(n/2) + O(n) for Merge Sort → O(n log n).

3. **Eliminate Constants and Lower-Order Terms**:
   - Focus on the largest term as input size grows.

#### Example Analysis:
```cpp
void example(int n) {
    for (int i = 0; i < n; i++) {       // O(n)
        for (int j = 0; j < n; j++) {   // O(n)
            cout << i + j;             // O(1)
        }
    }
}
```
- Outer loop: O(n).
- Inner loop: O(n).
- Total: O(n × n) = O(n²).

---

### **Best, Average, and Worst Case**
- **Best Case**: The input leads to the least number of operations.
- **Average Case**: The expected number of operations for a random input.
- **Worst Case**: The maximum number of operations for any input.

#### Example: Linear Search
```cpp
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {  // O(n)
        if (arr[i] == key) return i;
    }
    return -1;
}
```
- Best Case: O(1) (key is the first element).
- Worst Case: O(n) (key is the last element or not present).
- Average Case: O(n/2) → Simplified to O(n).

---

### **Time Complexity of Common Algorithms**

| **Algorithm**         | **Best Case** | **Average Case** | **Worst Case** |
|------------------------|---------------|-------------------|----------------|
| Linear Search          | O(1)         | O(n)             | O(n)           |
| Binary Search          | O(1)         | O(log n)         | O(log n)       |
| Bubble Sort            | O(n)         | O(n²)            | O(n²)          |
| Merge Sort             | O(n log n)   | O(n log n)       | O(n log n)     |
| Quick Sort             | O(n log n)   | O(n log n)       | O(n²)          |

---

### **Best Practices for Time Complexity**

1. **Optimize Loops**: Avoid nested loops when possible.
2. **Use Efficient Algorithms**: Prefer `O(n log n)` solutions over `O(n²)` for sorting or searching.
3. **Divide and Conquer**: Break problems into smaller subproblems for logarithmic growth.
4. **Precompute Results**: Use memoization or dynamic programming to store intermediate results.

Would you like to dive deeper into analyzing specific algorithms, or examples of improving time complexity?