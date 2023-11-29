#include "bigOnotation.hpp"
#include <iostream>
using namespace std;

// ************************************************************
// * O(1) - Constant Time                                     *
// ************************************************************
float triangleArea(float base, float height)
{
  return (base * height) / 2;
}

// ************************************************************
// * O(n) - Linear Time                                       *
// ************************************************************
void linear(std::vector<int>& vect)
{
  //Write the linear algorithm using a vector
  //Return the number of iterations
  int iterations = 0;
  for(int i = 0; i < vect.size(); i+=1)
  {
   cout << iterations ++ << " ";
  }
}

void printVector(std::vector<int>& vect)
{
  for(int i = 0; i < vect.size(); i+=1)
  {
    cout << vect[i] << " ";
  }
  cout << endl;
}

// ************************************************************
// * O(n^2) - Quadratic Time                                  *
// ************************************************************
void quadratic(std::vector<std::vector<int>>& vect)
{
  int iterations = 0;
  for(int i = 0; i < vect.size(); i+=1)
  {
    for(int j = 0; j < vect[i].size(); j+=1)
    {
      cout << iterations ++ << " ";
    }
  }
}

void bubbleSort(std::vector<int>& vect)
{
  //Write the bubbleSort algorithm using a vector
  //Use the printVector function to print out the vector after each pass
  int temp;
  for(int i = 0; i < vect.size(); i+=1)
  {
    for(int j = 0; j < vect.size() - 1; j+=1)
    {
      if(vect[j] > vect[j+1])
      {
        temp = vect[j];
        vect[j] = vect[j+1];
        vect[j+1] = temp;
      }
    }
  }
}

// ************************************************************
// * O(n^3) - Cubic Time                                      *
// ************************************************************
void cubic(std::vector<std::vector<std::vector<int>>>& vect)
{
  int iterations = 0;
  for(int i = 0; i < vect.size(); i+=1)
  {
    for(int j = 0; j < vect[i].size(); j+=1)
    {
      for(int k = 0; k < vect[i][j].size(); k+=1)
      {
        cout << iterations ++ << " ";
      }
    }
  }
}

// ************************************************************
// * O(log n) - Logarithmic Time                              *
// ************************************************************

void logFunction(int n)
{
  if(n == 0) cout << "Finished" << endl;
  else
  {
    cout << n << " ";
    logFunction(n/2);
  }
}
