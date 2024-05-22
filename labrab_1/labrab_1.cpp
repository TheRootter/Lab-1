#include <iostream>
#include <algorithm>
#include <string>
#define length 10

int compare(const void* arg1, const void* arg2) {
    std::string* s1 = (std::string*)arg1; //приведение типа
    std::string* s2 = (std::string*)arg2;
    return _stricmp(s1->c_str(), s2->c_str());
}

int main() {
    const int size = length;
    std::string student_list[size] = {
        "Judith Brown",
        "Jason Roberts",
        "Diane Miller",
        "Jason Rodriguez",
        "Joseph Thomas",
        "Christopher Martin",
        "Sarah Kelley",
        "Barry King",
        "Danielle Turner",
        "Wanda Kelly"
    };

    // вывод начального массива
    std::cout << "Unsorted list:\n";
    for (const auto& student : student_list) {
        std::cout << student << "\n";
    }

    // сортировка стандартной функцией
    std::qsort(student_list, size, sizeof(std::string), compare);

    // вывод списка
    std::cout << "\nSorted list:\n";
    for (const auto& student : student_list) {
        std::cout << student << "\n";
    }

    return 0;
}
