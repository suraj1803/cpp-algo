#include <iostream>
using namespace std;

int csb(int n) {
  int count = 0;
  while (n > 0) {
    if (n & 1)
      count++;
    n >>= 1;
  }
  
  return count;
}

// optimized
// brian-kerringam's Algorithm
// runs O(d) where d is no of set bits
int csbOp(int n) {
  int res = 0;
  while (n > 0) {
    n = (n & (n - 1));
    res++;
  }
  return res;
}

int main()
{
  int n;
  cin >> n;
  cout << csbOp(n) << endl;
 
  return 0;
}

