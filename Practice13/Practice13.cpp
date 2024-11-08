

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NUMMAX 100;


int main()
{
    char han[3][7] = {"Big", "Small", "Bingo!"};
    unsigned int num;
    unsigned int ateru;
    char text[20];

    // 0～99の乱数設定
    srand((unsigned int)time(NULL));
    num = rand() % NUMMAX;
    printf("%u\n", num);
    while (1) {
        // 入力値読み込み
        printf("1-100の数値を入力してください");
        scanf_s("%u", &ateru);
        
        // 比較
        if (ateru > num) {
            strcpy_s(text, han[0]);
        }
        else if (ateru < num) {
            strcpy_s(text, han[1]);
        }
        else {
            strcpy_s(text, han[2]);
            break;
        }
        printf("%s\n", text);
    }
    printf("%s\n", text);
    return 0;
}

