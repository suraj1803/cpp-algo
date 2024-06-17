#include <iostream>
using namespace std;

int countSetBits(int num) {
  int count = 0;
  while (num > 0) {
    if (num & 1)
      count++;
    num >>= 1;
  }

  return count;
}

int countSetBitsOp(int num) {
  int count = 0;
  while (num > 0) {
    num = num & (num - 1);
    count++;
  }

  return count;
}

int main()
{
  int n;
  cin >> n;
  cout << countSetBitsOp(n) << endl;
  return 0;
}
