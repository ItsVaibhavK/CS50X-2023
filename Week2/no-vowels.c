// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

string replace(string word);

int main(int argc, string argv[])
{
    //check for correct usage
    if (argc != 2)
    {
        printf("Incorrect usage: ./no-vowels word\n");
        return 1;
    }

    printf("%s\n", replace(argv[1]));
    return 0;
}

string replace(string word)
{
    int length = strlen(word);
    for (int i = 0; i < length; i++)
    {
        switch(word[i])
        {
            case 'a':
            word[i] = '6';
            break;

            case 'e':
            word[i] = '3';
            break;

            case 'i':
            word[i] = '1';
            break;

            case 'o':
            word[i] = '0';
            break;

            default:
            word[i] = word[i];
            break;
        }
    }

    return word;
}
