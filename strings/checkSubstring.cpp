#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
  unordered_map<string, int> um;
  um["suraj"] = 1;
  um["sujoy"] = 2;
  
  for (auto i : um) {
    cout << i.first << i.second << endl;
  }
  return 0;
}
