/*
2について、結果を出力するファイル名をコマンドラインから指定できるようにしてください。
*/

#include <stdio.h>

int main(int argc, char* argv[]) {
    FILE* fp = fopen(argv[1], "w");
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 5; ++j) {
            fprintf(fp, "%3d", i * j);
        }
        fprintf(fp, "\n");
    }
    fclose(fp);

    return 0;
}