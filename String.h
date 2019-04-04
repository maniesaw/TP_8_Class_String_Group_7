#ifndef STRING_H
#define STRING_H

#include <iostream>

class string
{
  protected:
    size_t size_;
    static  size_t MAX_SIZE;
    char* data;
    size_t capacity_;
    static  size_t char_size_;//1
        
  public:
    //Constructors
    string(const string&);
    string(char* p_str);
    string()=delete; 
    
    //Destructors
    ~string();
 
    //Methods
    char* c_str(); //Convert to char array
    void clear(); //Reinitialisation of the String
    void resize(int n); //Cut the String
    bool empty() const ; //Return if the size of the String is 0.
    void reserve(size_t n); //Allocate the memory needed if n > capacity
    void print();

    //Getters
    int size(); //Return size
    size_t length(); //Return the size in bytes
    size_t max_size(); //Return the maximum potential length the string can reach due to known system or library in bytes
					//implementation limitations
    size_t capacity();//Return the current memory allocation for the String   

    //Operators
    string& operator= (char c);
    string& operator= (string& str);
    string& operator= (char* p_c);

  private:
  
};
#endif //STRING_H

//Operators

string operator+ (const char*   p_lhs, const string& rhs);
string operator+ (char          lhs, const string& rhs);
string operator+ (const string& lhs, const string& rhs);


