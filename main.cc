#include <iostream>

class World
{
    public:
    World(int i) 
    { 
        std::cout << "Hello! from " << i << " \n"; 
    }

    ~World()
    { 
        std::cout << "Good bye  \n"; 
    }
};

World TheWorld(1);

int main(int argc, char const *argv[])
{
    World aWorld(2);
    /* code */
    std::cout << "Hello from main function \n";

    return 0;
}

