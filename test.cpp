#include <iostream>
#include "String.h"

int main()
{
  char p_str[]="hello";
  string mystring(p_str);
  std::cout << mystring.capacity() << std::endl;
  return 0;
}
