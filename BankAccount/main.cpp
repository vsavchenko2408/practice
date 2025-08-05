#include <iostream>
#include <string>

class Account
{
    std::string m_name;
    std::string m_surname;
    unsigned short m_age;
    float m_money;

public:
    Account() : m_name("empty"), m_surname("empty"), m_age(0), m_money(0.0)
    {
    }
    Account(std::string name, std::string surname, unsigned short age, float money) : m_name(name), m_surname(surname), m_age(age), m_money(money)
    {
    }

    Account createAccount()
    {
        std::cout << "/t/tCreated Account!/t/t" << std::endl;
        std::cout << "Enter name: ";
        std::cin >> m_name;
        std::cout << "Enter Surname: ";
        std::cin >> m_surname;
        std::cout << "Enter age: ";
        std::cin >> m_age;
        std::cout << "Enter money: ";
        std::cin >> m_money;
        return *this;
    }
};

int main()
{
    Account ac;
    ac.createAccount();
}