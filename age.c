#include <stdio.h>
#include <cs50.h> 

int main(void)
{
    string s = get_string("Enter your name: ");
    int age = get_int("Enter your age: ");
    int hund = (2021-age)+100;
    printf("%s will turn 100 years old in %d\n", s, hund);
}
