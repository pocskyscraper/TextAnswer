/*
1と同じ結果をresult.txtというファイルに出力するコードを記述してください。
*/

#include <stdio.h>

int main() {
    FILE* fp = fopen("./result.txt", "w");
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 5; ++j) {
            fprintf(fp, "%3d", i * j);
        }
        fprintf(fp, "\n");
    }
    fclose(fp);

    return 0;
}