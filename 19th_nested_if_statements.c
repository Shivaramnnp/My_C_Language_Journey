#include <stdio.h>
#include <stdbool.h>

int main() {
    int hour;
    printf("Enter the hour (0–23): ");
    scanf("%d", &hour);

    bool isMorning = (hour >= 5 && hour <= 11);
    bool isAfternoon = (hour >= 12 && hour <= 16);
    bool isEvening = (hour >= 17 && hour <= 20);
    bool isNight = (hour >= 21 && hour <= 23) || (hour >= 0 && hour <= 4);

    if (isMorning)
        printf("Good Morning 🌞\n");
    else {
        if (isAfternoon)
            printf("Good Afternoon ☀️\n");
        else {
            if (isEvening)
                printf("Good Evening 🌇\n");
            else {
                if (isNight)
                    printf("Good Night 🌙\n");
                else
                    printf("Invalid input!\n");
            }
        }
    }
    return 0;
}
