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

int main(int argc, char* argv[])
{
    if(argc <3)
    {
      printf("Error: not enough arguments");
      return -1;
    }
    char* letter = argv[1];

    printf("the letter: %c",*letter);
  
    printf("\nsentences:\n");
    int totalNumber = 0;
    for (int i = 2; i < argc; i++)
    {
        printf("%s\n",argv[i]);
        totalNumber += countLetter(*letter, argv[i]);
    }

    printf("\nThe total of number of occurences of letter %c is %d", *letter, totalNumber);

    return 0;

}
