#include <stdio.h>

int main() {
    char ch, encrypted, decrypted;
    int key = 7;  // XOR encryption key

    printf("Enter a character to encrypt: ");
    scanf(" %c", &ch);

    // Encrypt the character
    encrypted = ch ^ key;
    printf("Encrypted character: %c\n", encrypted);

    // Decrypt the character
    decrypted = encrypted ^ key;
    printf("Decrypted character: %c\n", decrypted);

    return 0;
}
