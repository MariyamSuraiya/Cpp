#include <iostream>

int main()
{

    int x; // Here is an declaration

    x = 5; // give in variable

    std::cout << x << std::endl;

    std::cout << "For more example 👉👇" << std::endl;

    int m = 30;
    int n = 4;
    int sum = m * n;

    std::cout << m << '\n';
    std::cout << n << '\n';
    std::cout << sum << '\n';

    std::cout << "int don't give any decimal numbers!!" << std::endl;

    // integer(Whole number)

    int Year = 3;
    int Month = 5.9;
    int Days = 7;

    std::cout << Year;
    std::cout << "<";
    std::cout << Month;
    std::cout << "<";
    std::cout << Days;

    std::cout << "Decimal" << '\n';

    /*
    If I wanna see decimal number in my output,,,then I've to give double before variable numbers...Like this....
    */

    double price = 50.50;
    double number = 7.8;

    std::cout << price << '\n';
    std::cout << number << '\n';

    return 0;
}