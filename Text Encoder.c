//Write a program to read a text and encode in different format using the rules: the small letters alphabet will be converted into capital and vice versa.
#include <stdio.h>

void encodeText(char str[]); // Function prototype  

int main() {
    char str[100];
    printf("Enter a text: ");
    fgets(str, sizeof(str), stdin);
    encodeText(str);
    printf("Encoded text: %s", str);
    return 0;
}
void encodeText(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); // Convert to uppercase
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A'); // Convert to lowercase
        }
    }
}