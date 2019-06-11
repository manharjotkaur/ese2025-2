//VECTOR C++ PROGRAM//

#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> numvector (11);   // 10 zero-initialized ints

  // assign some values:
  for (unsigned i=0; i<numvector.size(); i++)
    numvector.at(i)=i;
    
    std::cout << "number vector contains:";
    for (unsigned i=0; i<numvector.size(); i++)
    std::cout << ' ' << numvector.at(i);
    std::cout << '\n';

  return 0;
}
