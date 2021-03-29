/**
 * 例題2.5の関数を、テンプレートを用いて実装し直せ。main()も合わせて修正すること。
 */

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

template <typename T>
inline T max(T a, T b) {
    return a < b ? b : a;
}

template <typename T>
inline T max(std::vector<T>& vector) {
    return *std::max_element(vector.begin(), vector.end());
}

template <typename T>
inline T max(T array[], int size) {
    T tmp = array[0];
    for (int i = 1; i < size; ++i) {
        if (tmp < array[i]) {
            tmp = array[i];
        }
    }
    return tmp;
}

int main() {
    std::cout << max(1, 5) << std::endl;
    std::cout << max(3.2f, 1.6f) << std::endl;
    std::cout << max("DEF", "ABC") << std::endl;

    std::vector<int> int_vector = {1, 5, 3};
    std::cout << max(int_vector) << std::endl;
    std::vector<float> float_vector = {1.4f, 5.7f, 9.1f};
    std::cout << max(float_vector) << std::endl;
    std::vector<std::string> string_vector = {"AYT", "GTH", "7UY"};
    std::cout << max(string_vector) << std::endl;

    int int_array[] = {1, 5, 3};
    std::cout << max(int_array, 3) << std::endl;
    float float_array[] = {1.4f, 5.7f, 9.1f};
    std::cout << max(float_array, 3) << std::endl;
    std::string string_array[] = {"AYT", "GTH", "7UY"};
    std::cout << max(string_array, 3) << std::endl;
}