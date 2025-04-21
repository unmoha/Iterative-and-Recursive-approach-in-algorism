# Iterative-and-Recursive-approach-in-algorismBinary Search: Iterative vs Recursive (C++)
This project demonstrates the implementation and comparison of iterative and recursive binary search algorithms in C++. It allows searching for multiple keys in a sorted array and displays the results using both methods.

 Files Included
binary_search.cpp – Contains:

Iterative binary search function

Recursive binary search function

A main() function that:

Defines a sorted array

Searches for multiple keys using both methods

Prints the results

 Features
Efficient searching in sorted arrays

Iterative and recursive implementations side by side

Clean and readable output for multiple test cases

 Binary Search Overview
Binary Search is an efficient algorithm with O(log n) time complexity used to find the position of a target value within a sorted array.
It repeatedly divides the search interval in half:

If the value is found: return the index.

If the value is less than the midpoint: search the left half.

If the value is greater: search the right half.
 Example Output
text


Array: 2 5 8 12 16 23 38 56 72 91 

Searching for 23:
  Iterative: Found at index 5
  Recursive: Found at index 5

Searching for 5:
  Iterative: Found at index 1
  Recursive: Found at index 1

Searching for 100:
  Iterative: Not found
  Recursive: Not found
 How to Run
Compile the program:

bash


g++ -o binary_search binary_search.cpp
Run the executable:

bash
./binary_search
🛠 Customization
Modify the arr vector to use your own sorted dataset.

Add more keys in the keys vector to test additional values.

Insert timing or step-counting logic if you want to analyze performance.

 Concepts Covered
Recursion

Loop control and logic

Function overloading and declarations

Standard Template Library (std::vector)

I/O handling in C++

 Author
Made with ♥ as a learning exercise in C++ algorithms and search techniques.