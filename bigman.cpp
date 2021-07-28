#include <iostream>
#include <string.h>

int main() {
    char name[8]; // Our string can hold eight bytes
    int really_important_number;

    really_important_number = 420; // Hehe
    std::cout << really_important_number << std::endl;
    strcpy(name, "Leonardino"); // Set our name
    
    std::cout << "My name is " << name << " and my password is " << really_important_number << "\n";
    // Uh oh something happened to our password
    
    return 0;
}