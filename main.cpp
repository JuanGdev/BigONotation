#include "bigOnotation.hpp"
#include <vector>
#include <iostream>
#include <GLES2/gl2.h>
#include <EGL/egl.h>
#include <GLFW/glfw3.h>

int main() {
  std::vector<std::vector<std::vector<int>>> vector2D;
  std::vector<int> v = {15, 2, 30, 8, 0, 1, 9, 7, 6, 3, 4};

  std::cout << "Original vector: " << std::endl;
  printVector(v);

  std::cout << "Constant time O(1): " << std::endl;
  cout << triangleArea(5, 10);
  std::endl(std::cout);

  std::cout << "Linear time O(n): " << std::endl;
  linear(v);
  printVector(v);
  std::endl(std::cout);

  std::cout << "Bubble sort O(n^2): " << std::endl;
  bubbleSort(v);
  printVector(v);

  std::cout <<"Cubic time O(n^3): " << std::endl;
  cubic(vector2D);

  std::cout << "Logarithmic time O(log n): " << std::endl;
  logFunction(8);

  return 0;
}
