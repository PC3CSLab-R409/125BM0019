#include <stdio.h>
int ctof(int celsius); // Function prototype
int ftoc(int fahrenheit); // Function prototype
int main() {
    int choice, temp, convertedTemp;
    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%d", &temp);
        convertedTemp = ctof(temp);
        printf("Temperature in Fahrenheit: %d\n", convertedTemp);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%d", &temp);
        convertedTemp = ftoc(temp);
        printf("Temperature in Celsius: %d\n", convertedTemp);
    } else {
        printf("Invalid choice!\n");
    }
    
    return 0;
}