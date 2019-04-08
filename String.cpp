#include "String.h"



//Constructors
size_t string::MAX_SIZE = 100;


string::string(const string& mystring)
{
  this->capacity_=mystring.capacity_;
  this->size_=mystring.size_;

  this->data_= new char[mystring.capacity_];
  for(int i; i<(mystring.size_+1); ++i)
  {
    this->data_[i]=mystring.data_[i];
   }
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
  this ->size_ = i;
  this -> capacity_ = this -> size_+1;
}


//Destructors
string::~string()
{
  if(data_!=NULL){
    delete[] data_;
  }
}

//Methods
char* string::c_str() const //Returns a pointer to an array that contains a null-terminated sequence of characters (i.e., a C-string) representing the current value of the string object.
{
  return data_;

}

void string::clear() //Reinitialisation of the String
{

  this->data_[0]='\0';
  this->size_=0;

}

void string::resize(int n) //Cut the String
{
  

}

bool string::empty() const  //Return if the size of the String is 0.
{
  bool res = (size_==0)? true:false;
  return res;
}

void string::reserve(size_t n) //Allocate the memory needed if n > capacity
{

}
void string::print()
{

}

//Getters
size_t string::size() const //Same as length
{
  return size_*1; //Return in bytes
}

size_t string::length() const//Return the size in bytes
{
  return size_*1; //Return in bytes
}

size_t string::max_size() const //Return the maximum potential length the string can reach due to known system or library in bytes
                                    //implementation limitations
{
  return MAX_SIZE;
}

size_t string::capacity() const //Return the current memory allocation for the String
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
  string* res = new string(str);
  return *res;

}

string& string::operator= (char* p_c)
{
  string* res = new string(p_c);
  return *res;
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


