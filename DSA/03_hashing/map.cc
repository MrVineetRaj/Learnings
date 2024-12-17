#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Traditional Approach to count frequency of characters
    vector<int> v(26, 0);
    string word;
    cin >> word;

    for (int i = 0; i < word.size(); i++)
    {
        v[word[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << (char)(i + 'a') << " " << v[i] << endl;
    }

    cout << endl
         << "From map" << endl;

    // above approach is not optimal as it is using 26 size array and when counting freq of numbers it may go upto size of 10^9 which is not feasible as in main block we can go upto 10^6 and globally we can go upto 10^7 simillarly in case of boolean we can go upto 10^7 in main block and 10^8 globally 

    // so we use hashing to count frequency of characters optimally that takes O(n) time complexity and O(n) space complexity in worst case where n is the size of string

    // for hashing we can use it in two ways
    // 1. unordered_map
    // 2. map

    // Using map to count frequency of characters optimally
    map<char, int> char_freq;
    for (int i = 0; i < word.size(); i++)
    {
        char_freq[word[i]]++;
    }

    for (auto it : char_freq)
    {
        cout << it.first << " " << it.second << endl;
    }
}


/*
Unordered_map vs Map

1. Unordered_map
    - It is implemented using hashing
    - It is faster than map
    - It takes O(1) time complexity for insertion, deletion and searching
    - It is not ordered
    - It is used when we don't need to maintain order of elements
    - It is used when we need to perform operations like insertion, deletion and searching in O(1) time complexity
    - It is used when we need to perform operations like finding frequency of elements, finding if element is present or not, etc.
    - It is used when we need to perform operations like finding maximum and minimum element, etc.
    - It is used when we need to perform operations like finding elements in range, etc.

2. Map
    - It is implemented using self balancing binary search tree
    - It is slower than unordered_map
    - It takes O(logn) time complexity for insertion, deletion and searching
    - It is ordered
    - It is used when we need to maintain order of elements
    - It is used when we need to perform operations like insertion, deletion and searching in O(logn) time complexity
    - It is used when we need to perform operations like finding frequency of elements, finding if element is present or not, etc.
    - It is used when we need to perform operations like finding maximum and minimum element, etc.
    - It is used when we need to perform operations like finding elements in range, etc.
*/