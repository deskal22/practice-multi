#include <stdio.h>

int main(void){
    int answer;

    printf("Practice Multiplication\n");
    printf("How much is 2 x 2?\n");
    scanf("%d", &answer);

    if (answer == 4){
        printf("Correct!\n");
    }
    else printf("Wrong answer..\n");
    return 0;
}
