#include <iostream>

void fill(int* arr, const int N)
{

    for(int i = 0; i < N; i++)
    {
        arr[i] = rand() % 100;
    }
}

int find_min(int* arr, const int N)
{
    int min = 0;
    for(int i = 1; i < N; ++i)
    {
        if(arr[i] < arr[min])
        {
            min = i;
        }
    }
    return min;
}

int find_max(int* arr, const int N)
{
    int max = 0;

    for(int i = 1; i < N; ++i)
    {
        if(arr[i] > arr[max])
        {
            max = i;
        }
    }
    return max;
}

void show(int* arr, const int N)
{
    for( int i = 0; i < N; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void swap(int& a, int& b)
{
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    srand(time(0));
    const int N = 10;
    int* arr = new int[N];
    fill(arr,N);
    show(arr,N);
    int min = find_min(arr, N);
    int max = find_max(arr, N);
    swap(arr[max], arr[min]);
    show(arr, N);
    delete[] arr;
}