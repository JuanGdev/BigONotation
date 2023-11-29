#ifndef BIGONOTATION_HPP 
#define BIGONOTATION_HPP 

#include <vector>

using namespace std;

// ************************************************************
// * O(1) - Constant Time                                     *
// ************************************************************
float triangleArea(float base, float height);

// ************************************************************
// * O(n) - Linear Time                                       *
// ************************************************************
void linear(std::vector<int>& vect);
void printVector(std::vector<int>& vect);

// ************************************************************
// * O(n^2) - Quadratic Time                                  *
// ************************************************************
void quadratic(std::vector<std::vector<int>>& vect);
void bubbleSort(std::vector<int>& vect);

// ************************************************************
// * O(n^3) - Cubic Time                                      *
// ************************************************************
void cubic(std::vector<std::vector<std::vector<int>>>& vect);

// ************************************************************
// * O(log n) - Logarithmic Time                              *
// ************************************************************
void logFunction(int n);























#endif
