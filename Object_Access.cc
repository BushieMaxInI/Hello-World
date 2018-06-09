#include <iostream>

class InputNumber
{
    public:
    InputNumber()
    {
        std::cout << "Enter a number: ";
        std::cin >> _num;
    }

    int GetNum() const { return _num;}

    void AddInput()
    {
        InputNumber aNum;

        _num = _num + aNum.GetNum();
    }

    private:
        int _num;
};

int main()
{
    InputNumber num;
    
    std::cout << "The number you just typed is " << num.GetNum() << "\n";
    num.AddInput();
    std::cout << "Now the value is " << num.GetNum() << "\n";

    return 0;
}
