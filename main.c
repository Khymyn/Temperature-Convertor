#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float fahrenheit_to_celsius(float f);
float celsius_to_fahrenheit(float c);
float kelvin_to_celsius(float k);
float celsis_to_kelvin(float c);
float kelvin_to_fahrenheit(float k);
float fahrenheit_to_kelvin(float f);

int main()
{
    float fahr, celsius, kelvin;
    fahr = UPPER;
    celsius = UPPER;
    kelvin = UPPER;
    printf(" %s\t\t %s\t\t %s\t\t %s\t\t %s\t\t %s\n", "F -> C", "C -> F", "K -> C", "C -> K", "F -> K", "K -> F");
    while (fahr >= LOWER && celsius >= LOWER && kelvin >= LOWER) {
        printf("|%3.0f -> %6.1f|\t|%3.0f -> %6.1f|\t|%3.0f -> %6.1f|\t|%3.0f -> %6.1f|\t|%3.0f -> %6.1f|\t|%3.0f -> %6.1f|\n", fahr, fahrenheit_to_celsius(fahr), celsius, celsius_to_fahrenheit(celsius),kelvin, kelvin_to_celsius(kelvin), celsius, celsis_to_kelvin(celsius), fahr, fahrenheit_to_kelvin(fahr), kelvin, kelvin_to_fahrenheit(kelvin));
        fahr -= STEP;
        celsius -= STEP;
        kelvin -= STEP;
    }
    return 0;
}


float fahrenheit_to_celsius(float f)
{
    return (5.0 / 9.0) * (f - 32.0);
}

float celsius_to_fahrenheit(float c)
{
    return (c * (9.0 / 5.0) + 32);
}

float kelvin_to_celsius(float k)
{
    return k - 273.15;
}

float celsis_to_kelvin(float c)
{
    return c + 273.15;
}

float kelvin_to_fahrenheit(float k)
{
    return celsius_to_fahrenheit(kelvin_to_celsius(k));
}

float fahrenheit_to_kelvin(float f)
{
    return celsis_to_kelvin(fahrenheit_to_celsius(f));
}
