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

  std::cout << mystring.length() << std::endl;
  std::cout << mystring.max_size() << std::endl;



  // check copy constructor
  string mystring2(mystring);
  std::cout << (mystring2.capacity()==mystring.capacity()) << std::endl;
  std::cout << (mystring2.empty()==mystring.empty()) << std::endl;
  std::cout << (mystring2.length()==mystring.length()) << std::endl;

  // check size and length

  std::cout << (mystring2.length()==mystring2.size()) << std::endl;




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
