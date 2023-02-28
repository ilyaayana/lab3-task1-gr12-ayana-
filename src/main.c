#include <stdio.h>
#include <string.h>

int countLetter(char letter, char* sentence)
{
    int number = 0;
    for (int i = 0; i < strlen(sentence); i++)
    {
        if (sentence[i] == letter)
        {
            number++;
        }
    }
    return number;
}

void main(int argc, char* argv[])
{

    char* letter = argv[1];

    int totalNumber = 0;
    for (int i = 2; i < argc; i++)
    {
        totalNumber += countLetter(*letter, argv[i]);
    }

    printf("The total of number of occurences of letter %c is %d", *letter, totalNumber);

}
