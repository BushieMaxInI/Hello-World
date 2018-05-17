#include <iostream>

class World
{
    public:
    World(int id) : _identifier(id)
    { 
        std::cout << "Hello! from " << _identifier << " \n"; 
    }

    ~World()
    { 
        std::cout << "Good bye "<< _identifier << " \n"; 
    }

    private:
    const int _identifier;
};

World TheWorld(1);

int main(int argc, char const *argv[])
{
    World aWorld(2);
    /* code */
    std::cout << "Hello from main function \n";

    return 0;
}

