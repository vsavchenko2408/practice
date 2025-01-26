/*Завдання №2
Напишіть програму, яка визначає найменше число в послідовності додатних чисел, які ввів користувач.
Якщо в послідовності є від’ємні числа,
то ви повинні повідомити про це користувачеві і запропонувати повторити ввід ще раз.*/

#include <iostream>

using namespace std;

int main()
{
    int value = 0;
    int min_value = 0;
    int arr[10];
    cout << "\t\t\tHello! " << endl;
    cout << "\t\tValue must be greater then zero!" << endl;
    int count = 0;
    while (count < 10)
    {
        cout << "Input value: ";
        cin >> value;
        if (value > 0)
        {
            arr[count] = value;
            count++;
        }
        else
        {
            cerr << "Value must be greater then zero!" << endl;
            continue;
        }
    }
    cout << "Values: " << endl;
    for (int j = 0; j < 10; ++j)
    {
        cout << arr[j] << " ";
    }
    cout << endl;

    return 0;
}
