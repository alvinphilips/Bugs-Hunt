#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Enum of our Allies (that we definitely won't nuke)
enum EnemyCountries {
    USA,
    RUSSIA,
    PAKISTAN,
    CHINA,
    ANTARCTICA, // Please no, don't kill the penguins
};

// Function to nuke a country (it's that easy)
void sendNuke(int countryCode) {
    char country[12];

    switch (countryCode) {
        case USA:
            strcpy(country, "USA");
            break;
        case RUSSIA:
            strcpy(country, "RUSSIA");
            break;
        case CHINA:
            strcpy(country, "CHINA");
            break;
        case PAKISTAN:
            strcpy(country, "PAKISTAN");
            break;
        case ANTARCTICA:
            printf("Millions of penguins die. You're a monster!\n");
            strcpy(country, "ANTARCTICA");
            break;
        default:
            printf("We shouldn't ever reach here. Something went wrong Alvin :/\n");
            strcpy(country, "motivation");
    }
    printf("BOOM, %s dead lmao. Press F in the chat\n", country);
}

int main() {
    bool winter_is_coming = false; // I'm glad were safe
    if (winter_is_coming = true) {
        sendNuke(RUSSIA);
        sendNuke(USA);
        sendNuke(CHINA);
        sendNuke(PAKISTAN);
        sendNuke(ANTARCTICA); // Nooooo the penguins :((
    } else {
        printf("The world sleeps safely tonight. Good job soldier!\n");
    }
    // What have you done,,,
    
    return 0;
}