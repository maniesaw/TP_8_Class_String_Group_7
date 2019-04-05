#include <iostream>
#include "String.h"

int main()
{
  char p_str[]="hello";
  string mystring(p_str);
  std::cout << mystring.capacity() << std::endl;
  std::cout << mystring.empty() << std::endl;
  std::cout << mystring.length() << std::endl;
  std::cout << mystring.max_size() << std::endl;



  // check copy constructor
  string mystring2(mystring);
  std::cout << (mystring2.capacity()==mystring.capacity()) << std::endl;
  std::cout << (mystring2.empty()==mystring.empty()) << std::endl;
  std::cout << (mystring2.length()==mystring.length()) << std::endl;

  // check size and length

  std::cout << (mystring2.length()==mystring2.size()) << std::endl;





  return 0;
}
