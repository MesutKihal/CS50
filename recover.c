#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <cs50.h>
#include <string.h>
#include <stdbool.h>

// Define type BYTE
typedef uint8_t BYTE;

// Allocate a chunk of memory for buffer
BYTE buffer[512];

// Declare a function called isJPEG
bool isJPEG(void);

int main(int argc, char *argv[])
{
    // If the file cannot be opened return 1
    if (!fopen(argv[1], "r"))
    {
        printf("Cannot open %s", argv[1]);
        return 1;
    }
    if (argc < 1)
    {
        return 1;
    }
    // Open the file in read mode
    FILE *file = fopen(argv[1], "r");
    // Declaring other variables
    char filename[10];
    int count = 0;
    FILE *temp = NULL;
    // Start a fread loop
    while (fread(buffer, 512, 1, file))
    {
        if (isJPEG())
        {
            // If it is not the first jpeg then close the one before
            if (strcmp(filename, "") != 0)
            {
                fclose(temp);
            }
            // Formatting the jpeg filename
            snprintf(filename, 8, "%03d.jpg", count);
            // Opening a file in append mode
            temp = fopen(filename, "a");
            // Writing the buffer
            fwrite(&buffer, 512, 1, temp);
            count += 1;
        }
        else
        {
            // Keep appending buffers
            if (strcmp(filename, "") != 0)
            {
                fwrite(&buffer, 512, 1, temp);
            }
        }
    }
    return 0;
}

bool isJPEG(void)
{
    // Array of the fourth byte's possible values
    unsigned char fourth[16] = {0xe0, 0xe1, 0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea, 0xeb, 0xec, 0xed, 0xee, 0xef};
    // If buffer header correspond to the JPEG header return true
    if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff)
    {
        for (int i = 0; i < 16; i++)
        {
            if (buffer[3] == fourth[i])
            {
                return true;
                break;
            }
        }
    }
    else
    {
        return false;
    }
    // Return false if not
    return false;
}
