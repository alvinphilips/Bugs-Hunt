#include <stdio.h>
#include <string.h>

/* A program that creates a burger with options for the bread and number
   of slices. It then asks for what to call it, and prints out your order.

   Expected output:
   Type of bread: 1
   Number of cheese slices: 23
   Name of Burger: McSpicy Chicken
   Type of bread: 1
   Number of cheese slices: 23
*/

typedef enum {
    HONEY_OAT,      // 0
    ITALIAN_HERB,   // 1
    CHEESE,         // 2
} BreadType;

// Maybe we should have something else here?
typedef union {
    char name[16];
    BreadType bread;
    int cheese_slices;
} Burger;

int main() {
    // Let's order a burger (sorry vegans)
    Burger chicken;

    // Select a bread
    chicken.bread = ITALIAN_HERB;
    printf("Type of bread: %d\n", chicken.bread);

    // Add slices of cheese
    chicken.cheese_slices = 23; // I hope you aren't lactose intolerant
    printf("Number of cheese slices: %d\n", chicken.cheese_slices);

    // Name the burger, and display its details
    strcpy(chicken.name, "McSpicy Chicken");
    printf("Name of Burger: %s\n", chicken.name);
    printf("Type of bread: %d\n", chicken.bread);
    printf("Number of cheese slices: %d\n", chicken.cheese_slices);
    // What went wrong? :(

    return 0;
}