#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>
#include <windows.h>

int main() {

    // DIGITAL CLOCK

    time_t rawtime = 0; // Jan 1 1970 (Epoch)
    struct tm *pTime = NULL;
    bool isRunning = true;

    printf("DIGITAL CLOCK\n");

    while(isRunning){

        time(&rawtime); // Get the current time

        pTime = localtime(&rawtime); // Convert to local time

        printf("\r%02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);

        sleep(1); // Sleep for 1 second

    }

    return 0;
}