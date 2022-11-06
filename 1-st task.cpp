#include <iostream>

class Complex
{
public:
    double First_Number = 0;
    double Second_Number = 0;
    void sum(double a, double b)
    {
        double summ = a + b;

        std::cout << "Sum of First and Second " << summ << "\n";
    }
    void subtract(double a, double b)
    {
        double subt = a - b;
        std::cout << "Subtract of First and Second " << subt << "\n";
    } 
    void multiply(double a, double b)
    {
        double mult = a * b;

        std::cout << "Multiply of First and Second " << mult << "\n";
    }
};

int main()
{
    std::cout << "This program can sum, subtract and multiply complex values \n";
    
    Complex First;

    bool again = true;

    while (again == true)
    {
        std::cout << "Incert two numbers \n";

        double FirstNum = 0;
        double SecondNum = 0;

        std::cin >> FirstNum >> SecondNum;
        
        int operation = 0;
    
        std::cout << "Choose operation \n" << "1 - sum \n" << "2 - subtract \n" << "3 - multiply \n" << "4 - all methouds \n";

        std::cin >> operation;

        switch (operation)
        {
        case 1:
            First.sum(FirstNum, SecondNum);
            break;
        case 2:
            First.subtract(FirstNum, SecondNum);
            break;
        case 3:
            First.multiply(FirstNum, SecondNum);
            break;
        case 4:
            First.sum(FirstNum, SecondNum);
            First.subtract(FirstNum, SecondNum);
            First.multiply(FirstNum, SecondNum);
            break;
        default:
            std::cout << "Incorrect number \n";
            break;
        }

        std::cout << "Try again? \n 1 - yes \n 0 - no \n";

        std::cin >> again;

    }
    
    return 0;
}
