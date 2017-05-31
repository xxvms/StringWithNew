#include <iostream>
#include <cstring>          // for strcpy()

class String            // User defined string type
{
    char* str;          // pointer to string
public:
    String(char* string_)                    //constructor one argument
    {
        int length = strlen(string_);       // length of string argument
        str = new char[length+1];           // get memory
        strcpy(str, string_);                // copy argument to it
    }
    ~String()                               // destructor
    {
        std::cout << "Deleting str.\n";
        delete[]str;                        // release memory
    }
    void display()                          // display String
    {
        std::cout << str << std::endl;
    }
};

int main()
{
    String s1 = (String) "Who knows nothing doubts nothing.";    // uses 1 argument constructor
    std::cout << "s1 = ";                                //  display String
    s1.display();
    
    system("pause");
    return 0;
}