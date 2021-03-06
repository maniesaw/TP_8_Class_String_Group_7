#include <iostream>
#include "String.h"

int main()
{
  char p_str[]="hello";
  string mystring(p_str);

  char p_strNull[] = "";
  string nullstring(p_strNull);

  std::cout << (mystring.capacity()==5) << std::endl;
  std::cout << not mystring.empty() << std::endl;

  std::cout << (mystring.length()==5) << std::endl;
  std::cout << (mystring.max_size()==100) << std::endl;
  for(int i=0; i<6; ++i)
  {
    std::cout << (mystring.c_str()[i]==p_str[i]) << std::endl;
  }



  // check copy constructor
  string mystring2(mystring);
  std::cout << (mystring2.capacity()==mystring.capacity()) << std::endl;
  std::cout << (mystring2.empty()==mystring.empty()) << std::endl;
  std::cout << (mystring2.length()==mystring.length()) << std::endl;
  for(int i=0; i<6; ++i)
  {
    std::cout << (mystring2.c_str()[i]==p_str[i]) << std::endl;
  }


  // check size and length

  std::cout << (mystring2.length()==mystring2.size()) << std::endl;




  std::cout << (nullstring.capacity()== 0) << std::endl;
  std::cout << (nullstring.empty()==1) << std::endl;
  std::cout << (nullstring.size()==0) << std::endl;


  // test of operator =(char* p_c)


  string a(mystring);

  char paxcee_c[] = "afez";

  a  = paxcee_c;
  //a = p_str;

  std::cout << (a.capacity()==4) << std::endl;
  std::cout << (not(a.empty())) << std::endl;
  std::cout << (a.length()==4) << std::endl;

  for(int i=0; i<5; ++i)
  {
    std::cout << (a.c_str()[i]==paxcee_c[i]) << std::endl;
  }


  string b (mystring);
  b= p_strNull;
  std::cout << (b.capacity()==0) << std::endl;
  std::cout << (b.empty()==1) << std::endl;


  // test of operator =(string& str)

  a = mystring;
  std::cout << (mystring.capacity()==a.capacity()) << std::endl;
  std::cout << (mystring.empty()==a.empty()) << std::endl;
  std::cout << (mystring.length()==a.length()) << std::endl;

    for(int i=0; i<5; ++i)
  {
    std::cout << (a.c_str()[i]==mystring.c_str()[i]) << std::endl;
  }

  a = nullstring;
  std::cout << (a.capacity()==0) << std::endl;
  std::cout << (a.empty()==1) << std::endl;


  // "test of operator =(char c)"

  char c ='c';
  string myassignstring("hello");
  myassignstring = c;
  std::cout << (myassignstring.capacity()==5) << std::endl;
  std::cout << (myassignstring.length()==1) << std::endl;
  std::cout << (myassignstring.c_str()[0]==c) << std::endl;
  std::cout << (myassignstring.c_str()[1]=='\0') << std::endl;

  myassignstring = 'a';
  std::cout << (myassignstring.capacity()==5) << std::endl;
  std::cout << (myassignstring.length()==1) << std::endl;
  std::cout << (myassignstring.c_str()[0]=='a') << std::endl;
  std::cout << (myassignstring.c_str()[1]=='\0') << std::endl;


  for(int i=0; i<6; ++i)
  {
    std::cout << (mystring2.c_str()[i]==p_str[i]) << std::endl;
  }

  // clear test
  char p_strclear[]="clear";
  string myclearingstring(p_strclear);
  myclearingstring.clear();
  std::cout <<(myclearingstring.size()==0) << std::endl;
  std::cout <<(myclearingstring.capacity()==5) << std::endl;
  std::cout <<(myclearingstring.c_str()[0]=='\0') << std::endl;



  string myclearingstring2(p_strNull);
  myclearingstring2.clear();
  std::cout <<(myclearingstring2.size()==0) << std::endl;
  std::cout <<(myclearingstring2.capacity()==0) << std::endl;
  std::cout <<(myclearingstring2.c_str()[0]=='\0') << std::endl;



  // reserve test
  mystring.reserve(10);

  std::cout << (mystring.capacity()==10) << std::endl;
  std::cout << not mystring.empty() << std::endl;


  std::cout << (mystring.length()==5) << std::endl;
  std::cout << (mystring.max_size()==100) << std::endl;


  for(int i=0; i<6; ++i)
  {
    std::cout << (mystring.c_str()[i]==p_str[i]) << std::endl;
  }

  mystring2.reserve(3);
  std::cout << (mystring2.capacity()==5) << std::endl;
  std::cout << (mystring2.empty()==mystring.empty()) << std::endl;
  std::cout << (mystring2.length()==mystring.length()) << std::endl;
  for(int i=0; i<6; ++i)
  {
    std::cout << (mystring2.c_str()[i]==p_str[i]) << std::endl;
  }


  // test of resize
  a.resize(10,'+');
  std::cout << (a.size()==10) << std::endl;
  std::cout << (a.capacity()==10) << std::endl;


  // test operator+ (string)
  string mystring3("hello");
  std::cout << (mystring3.capacity()==5) << std::endl;
  std::cout << not mystring3.empty() << std::endl;

  std::cout << (mystring3.length()==5) << std::endl;
  std::cout << (mystring3.max_size()==100) << std::endl;

  string mystringAdd = mystring2 + mystring3;

  std::cout << (mystringAdd.capacity()==mystring2.capacity()+mystring3.capacity()) << std::endl;
  std::cout << (not mystringAdd.empty()) << std::endl;
  std::cout << (mystringAdd.length()==mystring2.length()+mystring3.length()) << std::endl;


  string mystringAdd2(mystring2+mystring3);
  std::cout << (mystringAdd2.capacity()==mystring2.capacity()+mystring3.capacity()) << std::endl;
  std::cout << (not mystringAdd2.empty()) << std::endl;
  std::cout << (mystringAdd2.length()==mystring2.length()+mystring3.length()) << std::endl;


  // test operator char + string
  string mystringAdd3 = 'u' + mystring3;
  std::cout << (mystringAdd3.capacity()==1+mystring3.capacity()) << std::endl;

  string mystringAdd4= 'L' + mystringAdd3;
  std::cout << (mystringAdd4.capacity()==1+mystringAdd3.capacity()) << std::endl;


  // test operator char* + string
  char addtab[]= "hello";

  string myaddingstring("polo");
  string mystringAdd5 = addtab + myaddingstring;
  std::cout << (mystringAdd5.capacity()==5+myaddingstring.capacity()) << std::endl;
  for(int i=0; i<5; ++i)
  {
    std::cout << (mystringAdd5.c_str()[i]==addtab[i]) << std::endl;
  }
  for(int i=0; i<5; ++i)
  {
    std::cout << (mystringAdd5.c_str()[i+5]==myaddingstring.c_str()[i]) << std::endl;
  }

/**
  char bigtab[]= "hello my name is remi and I am really proud to talk with you about this because it is really a huge honor to have the opportunity to talk about it in public !";


  string mystringAdd6= bigtab + myaddingstring;
**/



  return 0;
}
