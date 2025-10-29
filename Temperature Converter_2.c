#include <stdio.h>
int ctof(int celsius); // Function prototype
int ftoc(int fahrenheit); // Function prototype
int main() {
    int temp, convertedTemp;
    char choice;
    printf("Temperature Converter\n");
    printf("1. (C)elsius to Fahrenheit\n");
    printf("2. (F)ahrenheit to Celsius\n");
    scanf("%c", &choice);
    
    if (choice == 'C' || choice == 'c') {
        printf("Enter temperature in Celsius: ");
        scanf("%d", &temp);
        convertedTemp = ctof(temp);
        printf("Temperature in Fahrenheit: %d\n", convertedTemp);
    } else if (choice == 'F' || choice == 'f') {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%d", &temp);
        convertedTemp = ftoc(temp);
        printf("Temperature in Celsius: %d\n", convertedTemp);
    } else {
        printf("Invalid choice!\n");
    }
    
    return 0;
}

int ctof(int celsius) {
    return (celsius * 9 / 5) + 32;
}

int ftoc(int fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}