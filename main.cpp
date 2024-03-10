#include <iostream>

int main() {
    std::string surnames[10];
    std::cout << "Enter the surnames of the residents living from the 1 to the 10 apartment: " << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cin >> surnames[i];
    }
    std::cout << "Enter the numbers of 3 apartments: " << std::endl;
    for (int count = 1; count <= 3; count++) {
        int i;
        std::cin >> i;
        std::cout << surnames[i - 1] << std::endl;
    }
}
