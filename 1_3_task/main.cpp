/*
Завдання №3
Напишіть програму,
 яка запитує у користувача номер місяця і потім виводить відповідну назву пори року.
У разі, якщо користувач ввів неприпустиме число,
програма повинна вивести повідомлення про помилку.
Приклад результату виконання програми:
Введіть номер місяця (число від 1 до 12): 12
Зима
*/

#include <iostream>

int main()
{
    int16_t month;

    do
    {
        std::cout << "Введіть номер місяця (число від 1 до 12):" << std::endl;
        std::cout << "Для виходу введіть 0 або символ " << std::endl;
        std::cin >> month;
        if ((month == 12) || (month == 1) || (month == 2))
        {
            std::cout << "Зима" << std::endl;
        }
        else if ((month == 3) || (month == 4) || (month == 5))
        {
            std::cout << "Весна" << std::endl;
        }
        else if ((month == 6) || (month == 7) || (month == 8))
        {
            std::cout << "Літо" << std::endl;
        }
        else if ((month == 9) || (month == 10) || (month == 11))
        {
            std::cout << "Осінь" << std::endl;
        }
        else if ((month < 1) || (month > 12))
        {
            std::cerr << "Неправильний ввід!" << std::endl;
        }
    } while (month != 0);

    return 0;
}