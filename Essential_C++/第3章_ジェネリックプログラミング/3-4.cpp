/**
 * 標準入力からistream_iteratorを用いて整数の列を読み込むプログラムを書け。
 * ostream_iteratorを用いて、奇数値をファイルに書き出せ。
 * それぞれの値はスペースで区切られていることとする。
 * 偶数値を2番目のファイルに、同様にostream_iteratorを用いて書き出せ。
 * それぞれの値は、それぞれ独立した行に書き出せ。
 */

#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

int main() {
    std::istream_iterator<int> input(std::cin), eof;
    std::vector<int> array;
    std::copy(input, eof, std::back_inserter(array));

    //前半に偶数が、後半に奇数が来るようにする。境目のイテレータを取得して後で利用する。
    auto partition_it = std::stable_partition(
        array.begin(), array.end(), [](int elem) { return elem % 2 == 0; });

    std::ofstream fout_even("result_E_3_4_1.txt"),
        fout_odd("result_E_3_4_2.txt");
    if (!fout_even || !fout_odd) {
        std::cout << "ファイルを開けませんでした。" << std::endl;
        return 1;
    }

    std::ostream_iterator<int> output_even(fout_even, " "),
        output_odd(fout_odd, "\n");
    std::copy(array.begin(), partition_it, output_even);
    std::copy(partition_it, array.end(), output_odd);
}