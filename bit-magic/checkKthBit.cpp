#include <iostream>
using namespace std;

bool isKthBitSet(int num, int k) {
  int x = 1 << ( k - 1);

  if (num & x) 
    return true;

  return false;
}

int main()
{
  int x, k;
  cin >> x >> k;
  cout << isKthBitSet(x, k) << endl;

  return 0;
}
