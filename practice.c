#include <stdio.h>

int main() {
    int age = 20;
    int money = 1000;

    if (age >= 20 && money >= 1000) {
        printf("You are be able to Purchase Alchol drink.\n");
        money -= 200;
    }
    printf("Your money is %d",money);
    return 0;
}