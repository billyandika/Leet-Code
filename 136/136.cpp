// Given an array of integers, every element appears twice except for one. 
// Find that single one.

#include<iostream>
using namespace std;

int singleNumber(int A[], int length) {
  int num=0;
  for(int i=0; i<length; i++)
  {
    num ^= A[i];
  }
  return num;
}

int main()
{
  int A[] = {1,3,5,4,4,3,1,5,2};
  cout << singleNumber(A,9) << endl;
  int B[] = {1,2,3,4,3,2,1};
  cout << singleNumber(B,7) << endl;
  int C[] = {1,2,2};
  cout << singleNumber(C,3) << endl;
  return 0;
}
