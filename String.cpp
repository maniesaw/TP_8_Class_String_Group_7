#include "String.h"



//Constructors
size_t string::MAX_SIZE = 100;


string::string(const string& mystring)
{
  this->capacity_=mystring.capacity_;
  this->size_=mystring.size_;

  this->data_= new char(*mystring.data_);

}

string::string(char* p_str)
{
  int i=0;
  while (p_str[i] != '\0'){
    ++i;
  }
  char *tab = new char[i+1];
  *tab = *p_str+ '\0';
  this -> data_ = tab;
  this ->size_ = i+1;
  this -> capacity_ = this -> size_;
}


//Destructors
string::~string()
{
  if(data_!=NULL){
    delete[] data_;
  }
}

//Methods
char* string::c_str() //Returns a pointer to an array that contains a null-terminated sequence of characters (i.e., a C-string) representing the current value of the string object.
{
  return (this ->data_);

}

void string::clear() //Reinitialisation of the String
{

}

void string::resize(int n) //Cut the String
{

}

bool string::empty() const  //Return if the size of the String is 0.
{
  bool res = (size_!=0)? true:false;
  return res;
}

void string::reserve(size_t n) //Allocate the memory needed if n > capacity
{

}
void string::print()
{

}

//Getters
int string::size() //Return size
{

}

size_t string::length() //Return the size in bytes
{

}

size_t string::max_size() //Return the maximum potential length the string can reach due to known system or library in bytes
                                    //implementation limitations
{

}

size_t string::capacity()//Return the current memory allocation for the String
{
  return capacity_;
}

//Operators
string& string::operator= (char c)
{
  /**
  char* pc= new char(c);
  string* thenewstring(*pc);
  this -> ~string();
  this -> string(thenewstring);
  return *this;
  **/
}

string& string::operator= (string& str)
{

}

string& string::operator= (char* p_c)
{

}

string operator+ (const char*   p_lhs, const string& rhs)
{

}

string operator+ (char          lhs, const string& rhs)
{

}

string operator+ (const string& lhs, const string& rhs)
{

}


