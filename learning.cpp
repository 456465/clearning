#include <iostream>
#include <vector>
#include <iterator>

int main()
{
  std::vector<int> vec;
  for(int i = 0; i < 10; i++)
      vec.push_back(i);
  for(auto &c : vec)
  {
      std::cout << &c << std::endl;   
  }
  std::cout << vec.size() << std::endl;


  auto vecb = vec.begin(), vecend = vec.end();
  for( auto it = vecb; it != vecend && !isspace(*it); ++it)
  {
    std::cout << "the number is " << *it << std::endl;
  }

  

  int a[10] = {};
  for(int i=0;i<10;i++)
  {
    a[i] = i;
  }

  return 0;
}