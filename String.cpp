#include "String.h"


//Constructors
size_t string::MAX_SIZE = 100;


string::string(const string& mystring) //Create a string with a char by copy.
{
  this->capacity_=mystring.capacity_;
  this->size_=mystring.size_;
  this->data_ = new char[mystring.capacity_+1];

  for(size_t i=0; i<(mystring.size_+1); ++i)
  {
    this->data_[i]=mystring.data_[i];
   }

}

string::string(const char* p_str) //Create a string with as parameters a char pointer.
{
  size_t i=0;
  while (p_str[i] != '\0'){
    ++i;
  }
  char *tab = new char[i+1];
  for (size_t cond=0; cond<i+1; ++cond){
    tab[cond] = p_str[cond];
  }
  tab[i+1]='\0';
  this -> data_=tab;
  this ->size_ = i;
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
char* string::c_str() const //Returns a pointer to an array that contains a null-terminated sequence of characters (i.e., a C-string) representing the current value of the string object.
{
  return data_;

}

void string::clear() //Reinitialisation of the String
{
  this->data_[0]='\0';
  this->size_=0;
}

void string::resize(size_t n, char c) //Cut the String
{
  if (n< size_){
    char *a = new char[n];
    for (size_t cond=0; cond<n+1; ++cond){
      a[cond] = data_[cond];
    }
    delete[] data_;
    a[n+1] = '\0';
    data_ = a;
    size_ = n;
  }
  else if (n > size_){
    char *a = new char[n];
    for (size_t bouc =0; bouc<size_; ++bouc){
      a[bouc] = data_[bouc];
    }
    for (size_t bouc =size_; bouc<n; ++bouc){
      a[bouc] = c;
    }
    delete[] data_;
    a[n+1] = '\0';
    data_ = a;
    size_ = n;
    capacity_ = n;
  }

}

bool string::empty() const  //Return if the size of the String is 0.
{
  bool res = (size_==0)? true:false;
  return res;
}

void string::reserve(size_t n) //Allocate the memory needed if n > capacity
{
  if(n>capacity_){
    capacity_ = n;

    char* tab = new char[n];
    for (size_t i=0; i<capacity_; ++i) {
		  tab[i]=data_[i];
	  }
    capacity_ = n;
	  delete[] data_;
    this ->data_ = tab;
  }
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

size_t string::max_size() const //Return the maximum potential length the string can reach due to known system or library in bytes implementation limitations
{
  return MAX_SIZE;
}

size_t string::capacity() const //Return the current memory allocation for the String
{
  return capacity_;
}


//Operators =
string& string::operator= (char c) //Assignement of a char
{
  this -> data_[0] = c;
  this -> data_[1] = '\0';
  this -> size_ = 1;
  return *this;
}


string& string::operator= (const string& str) //Assignement of a string by reference


{
  int i=0;

  while (str.data_[i] != '\0'){
    data_[i] =str.data_[i] ;
    ++i;
  }
  capacity_ = i;
  size_ = i;

  return *this;
}

string& string::operator= (const char* p_c) // Assignement of a char (by pointer)

{
  int i=0;

  while (p_c[i] != '\0'){
    data_[i] = p_c[i];
    ++i;
  }
  capacity_ = i;
  size_ = i;

  return *this;
}


// Operators +
string operator+ (const char*   p_lhs, const string& rhs) //Add of a char (by pointer ) and a string
{
  size_t length_lhs=0;
  while (p_lhs[length_lhs] != '\0')
  {
      ++length_lhs;
  }
  size_t new_length=length_lhs+rhs.size();
  if(new_length<rhs.max_size())
  {
    char tab[new_length+1];
    for (size_t i=0; i<length_lhs; ++i)
    {
      tab[i] =p_lhs[i];
    }
    int j = 0;
    for (size_t i=length_lhs; i<new_length+1; ++i)
    {
      tab[i] = rhs.c_str()[j];
      ++j;
    }
    return string(tab) ;
  }
  else
  {
      std::cout << "Error : size of the new string is upper than MAX_SIZE" << std::endl;
      return 0;
  }

}




string operator+ (char lhs, const string& rhs) //Add of a char
{
  if(1+rhs.size()<rhs.max_size()){
    char tab[1+rhs.size()];
    size_t i;
    int j=0;
    for (i=0; i<=rhs.size(); ++i){
      if(i<rhs.size()){
        tab[i] =rhs.c_str()[i];
      }else{
        tab[i] = lhs;
        ++j;
      }
    }
    return string(tab);
  } else {
    std::cout << "Error : size of the new string is upper than MAX_SIZE" << std::endl;
    return 0;
  }
}


string operator+ (const string& lhs, const string& rhs) //Add of two strings
{
  if(lhs.size()+rhs.size()<lhs.max_size()){
    char tab[lhs.size()+rhs.size()];
    size_t i;
    int j=0;
    for (i=0; i<=lhs.size()+rhs.size(); ++i){
      if(i<lhs.size()){
        tab[i] = lhs.c_str()[i];
      }else{
        tab[i] = rhs.c_str()[j];
        ++j;
      }
    }
    return string(tab);
  } else {
    std::cout << "Error : size of the new string is upper than MAX_SIZE" << std::endl;
    return 0;
  }
}


