#include <stdio.h>
#include <conio.h>
int main() {
    int numbers[10];
    int sum = 0;
    int i = 0;
    printf("\n Enter Numbers");
    
    do {
        printf("Number %d: ", i + 1);
        scanf("%d",&numbers[i]);
        sum += numbers[i];
        i++;
    } while (i < 10);
    printf("\n The sum of the numbers is: %d", sum);
    printf("\n thanks!!");
    getch();
    return 0;
}
