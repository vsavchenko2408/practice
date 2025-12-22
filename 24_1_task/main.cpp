#include <iostream>

void show(int* arr, const int N)
{
    for(int i = 0; i < N; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}
int main()
{
    const int N = 10;
    int* arr = new int[N]{25, 12, 8, 15, 69, 32, 89, 66, 78, 6};
    int count = 0;
    for(int i = 0; i < N; i++)
    {
        if (arr[i] % 2 == 0)
        {
            ++count;
        }
    }
    show(arr, N);
    int* new_arr = new int[count];
    int idx = 0;
    for (int j = 0; j < N; ++j)
    {
        if (arr[j] % 2 == 0)
        {
            new_arr[idx++] = arr[j];
        }
    }
    show(new_arr, count);
    delete[] arr;
    delete[] new_arr;
}