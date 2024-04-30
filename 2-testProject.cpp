#include <iostream> // Подключаем заголовок для работы с std::cout
#include <string>   // Подключаем заголовок для работы со строками std::string

int main() {
    // Создаем строку и инициализируем ее значением
    std::string myString = "Arghen is the best";

    // Выводим саму строку
    std::cout << "String: " << myString << std::endl;

    // Выводим длину строки
    std::cout << "Length: " << myString.length() << std::endl;

    // Выводим первый символ
    std::cout << "First character: " << myString[0] << std::endl;

    // Выводим последний символ
    std::cout << "Last character: " << myString[myString.length() - 1] << std::endl;

    return 0; // Возвращаем 0, означая успешное завершение программы
}
