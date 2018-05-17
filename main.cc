#include <iostream>

class World
{
    public:
    World() { std::cout << "Hello! \n"; }
    ~World(){ std::cout << "Good bye \n"; }
};

World TheWorld;

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}

