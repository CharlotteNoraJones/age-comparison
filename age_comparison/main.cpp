#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter the name of person #1: ";
    std::string person_1{};
    std::getline(std::cin >> std::ws, person_1);

    std::cout << "Enter the age of person #1: ";
    int person_1_age{};
    std::cin >> person_1_age;

    std::cout << "Enter the name of person #2: ";
    std::string person_2{};
    std::getline(std::cin >> std::ws, person_2);

    std::cout << "Enter the age of person #2: ";
    int person_2_age{};
    std::cin >> person_2_age;

    if (person_1_age > person_2_age)
    {
        std::cout << person_1 << " (age " << person_1_age << ") is older than " << person_2 << " (age " << person_2_age << ").\n";
    }
    else if (person_1_age < person_2_age)
    {
        std::cout << person_2 << " (age " << person_2_age << ") is older than " << person_1 << " (age " << person_1_age << ").\n";
    }
    else
    {
        std::cout << "Both " << person_1 << " and " << person_2 << " are the same age (" << person_1_age << ").\n";
    }
}
