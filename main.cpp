#include <iostream>

#define LOG(x) std::cout << x << std::endl;

int main()
{
    char* buffer = new char[8]; // allocating 8 bytes of memory
    memset(buffer, 0, 8); // sets the memory at the buffer address to the value 0 for 8 bytes.
    
    char** ptr = &buffer; // this is a pointer to a pointer
    
    std::cin.get();
}
