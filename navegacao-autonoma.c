#include <stdio.h>
#include <math.h>

int main() {
    
    int rx, ry, x1, y1, x2, y2, x3, y3;
    float a1, a2, a3, b1, b2;
    
    scanf("%i %i", &rx, &ry);
    scanf("%i %i", &x1, &y1);
    scanf("%i %i", &x2, &y2);
    scanf("%i %i", &x3, &y3);
    a1 = sqrt( pow(x1 - rx, 2) + pow(y1 - ry, 2));
    a2 = sqrt( pow(x2 - rx, 2) + pow(y2 - ry, 2));
    a3 = sqrt( pow(x3 - rx, 2) + pow(y3 - ry, 2));
    
    if (a1 < a2 && a1 < a3) {
        b1 = sqrt( pow(x2 - x1, 2) + pow(y2 - y1, 2));
        b2 = sqrt( pow(x3 - x1, 2) + pow(y3 - y1, 2));
        if (b1 == b2) {
            printf("A B C");
        }
        else if (b1 < b2) {
            printf("A B C");
        }
        else {
            printf("A C B");
        }
    }
    else if (a2 < a1 && a2 < a3) {
        b1 = sqrt( pow(x1 - x2, 2) + pow(y1 - y2, 2));
        b2 = sqrt( pow(x3 - x2, 2) + pow(y3 - y2, 2));
        if (b1 == b2) {
            printf("B A C");
        }
        else if (b1 < b2) {
            printf("B A C");
        }
        else {
            printf("B C A");
        }
    }
    else if (a3 < a1 && a3 < a2) {
        b1 = sqrt( pow(x1 - x3, 2) + pow(y1 - y3, 2));
        b2 = sqrt( pow(x2 - x3, 2) + pow(y2 - y3, 2));
        if (b1 == b2) {
            printf("C A B");
        }
        else if (b1 < b2) {
            printf("C A B");
        }
        else {
            printf("C B A");
        }
    }
    else if (a1 == a2 && a1 < a3) {
        printf("A B C");
    }
    else if (a1 == a3 && a1 < a2) {
        printf("A C B");
    }
    else if (a2 == a3 && a2 < a1) {
        printf("B C A");
    }
    else if (a1 == a2 && a1 == a3 && a2 == a3) {
        printf("A B C");
    }
    return 0;
}
