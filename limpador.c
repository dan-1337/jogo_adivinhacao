#include <stdlib.h>

#ifdef __linux__
    #include <unistd.h>
#elif _WIN32
    #include <window.h>
#else

#endif

void dormir(int sec) {
    #ifdef __linux__
        sleep(sec);
        system("clear");
    #elif _WIN32
        Sleep(sec * 1000);
        system("cls");
    #else

    #endif
}