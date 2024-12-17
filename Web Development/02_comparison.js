// console.log(2 < 1); // false
// console.log("3" > 1); // true

// above statement is true but should be avoided as it can lead to confusion

// console.log(null > 0); // as null is not a number, it is converted to 0
// console.log(null == 0); // false as null is not equal to 0
// console.log(null >= 0); // true as null is converted to 0

// here when equality operator is used, null taken as NaN so not equal to 0
// but when greater than or equal to operator is used, null is converted to 0 

// console.log("2" == 2); // true as 2 is converted to string
// console.log("2" === 2); // false as 2 is not converted to string


// Therefor it is always recommended to use strict equality operator === and !== or just compare btw same types

// Basically data types are defined in 2 categories
// 1. Primitive data types
// 2. Reference data types

// Primitive data types are stored in stack memory
// Reference data types are stored in heap memory

// Primitive data types are immutable
// Reference data types are mutable

// Primitive data types are passed by value
// Reference data types are passed by reference

// Primitive data types are copied by value
// Reference data types are copied by reference

// Primitive data types are stored directly in the location the variable accesses
// Reference data types are stored in heap memory and accessed by reference

// Primitive data types are stored in stack memory
// Reference data types are stored in heap memory

// example of primitive data types
// int, float, string, boolean, null, undefined, symbol,bigint
const sym = Symbol("123");
const anotherSym = Symbol("123");
console.log(sym);
console.log(anotherSym);
console.log(sym === anotherSym); 


// example of reference data types
// object literals, arrays, functions, dates, anything else

// javascript is a dynamically typed language


