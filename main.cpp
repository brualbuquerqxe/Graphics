#include "print.hpp"
#include <print>

int main()
{
    print_hello();
    std::print("Hello, {}{}!\n",
               "COMP", 3812);
    return 0;
}
