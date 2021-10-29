#include <stdio.h>
#include <string.h>

int main()
{
    // Input
    char s[100];
    scanf("%s", s);
    
    // Encrypt
    void encrypt_text(char plain_text[], int key){
        int len = (int) strlen(plain_text);
        char cipher_text[len];
        int ch = 0;
        for (int i=0; i<len; i++){
            ch = (int) plain_text[i] + key;
            cipher_text[i] = (char) ch;
        }
        for (int i=0; i<len; i++){
            printf("%c", cipher_text[i]);
        }
    }
    encrypt_text(s, 5);
    return 0;
}
