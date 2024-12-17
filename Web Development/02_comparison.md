# JavaScript Comparison and Data Types

## Comparison Operators and Type Coercion

### Basic Comparisons
In JavaScript, comparison operators can sometimes lead to confusion due to type coercion. For example:
```javascript
console.log(2 < 1); // false
console.log("3" > 1); // true
```
The second statement is true because the string "3" is coerced into the number 3. However, such comparisons should be avoided as they can lead to confusion.

### Null Comparisons
Null comparisons can be particularly tricky:
```javascript
console.log(null > 0);   // false - null is converted to 0
console.log(null == 0);  // false - null is not equal to 0
console.log(null >= 0);  // true - null is converted to 0
```
When using the equality operator (`==`), null is treated as NaN, so it is not equal to 0. However, when using relational operators like `>=`, null is converted to 0.

### Strict Equality
It is always recommended to use the strict equality operator (`===`) and strict inequality operator (`!==`) to avoid type coercion:
```javascript
console.log("2" == 2);   // true - 2 is converted to string
console.log("2" === 2);  // false - no type conversion
```

## Data Types in JavaScript

JavaScript data types are categorized into two main types: Primitive and Reference types.

### Primitive Data Types
Primitive data types are immutable and stored in stack memory. They are passed and copied by value. Examples include:
- Number
- String
- Boolean
- Null
- Undefined
- Symbol
- BigInt

### Reference Data Types
Reference data types are mutable and stored in heap memory. They are passed and copied by reference. Examples include:
- Object
- Array
- Function
- Date
- RegExp
- Error

### Differences Between Primitive and Reference Types

| Feature          | Primitive Types | Reference Types |
|------------------|-----------------|-----------------|
| Mutability       | Immutable       | Mutable         |
| Memory Location  | Stack           | Heap            |
| Passing          | By value        | By reference    |
| Copying          | By value        | By reference    |
| Storage          | Directly in variable | Reference to heap |

### Type Details

| Data Type  | typeof Result | Example Value | Storage Location |
|------------|---------------|---------------|------------------|
| Number     | "number"      | 42            | Stack            |
| String     | "string"      | "Hello"       | Stack            |
| Boolean    | "boolean"     | true          | Stack            |
| Null       | "object"      | null          | Stack            |
| Undefined  | "undefined"   | undefined     | Stack            |
| Symbol     | "symbol"      | Symbol()      | Stack            |
| BigInt     | "bigint"      | 10n           | Stack            |
| Object     | "object"      | {}            | Heap             |
| Array      | "object"      | []            | Heap             |
| Function   | "function"    | function(){}  | Heap             |

### Examples

#### Primitive Data Types
```javascript
const sym = Symbol("123");
const anotherSym = Symbol("123");
console.log(sym); // Symbol(123)
console.log(anotherSym); // Symbol(123)
console.log(sym === anotherSym); // false - each Symbol is unique
```

#### Reference Data Types
```javascript
const obj = { name: "John" };
const arr = [1, 2, 3];
const func = function() { console.log("Hello World"); };
const date = new Date();
```

## Interview Questions

1. **What is the difference between `==` and `===` in JavaScript?**
   - `==` performs type coercion before comparison, while `===` compares both value and type without coercion.

2. **Why does `null >= 0` return true but `null > 0` return false?**
   - In relational comparisons (`>`, `<`, `>=`, `<=`), null is converted to 0. However, equality comparisons (`==`) handle null as a special case.

3. **What is type coercion in JavaScript and when does it occur?**
   - Type coercion is the automatic conversion of values from one type to another. It occurs in operations between different types, like `"3" + 4 = "34"`.

4. **How would you safely compare two values of potentially different types?**
   - First check types using `typeof`, then convert explicitly if needed, or use `===` for strict equality.

5. **Explain the result of these comparisons:**
   ```javascript
   console.log(null == undefined);  // true
   console.log(null === undefined); // false
   ```
   - `==` considers null and undefined equal as a special case, while `===` checks type, and they are different types.
```