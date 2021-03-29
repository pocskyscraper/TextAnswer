/**
 * 与えられた要素の最大値を返すmax()関数を、オーバーロードされた関数の組で実装する。
 * ここで、次のパラメータを持つものを実装する。：(a)2つの整数、(b)2つのfloat、(c)2つのstring、
 * (d)1つの整数のvector、(e)1つのfloatのvector、(f)1つのstringのvector、
 * (g)1つの整数の配列とその配列の大きさを指示した整数、(h)1つのfloatの配列とその配列の大きさを指示した整数、
 * (i)1つのstringの配列とその配列の大きさを指示した整数。
 * ここでも、これらの関数を試すためのmain()関数を書く。
 */

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

inline int max(int a, int b) { return a < b ? b : a; }
inline float max(float a, float b) { return a < b ? b : a; }
inline std::string max(std::string a, std::string b) { return a < b ? b : a; }

inline int max(std::vector<int>& vector) {
    return *std::max_element(vector.begin(), vector.end());
}
inline float max(std::vector<float>& vector) {
    return *std::max_element(vector.begin(), vector.end());
}
inline std::string max(std::vector<std::string>& vector) {
    return *std::max_element(vector.begin(), vector.end());
}

inline int max(int array[], int size) {
    int tmp = array[0];
    for (int i = 1; i < size; ++i) {
        if (tmp < array[i]) {
            tmp = array[i];
        }
    }
    return tmp;
}

inline float max(float array[], int size) {
    float tmp = array[0];
    for (int i = 1; i < size; ++i) {
        if (tmp < array[i]) {
            tmp = array[i];
        }
    }
    return tmp;
}

inline std::string max(std::string array[], int size) {
    std::string tmp = array[0];
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