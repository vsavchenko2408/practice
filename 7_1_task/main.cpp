#include <iostream>
#include <ctime>
#include <chrono>
#include <iomanip>
#include <thread>

int main()
{
    while(true)
    {
#if defined(_WIN32)
        system("cls");
#else
    system("clear");
#endif
    auto now = std::chrono::system_clock::now();
    std::time_t t = std::chrono::system_clock::to_time_t(now);
    std::tm tm;
#if defined(_WIN32)
    localtime_s(&tm, &t);     // Windows (thread-safe)
#else
    localtime_r(&t, &tm);     // POSIX (thread-safe)
#endif
    std::cout << std::put_time(&tm, "%F %T") << '\n'; // "%F %T" -> YYYY-MM-DD HH:MM:SS
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    }
    return 0;
}