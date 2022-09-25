#include <iostream>

int additionMachine(int firstNumber, int secondNumber)
{
    int sum = firstNumber + secondNumber;
    return sum;
}

int main(int argc, char **argv)
{
    int firstNumber = 29;
    int secondNumber = 21;
    int sum = additionMachine(firstNumber, secondNumber);

    std::cout << "Sum of 2 numbers is : " << sum << std::endl;
    return 0;
}