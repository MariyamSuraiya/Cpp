#include <iostream>

int main()
{

    // This is my comment...I can also comment with Slash multiflication..Like--

    /*
    I am new c++ learner..Now I want to try practise with simple c++ language code.
    */

    std::cout << "I am learning c++!" << std::endl;
    std::cout << "For giving one code there is looking problem!" << '\n';
    std::cout << "So now i am giving two more code for try to solving or remove problem!" << std::endl;

    std::cout << "Now I can run code without any problem!!!" << std::endl;

    std::cout << "I like pizza!" << std::endl;
    std::cout << "Do you??";
    std::cout << "I love it so much!!" << '\n';
    std::cout << "Now tell me do you like it??" << '\n';

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
    std::cout << Days << '\n';

    std::cout << "Decimal" << '\n';

    /*
    If I wanna see decimal number in my output,,,then I've to give double before variable numbers...Like this....
    */

    double point = 50.50;
    double number = 7.8;

    std::cout << point << '\n';
    std::cout << number << '\n';

    // Single Character

    char student = 'K';
    char accademy = 'M';
    char dollarSign = '$';
    char sign = '@';
    char asign = '%';

    std::cout
        << student << '\n';
    std::cout << accademy << '\n';
    std::cout << dollarSign << '\n';
    std::cout << sign << '\n';
    std::cout << asign << '\n';

    // char can  store only a single character or signs

    // boolean have 2 stage (True or False)

    bool army = false;
    bool people = true;
    bool doctor = false;

    std::cout << army << '\n';
    std::cout << people << '\n';
    std::cout << doctor << '\n';

    // String (objects that represents a sequence of text)

    std::string subjects = "Physics";
    std::string chapter = "Organic Chamistry chapter:4";
    std::string signs = "$#%";

    std::cout << signs << '\n';
    std::cout << subjects << '\n';
    std::cout << chapter << '\n';
    std::cout << "Very tough " << chapter << '/n';

    // string can give output more than one signs...And string can make a sentence

    return 0;
}