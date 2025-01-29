/*
Easy: Завдання №1
Напишіть програму обчислення вартості поїздки на автомобілі на дачу (туди і назад).
Вихідними даними є:

   відстань до дачі (в км);

   літраж бензину, який споживає автомобіль на 100 км пробігу;

   ціна одного літра бензину.

Приклад результату виконання програми:

Відстань до дачі (км): 67
Витрати бензину (літрів на 100 км пробігу): 8.5
Ціна літра бензину (грн.): 25
Поїздка на дачу і назад обійдеться в 284.75 грн.
*/

#include <iostream>

int main()
{
    int distance = 0;
    float gas = 0.0f;
    float cost = 0.0f;
    std::cout << "Input distance: " << std::endl;
    std::cin >> distance;
    std::cout << "Input gas: " << std::endl;
    std::cin >> gas;
    std::cout << "Input cost: " << std::endl;
    std::cin >> cost;

    std::cout << "Road Trip costs: " << (distance * 2) * (gas / 100) * cost << " hrv" << std::endl;

    return 0;
}