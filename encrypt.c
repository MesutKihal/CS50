#include <stdio.h>

int main()
{
    // Input
    int MAXLEN;
    scanf("%i\n", &MAXLEN);
    char s[MAXLEN];
    scanf("%s\n", s);
    
    // Encrypt
    void encrypt_text(char plain_text[MAXLEN], int key){
        char cipher_text[MAXLEN];
        for (int i=0; i<MAXLEN; i++){
            int ch = (int)plain_text[i] + key;
            cipher_text[i] = (char) ch;
        }
        for (int j=0; j<MAXLEN; j++){
            printf("%c", cipher_text[j]);
        }
    }
    encrypt_text(s, 5);
    return 0;
}
