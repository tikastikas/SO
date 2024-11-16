#include <stdio.h> // header to print text on the screen
#include <math.h> // contains 'sin', 'cos' and 'M_PI'

#define START 0 // START is set to 0 (used to start something)
#define ONE_TURN 360 // set to 360 (one full circle)

double cos_table[ONE_TURN]; // array cos with 360 elements
double sin_table[ONE_TURN]; // array sin with 360 elements

void build_tables() {
    int i;
    for (i = START; i < ONE_TURN; i++) {
        sin_table[i] = sin(M_PI * i / 180.0);
        cos_table[i] = cos(M_PI * i / 180.0);
    }
}

double sin_degrees(int angle) {
    return sin_table[angle % ONE_TURN]; // allows to add angles 360<
}

double cos_degrees(int angle) {
    return cos_table[angle % ONE_TURN]; // allows to add angles 360<
}

int main() {
    build_tables();
    printf("sin(20) = %f\n", sin_degrees(20));
    printf("cos(80) = %f\n", cos_degrees(425));
    printf("tan(60) = %f\n", sin_degrees(60) / cos_degrees(60));
    return 0;
}