#include <iostream>

int main()
{
    srand(time(0));
    int arr[10];
    for(int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 10;
    }
    std::cout << "Array: " ;
    for(int j = 0; j < 10; j++)
    {
        std::cout << arr[j] << " ";
    }
    std::cout << std::endl;
    float sum = 0;
    for(int k = 0; k < 10; k++)
    {
        sum += arr[k];
    }
    std::cout << "Middle arithmetics: " << sum / 10 << std::endl;
}