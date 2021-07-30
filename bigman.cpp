#include <iostream>
#include <string.h>

/* You are implementing a very important security system, where a user can save
   their very important data (and totally not corrupt it)

   Expected output:
   My name is Leonardino and my password is 420
*/

int main() {
    struct User {
        char name[8]; // Our string can hold eight bytes
        int really_important_number;
    };

    User user;

    user.really_important_number = 420; // Hehe
    std::cout << user.really_important_number << std::endl;
    strcpy(user.name, "Leonardino"); // Set our name
    std::cout << "My name is " << user.name << " and my password is ";
    std::cout << user.really_important_number << std::endl;
    // Uh oh something happened to our password
    
    std::cout << &user.name << ", " << &user.really_important_number << std::endl;
    
    return 0;
}