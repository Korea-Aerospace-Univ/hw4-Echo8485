#include <stdio.h>

int main() {
    int answer;
    int input;
    int count = 0;

    // 정답 입력
    printf("정답 입력 : ");
    scanf("%d", &answer);

    do {
        scanf("%d", &input);
        count++;

        if (input > answer) {
            printf("%d>?  \n", input);
        }
        else if (input < answer) {
            printf("%d<?  \n", input);
        }
        else {
            printf("%d==? \n", input);
        }

    } while (input != answer);

    printf("%d  \n", count);

    return 0 ;
}
