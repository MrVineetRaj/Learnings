# Basics of Javascript


For documents prefer [MDN](https://developer.mozilla.org/en-US/docs/Web/JavaScript)
## Variable Declaration in JavaScript

### `var` (Function-Scoped)
- Traditional way to declare variables
- Function-scoped or globally-scoped
- Can be redeclared and updated
- Suffers from [**hoisting issues**](https://www.geeksforgeeks.org/javascript-hoisting/) 
- Not recommended in modern JavaScript

### `let` (Block-Scoped)
- Modern variable declaration (ES6+)
- Block-scoped
- Can be updated but not redeclared in same scope
- Not hoisted
- Recommended for variables that need to be reassigned

### `const` (Block-Scoped)
- Used for constant values (ES6+)
- Block-scoped
- Cannot be reassigned after declaration
- Must be initialized at declaration
- For objects and arrays, properties can still be modified
- Recommended for values that shouldn't change

### Best Practices
1. Use `const` by default
2. Use `let` when you need to reassign values
3. Avoid `var` in modern JavaScript code
4. Always declare variables before using them
JavaScript is a versatile programming language that runs in web browsers. Here are the key fundamentals:

