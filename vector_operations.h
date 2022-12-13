#include <vector>
#include <iostream>
#include <limits.h>


template<typename Type>
std::vector<Type> slice(std::vector<Type> v, int start, int end=INT_MAX) {
  int oldlen = v.size();
  int newlen;
  
  if (start <= -oldlen)
  	start = 0;
	else if (start < 0)
		start = oldlen + start;

  if (end <= -oldlen)
  	end = 0;
	else if (end < 0)
	  end = oldlen + end;
	else if (end >= oldlen)
		end = oldlen;

	if (start < end)
		newlen = end - start;
  else
  	newlen = 0;

  std::vector<Type> nv(newlen);

  for (unsigned int i=0; i<newlen; ++i)
    nv[i] = v[start + i];
    
  return nv;
}


template<typename Type>
std::vector<Type> concatenate(std::vector<Type> v1, std::vector<Type> v2) {
	std::vector<Type> v3;
	v3.insert(v3.end(), v1.begin(), v1.end());
	v3.insert(v3.end(), v2.begin(), v2.end());
	return v3;
}

template<typename Type, typename... Type2>
std::vector<Type> concatenate(std::vector<Type> v, std::vector<Type2>... vs) {
	std::vector<Type> vnext = concatenate(vs...);
	v.insert(v.end(), vnext.begin(), vnext.end());
	return v;
}


void printVector(std::vector<unsigned char> v) {
	std::cout << "{";
	for (int n = 0; n < v.size() - 1; ++n) {
		std::cout << (int)v[n] << ", ";
	}
	std::cout << v[v.size()-1] << "}\n";
}

template<typename Type>
void printVector(std::vector<Type> v) {
	std::cout << "{";
	for (int n = 0; n < v.size(); ++n) {
		std::cout << v[n];
		if (n != v.size() - 1)
			std::cout << ", ";
	}
	std::cout << "}\n";
}


