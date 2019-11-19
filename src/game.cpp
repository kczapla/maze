#include <string>
#include <iostream>


void print_menu()
{
    std::cout << "start game. press q to exit.\n";
}


int main(void)
{
    std::string user_input;
    while (true) {
        print_menu();
        std::getline(std::cin, user_input);
        if (user_input == "q") break;
    }
    return 0;
}