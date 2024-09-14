#include <iostream>

#define LOG(x) std::cout << x << std::endl;

int main()
{
    char* buffer = new char[8]; // allocating 8 bytes of memory
    memset(buffer, 0, 8); // sets the memory at the buffer address to the value 0 for 8 bytes.
    
    delete[] buffer; // deletes the manual allocation
    
    std::cin.get();
}
