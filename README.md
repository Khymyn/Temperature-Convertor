# Temperature Converter

A simple C program that converts temperatures between:

* Fahrenheit and Celsius
* Celsius and Kelvin
* Fahrenheit and Kelvin

The program prints the conversion results in a table for a range of temperatures.

## About the exercise

This program was created as a practice exercise while studying the book **"The C Programming Language"** by **Brian W. Kernighan and Dennis M. Ritchie**.

The program is based on the temperature conversion exercises from the book and was additionally extended with conversions involving Kelvin.

## Technologies

* C
* Standard I/O (`stdio.h`)

## Example

Program output:

```text
F -> C          C -> F          K -> C          C -> K          F -> K          K -> F
300 ->  148.9   300 ->  572.0   300 ->   26.9   300 ->  573.2   300 ->  422.0   300 ->   80.3
280 ->  137.8   280 ->  536.0   280 ->    6.8   280 ->  553.2   280 ->  410.9   280 ->   44.3
260 ->  126.7   260 ->  500.0   260 ->  -13.1   260 ->  533.2   260 ->  399.8   260 ->    8.3
240 ->  115.6   240 ->  464.0   240 ->  -33.2   240 ->  513.2   240 ->  388.7   240 ->  -27.7
220 ->  104.4   220 ->  428.0   220 ->  -53.2   220 ->  493.1   220 ->  377.6   220 ->  -63.7
200 ->   93.3   200 ->  392.0   200 ->  -73.2   200 ->  473.1   200 ->  366.5   200 ->  -99.7
180 ->   82.2   180 ->  356.0   180 ->  -93.2   180 ->  453.1   180 ->  355.4   180 -> -135.7
160 ->   71.1   160 ->  320.0   160 -> -113.2   160 ->  433.1   160 ->  344.3   160 -> -171.7
140 ->   60.0   140 ->  284.0   140 -> -133.1   140 ->  413.1   140 ->  333.1   140 -> -207.7
120 ->   48.9   120 ->  248.0   120 -> -153.1   120 ->  393.1   120 ->  322.0   120 -> -243.7
100 ->   37.8   100 ->  212.0   100 -> -173.1   100 ->  373.1   100 ->  310.9   100 -> -279.7
 80 ->   26.7    80 ->  176.0    80 -> -193.1    80 ->  353.1    80 ->  299.8    80 -> -315.7
 60 ->   15.6    60 ->  140.0    60 -> -213.1    60 ->  333.1    60 ->  288.7    60 -> -351.7
 40 ->    4.4    40 ->  104.0    40 -> -233.1    40 ->  313.1    40 ->  277.6    40 -> -387.7
 20 ->   -6.7    20 ->   68.0    20 -> -253.1    20 ->  293.1    20 ->  266.5    20 -> -423.7
  0 ->  -17.8     0 ->   32.0     0 -> -273.1     0 ->  273.1     0 ->  255.4     0 -> -459.7
```
