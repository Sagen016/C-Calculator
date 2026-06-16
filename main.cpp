#include <iostream>

int main() {
    double total;
    double nextNum;
    char op;

    std::cout << "***************** SIMPLE CALCULATOR *****************\n";
    std::cout << "Enter initial number: ";
    if (!(std::cin >> total)) return 1;

    while (true) {
        std::cout << "Enter operator (+, -, *, /) or '=' to show result: ";
        std::cin >> op;

        if (op == '=') {
            break;
        }

        std::cout << "Enter next number: ";
        if (!(std::cin >> nextNum)) break;

        switch (op) {
            case '+':
                total += nextNum;
                break;
            case '-':
                total -= nextNum;
                break;
            case '*':
                total *= nextNum;
                break;
            case '/':
                if (nextNum != 0) {
                    total /= nextNum;
                } else {
                    std::cout << "Error! Division by zero. Skipping this operation.\n";
                }
                break;
            default:
                std::cout << "Invalid operator! Try again.\n";
                continue;
        }
        std::cout << "Current Total: " << total << "\n";
    }

    std::cout << "Final Result: " << total << "\n";
    std::cout << "***********************************************************\n";

    return 0;
}
