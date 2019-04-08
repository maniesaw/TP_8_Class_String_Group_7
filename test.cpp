#include <iostream>
#include "String.h"

int main()
{
  char p_str[]="hello";
  string mystring(p_str);

  char p_strNull[] = "";
  string nullstring(p_strNull);

  std::cout << (mystring.capacity()==6) << std::endl;
  std::cout << not mystring.empty() << std::endl;

  std::cout << (mystring.length()==5) << std::endl;
  std::cout << (mystring.max_size()==100) << std::endl;



  // check copy constructor
  string mystring2(mystring);
  std::cout << (mystring2.capacity()==mystring.capacity()) << std::endl;
  std::cout << (mystring2.empty()==mystring.empty()) << std::endl;
  std::cout << (mystring2.length()==mystring.length()) << std::endl;

  // check size and length

  std::cout << (mystring2.length()==mystring2.size()) << std::endl;




  std::cout << (nullstring.capacity()== 1) << std::endl;
  std::cout << (nullstring.empty()==1) << std::endl;
  std::cout << (nullstring.size()==0) << std::endl;


  // test of operator =(char* p_c)

  string a = p_str;
  std::cout << (mystring.capacity()==a.capacity()) << std::endl;
  std::cout << (mystring.empty()==a.empty()) << std::endl;
  std::cout << (mystring.length()==a.length()) << std::endl;
 
  string b = p_strNull;
  std::cout << (b.capacity()==1) << std::endl;
  std::cout << (b.empty()==1) << std::endl;

// test of operator =(string& str)

  string d = a;
  std::cout << (mystring.capacity()==d.capacity()) << std::endl;
  std::cout << (mystring.empty()==d.empty()) << std::endl;
  std::cout << (mystring.length()==d.length()) << std::endl;
 
  string e = b;
  std::cout << (e.capacity()==1) << std::endl;
  std::cout << (e.empty()==1) << std::endl;


  return 0;
}
