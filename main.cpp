#include <iostream>
#include <cmath>
#include <windows.h>
#include <limits>
#include <numeric>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    /* Проверка ввода данных (справочно)
    while(true)
    {
        float value; // попробуйте разные типы данных
        std::cin >> value;

        if (std::cin.fail() || std::cin.peek() != '\n')
        {
            std::cerr << "Ошибка ввода данных\n";

            // Данные две строки необходимы для очистки буфера ввода, без них, при последующем вводе данных, произойдёт зацикливание:
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            // Если нужно прервать программу:
            // return 1; // выход из функции main, соответственно и из программы
            // exit(1); // а так можно выйти из программы в любом месте
            // цифры - это номера ошибок передаваемые программой в ОС,
            // 0 - всё хорошо, не 0 - какой-то код, который разработчик устанавливает сам...
        }
        else
            std::cout << value << '\n';
    }

    return 0;
     */
    float a;
    float b;
    float min;
    float max;
    while (true) {
        std::cout << "Введите первое число (>=0): ";
        std::cin >> a;
        std::cout << "Введите второе число (>=0): ";
        std::cin >> b;

        if (a<0 || b<0 || std::cin.fail() || std::cin.peek() != '\n') {
            std::cout << "Ошибка ввода данных\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            max = (fabs(a + b) + fabs(a - b)) / 2;
            min = (sqrt((a + b)*(a + b)) - sqrt((a - b)*(a - b))) / 2;
            std::cout << "Максимальное число равно: " << max << "\n";
            std::cout << "Минимальное число равно: " << min << "\n";
        }
    }

}