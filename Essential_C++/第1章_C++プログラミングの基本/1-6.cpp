/**
 * 標準入力から整数の列を読み込むプログラムを書け。
 * これらの値を、順に組込み配列型とvectorに入れよ。
 * これらのコンテナそれぞれの値の合計を計算せよ。
 * 合計と入力された値の平均値を標準出力へ出力せよ。
 */

#include <iostream>
#include <numeric>
#include <vector>

int main() {
    const int max_count = 10;
    int num_array[max_count];
    std::vector<int> num_vector;
    num_vector.reserve(max_count);

    for (int i = 0; i < max_count; ++i) {
        int tmp;
        std::cin >> tmp;
        num_array[i] = tmp;
        num_vector.emplace_back(tmp);
    }

    int array_total = 0;
    for (int i = 0; i < max_count; ++i) {
        array_total += num_array[i];
    }
    int vector_total = std::accumulate(num_vector.begin(), num_vector.end(), 0);

    std::cout << "配列の合計は" << array_total << "で、平均値は"
              << array_total / max_count << "です。" << std::endl;

    std::cout << "ベクタの合計は" << vector_total << "で、平均値は"
              << vector_total / num_vector.size() << "です。" << std::endl;

    return 0;
}