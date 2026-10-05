#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

float Wavelength(float Velocity, float Frequency);

int main() {

    setlocale(LC_CTYPE, "");

    float v = 3.0 * pow(10.0, 8.0); //скорость света
    float F;
    scanf("%f", &F);
    float result = Wavelength(v, F);
    printf("%.2f", result);

    return 0;
}

float Wavelength(float Velocity, float Frequency) {
    float WLenght = Velocity / Frequency;
    return WLenght;
}