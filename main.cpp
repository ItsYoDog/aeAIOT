#include <iostream>

int main()
{
    std::cout << R"(
 █████╗ ███████╗███████╗     █████╗ ██╗ ██████╗ ████████╗
██╔══██╗██╔════╝██╔════╝    ██╔══██╗██║██╔═══██╗╚══██╔══╝
███████║█████╗  ███████╗    ███████║██║██║   ██║   ██║   
██╔══██║██╔══╝  ╚════██║    ██╔══██║██║██║   ██║   ██║   
██║  ██║███████╗███████║    ██║  ██║██║╚██████╔╝   ██║   
╚═╝  ╚═╝╚══════╝╚══════╝    ╚═╝  ╚═╝╚═╝ ╚═════╝    ╚═╝                                                          
                                                      )" << std::endl;
    
    std::cout << "\033[1;31m" << std::endl << "DISCLAIMER: This software is provided as is, and the author is not responsible for any damage caused by its use." << std::endl << "\033[0m" << std::endl;

    std::string input;
    std::cout << "Do you accept the disclaimer? (yes/no): ";
    std::cin >> input;

    if (input == "yes") {
        std::cout << std::endl << "Welcome to ae's AIOT!" << std::endl;
    } else {
        std::cout << std::endl << "Exiting..." << std::endl;
    }

    return 0;
}
