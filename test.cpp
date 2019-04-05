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


  // test of operator =(char* p_c)

  string a = p_str;
  std::cout << a.capacity() << std::endl;
  std::cout << a.empty() << std::endl;
 
  string b = p_strNull;
  std::cout << b.capacity() << std::endl;
  std::cout << b.empty() << std::endl;
  return 0;
}
