# Python-like C++ std::vector operations

## Quick print of std::vector:
`std::vector<int> a = {33,44,55,66,77,88,99,111};`
`printVector(a);`

Out:
> {33, 44, 55, 66, 77, 88, 99, 111}

## Operation for slicing of C++ std::vector.
Works similar to slicing in Python.

`std::vector<int> b = slice(a, 2, -3);`
`printVector(b);`

Out:
> {55, 66, 77}

## Operation for concatenation of C++ std::vector. 
Works similar to numpy.concatenate().

std::vector<int> n, m, k, r;
n = {1, 2, 3};
m = {40, 50, 60};
k = {700, 800, 900};

r = concatenate(n, m, k);
printVector(r);

Out:
> {1, 2, 3, 40, 50, 60, 700, 800, 900}


# Example:
`#include <vector>`
`#include "vector_operations.h"`

`int main() {
	std::vector<int> a = {33,44,55,66,77,88,99,111};
	printVector(a);
	
	std::vector<int> b = slice(a, 2, -3);
	printVector(b);
	
	std::vector<int> n, m, k, r;
	n = {1, 2, 3};
	m = {40, 50, 60};
	k = {700, 800, 900};
	
	r = concatenate(n, m, k);
	printVector(r);
}`
