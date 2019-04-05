#include <iostream>
#include "String.h"

int main()
{
  char p_str[]="hello";
  string mystring(p_str);
  string mystring2(mystring);

  char p_strNull[] = "";
  string nullstring(p_strNull);

  std::cout << mystring.capacity() << std::endl;
  std::cout << mystring.empty() << std::endl;

  std::cout << mystring2.capacity() << std::endl;
  std::cout << mystring2.empty() << std::endl;

  std::cout << nullstring.capacity() << std::endl;
  std::cout << nullstring.empty() << std::endl;
 
  return 0;
}
