#include <stdio.h>
#include <string.h>

struct Weather {
    char outlook[9]; //outlook{overcast,sunny,rain}
    int temperature;
    int humidity;
    char wind; //wind{T,F}
};

int main() {
    int n, i;

    scanf("%d", &n);
    struct Weather day[n];

    for (i = 0; i < n; i++) {
        scanf("%s %d %d %c", day[i].outlook, &day[i].temperature, &day[i].humidity, &day[i].wind);
    }

    for (i = 0; i < n; i++) {
        if (strcmp(day[i].outlook, "overcast") == 0) {
            printf("yes\n");
        } 
        else if (strcmp(day[i].outlook, "rain") == 0) {
            if (day[i].wind == 'F') {
                printf("yes\n");
            } else {
                printf("no\n");
            }
        } 
        else if (strcmp(day[i].outlook, "sunny") == 0) {
        if (day[i].humidity > 77.5) {
                printf("no\n");
            } else {    
                printf("yes\n");
            }
        }
    }
}