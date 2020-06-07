/*
水平タブを使って、九九の表を画面に出力するコードを記述してください。
*/

#include <stdio.h>

int main(){    
    for (int i = 1; i < 10; ++i){
        for (int j = 1; j < 10; ++j){
            printf("%d\t", i * j);
        }
        printf("\n");
    }

    return 0;
}