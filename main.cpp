#include <iostream>

#define LOG(x) std::cout << x << std::endl;

int main()
{
    int var = 8;
    
    // Pointers are memory addresses, types are used to presume what data is at the address
    void* ptr = &var; // & is a reference to the integer 'var' memory address. 
    
    std::cin.get();
}
