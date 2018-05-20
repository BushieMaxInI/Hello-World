#include <iostream>

class Matter 
{
public:
    Matter(int id) : _identifier(id)
    {
        std::cout << " Matter for " << _identifier << " created \n";
    }
    ~Matter()
    {
        std::cout << " Matter in " << _identifier << " destroyed \n";
    }
private:
    const int _identifier;
};

class World
{
    public:
    World(int id) : _identifier(id), _matter(_identifier) // initializing embeddings
    { 
        std::cout << "Hello! from World " << _identifier << " .\n"; 
    }

    ~World()
    { 
        std::cout << "Good bye from World "<< _identifier << " \n"; 
    }

    private:
    const int _identifier;
    const Matter _matter; // Embedded objets of type Matter
};

World TheWorld(1);

int main(int argc, char const *argv[])
{
    World aWorld(2);
//
//        for(int i = 3; i < 6; i++)
//   {
//      
//       World myWorld(i);
//    }
//
//   World oneMoreWorld(6);    
//      
//     
//
    std::cout << "Hello from main function \n";

    return 0;
}
