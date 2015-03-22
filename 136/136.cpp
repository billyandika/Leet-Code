#include<iostream>
using namespace std;

int main() {
  int A[] = {1,3,5,4,4,3,1,5,2};
  int num=0;
  for(int i=0; i<9; i++)
  {
    num ^= A[i];
  }
  cout << num << endl;
  return 0;
}
