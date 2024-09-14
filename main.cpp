#include <iostream>

#define LOG(x) std::cout << x << std::endl;

int main()
{
    // Pointers are memory addresses, types are used to presume what data is at the address
    void* ptr = 0; // A void pointer is a typeless memory adress, 0 isn't a valid memory address
    // void* ptr = NULL; // Same thing as above, NULL is a hash define for 0
    // void* ptr = nullptr; // Introduced in c++ v.11, this is a null pointer and does the same as the other two above
    
    
    std::cin.get();
}
