#include <stdio.h>

const int MAXLEN = 20;

int main()
{
    // Input
    char s[MAXLEN];
    for (int i=0; i<MAXLEN; i++){
        scanf("%c", &s[i]);
    }
    // Encrypt
    char encrypt_text(char plain_text[MAXLEN], int key){
        int cipher_text[MAXLEN];
        for (int i=0; i<MAXLEN; i++){
            cipher_text[i] = int plain_text[i] + key;
        }
        return cipher_text;
    }
    printf("%c", encrypt_text(s, 10));
    return 0;
}
