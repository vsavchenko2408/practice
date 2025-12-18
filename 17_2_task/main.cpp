#include <iostream>

void fill(int* arr, const int N)
{
    srand(time(0));
    for(int i = 0; i < N; i++)
    {
        arr[i] = rand() % 10;
    }
}

int find_min(int* arr, const int N)
{
    int min = arr[0];
    for(int i = 0; i < N; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int find_max(int* arr, const int N)
{
    int max = arr[0];
    for(int i = 0; i < N; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
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
int main()
{

    const int N = 10;
    int* arr = new int[N];
    fill(arr,N);
    show(arr,N);
    int min = find_min(arr, N);
    int max = find_max(arr, N);
    int temp = arr[min-1];
    arr[min-1] = arr[max-1];
    arr[max-1] = temp;
    show(arr, N);
}