# Hashing Basics

## What is Hashing?
Hashing is the process of converting an input (or 'key') into a fixed-size string of bytes, typically for the purpose of indexing and retrieving items in a database efficiently.

## Hash Function
A hash function is a function that takes an input and returns a fixed-size string of bytes. The output is typically a 'hash code' or 'hash value'.

### Properties of a Good Hash Function
- **Deterministic**: The same input should always produce the same output.
- **Fast Computation**: The hash function should be able to return the hash value quickly.
- **Uniform Distribution**: The hash values should be uniformly distributed to avoid clustering.
- **Minimize Collisions**: Different inputs should produce different hash values as much as possible.

## Hash Table
A hash table is a data structure that implements an associative array, a structure that can map keys to values. It uses a hash function to compute an index into an array of buckets or slots, from which the desired value can be found.

### Operations
- **Insertion**: Add a key-value pair to the hash table.
- **Deletion**: Remove a key-value pair from the hash table.
- **Search**: Find the value associated with a given key.

### Handling Collisions
- **Chaining**: Each bucket contains a linked list of elements that hash to the same index.
- **Open Addressing**: All elements are stored in the hash table itself. When a collision occurs, the algorithm searches for the next empty slot.

## Applications of Hashing
- **Databases**: Efficiently retrieve data using keys.
- **Caches**: Quickly access cached data.
- **Cryptography**: Securely hash passwords and other sensitive data.
- **Data Structures**: Implementing sets, maps, and dictionaries.

## Conclusion
Hashing is a fundamental concept in computer science that enables efficient data retrieval and storage. Understanding the basics of hashing, hash functions, and hash tables is essential for designing efficient algorithms and data structures.
