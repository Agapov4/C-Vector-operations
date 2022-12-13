## **Python-like C++ std::vector operations**

### **Print of std::vector:**

```plaintext
std::vector<int> a = {33,44,55,66,77,88,99,111};
printVector(a);
```

Out:

> _{33, 44, 55, 66, 77, 88, 99, 111}_

### **Slicing of C++ std::vector.**

Works similar to slicing in Python.

```plaintext
std::vector<int> b = slice(a, 2, -3);
printVector(b);
```

Out:

> _{55, 66, 77}_

### **Concatenation of C++ std::vector.**

Works similar to numpy.concatenate().

```plaintext
std::vector<int> n, m, k, r;
n = {1, 2, 3};
m = {40, 50, 60};
k = {700, 800, 900};

r = concatenate(n, m, k);
printVector(r);
```

Out:

> _{1, 2, 3, 40, 50, 60, 700, 800, 900}_

## **Example:**

```plaintext
#include <vector>
#include "vector_operations.h"

int main() {
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
}
```
