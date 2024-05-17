#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> arr = {1, 2, 3, 4};
  vector<int>::iterator i;
  for (i = arr.begin(); i != arr.end(); i++)
    cout << *i << endl;

  return 0;
}
