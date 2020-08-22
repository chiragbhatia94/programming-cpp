#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

int main(int argc, char **argv)
{
    std::cout << "Hello World" << std::endl;

    if (argc != 1)
    {
        // When we have received some argument
        std::cout << "You entered " << argc << "arguments\n";
        for (int i = 0; i < argc; i++)
        {
            std::cout << argv[i] << std::endl;
        }
    }
    else
    {
        std::cout << "No arguments found";
    }

    return 0;
}