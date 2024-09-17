#include <stdio.h>
#include <string.h>

struct Record {
    char id[10];
    char name[100];
    long salary;
    long sales;
};

int main() {
    int amount, i, search;

    scanf("%d", &amount);
    struct Record num[amount];

    for (i = 0; i < amount; i++) {
        scanf("%s %s %ld %ld", num[i].id, num[i].name, &num[i].salary, &num[i].sales);
    }

    scanf("%d", &search);
    search -= 1;
    if (search >= amount) {
        printf("ID not found !!!");
        return 0;
    }
    else {
        printf("%s\n%s\n%ld\n%.2f\n%ld\n%.2f",num[search].id, num[search].name, num[search].sales, num[search].sales * 0.02, num[search].salary, num[search].salary + (num[search].sales * 0.02));
    }
}