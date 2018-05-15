#include <iostream>

class World
{
    World() { std::cout << "Hello! \n"; }
    ~World(){ std::cout << "Good bye \n"; }
};

World TheWorld;

void main() {}
