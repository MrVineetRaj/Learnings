# JavaScript Data Types and Type Conversion

## Strict Mode

JavaScript's strict mode is a way to opt into a restricted variant of JavaScript, thereby implicitly opting out of "sloppy mode". It helps in catching common coding mistakes and "unsafe" actions such as defining global variables unintentionally. Note that in strict mode, some browser-specific features like `alert` and `prompt` are not available.

by defining `use strict` on top of file

## Primitive Data Types

JavaScript has several primitive data types:

### Number

Represents both integer and floating-point numbers.

```javascript
let num = 10;
```

### String

Represents a sequence of characters.

```javascript
let str = "Hello World";
```

### Boolean

Represents a logical entity and can have two values: `true` or `false`.

```javascript
let bool = true;
```

### Undefined

A variable that has been declared but not assigned a value.

```javascript
let und = undefined;
console.log(typeof und); // undefined
```

### Null

Represents the intentional absence of any object value. Note that `typeof null` returns `object` due to a bug in JavaScript.

```javascript
let nul = null;
console.log(typeof null); // object
```

### Symbol

Used to create unique identifiers for objects.

```javascript
let sym = Symbol("symbol");
```

### BigInt

Used to store large integers beyond the safe integer limit for

Number

.

```javascript
let bigInt = 10n;
```

## Non-Primitive Data Types

JavaScript also has several non-primitive data types:

### Object

A collection of properties, where each property is a key-value pair.

```javascript
let obj = {
  name: "John",
  age: 20,
};
```

### Array

A special type of object used for storing ordered collections.

```javascript
let arr = [1, 2, 3, 4];
```

### Function

A block of code designed to perform a particular task.

```javascript
let fun = function () {
  console.log("Hello World");
};
```

### Date

Represents a single moment in time in a platform-independent format.

```javascript
let date = new Date();
```

### RegExp

Represents regular expressions, used for pattern matching within strings.

```javascript
let reg = /ab+c/;
```

### Error

Represents an error in JavaScript.

```javascript
let err = new Error("This is an error");
```

## Type Conversion

JavaScript allows for both implicit and explicit type conversion.

### Implicit Type Conversion

JavaScript automatically converts one data type to another.

```javascript
let num1 = 10;
let str1 = "20";
let sum = num1 + str1; // "1020" (number is converted to string and concatenated)
console.log(sum);
```

### Explicit Type Conversion

Manually converting one data type to another.

```javascript
let num2 = 10;
let str2 = "20";
let sum1 = num2 + Number(str2); // 30 (string is converted to number and added)
console.log(sum1);
```

### Type Conversion Methods

#### Number()

Converts a value to a number.

```javascript
let str3 = "10";
let num3 = Number(str3);
```

#### parseInt()

Parses a string and returns an integer.

```javascript
let str4 = "10.5";
let num4 = parseInt(str4); // 10
```

### Checking Types

You can check the type of a variable using `typeof`.

```javascript
console.log(typeof str4); // string
console.log(typeof num4); // number
```

#### NaN

Not a number

```javascript
let notANumber = "hello" * 2; // NaN
console.log(isNaN(notANumber)); // true
console.log(typeof NaN); // "number"
```

## Why Conversion of String to Number is confusing

String to number conversion in JavaScript can be confusing for several reasons:

1. Multiple Methods

   - `Number()`
   - `parseInt()`
   - `parseFloat()`
   - Unary plus operator (`+`)
     Each behaves slightly differently.

2. Unexpected Results

```javascript
Number("123") + // 123
  "123"; // 123
parseInt("123"); // 123
Number("12.34"); // 12.34
parseInt("12.34"); // 12
```

3. Order of Conversion

```js
console.log("1" + 2 + 2); // 122
console.log(1 + 2 + "2"); // 32
```

Always use Parenthesis to avoid such confusion

4. Loose Type Conversion

```javascript
Number(""); // 0
Number(" "); // 0
Number("hello"); // NaN
Number("123hello"); // NaN
parseInt("123hello"); // 123
```

5. Base System Confusion

```javascript
parseInt("08"); // 8
parseInt("08", 8); // 0 (octal)
parseInt("0x10"); // 16 (hexadecimal)
```

## Prefix and Postfix operators

`++i` and `i++`



## Interview Questions on JavaScript Data Types

### Q1: What is the difference between `null` and `undefined`?
- `undefined` means a variable has been declared but not assigned a value
- `null` is an intentional absence of any value and must be assigned

### Q2: What is the result of `typeof null`?
- `typeof null` returns 'object', which is a known bug in JavaScript
- This bug exists since the first version of JavaScript and can't be fixed for legacy reasons

### Q3: What happens when you add a number and a string?
- JavaScript will convert the number to a string and perform string concatenation
- Example: `5 + "10"` results in `"510"` not `15`

### Q4: How can you check if a value is NaN?
- Use the `isNaN()` function
- `NaN` is the only value in JavaScript that is not equal to itself

### Q5: What's the difference between `==` and `===`?
- `==` performs type coercion before comparison
- `===` compares both value and type without coercion
- Example: `"5" == 5` is true, but `"5" === 5` is false
