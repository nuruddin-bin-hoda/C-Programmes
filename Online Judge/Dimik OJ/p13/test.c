#include <stdio.h>
#include <string.h>

int countOccurrences(char *str, char *toSearch);

int main(void)
{
    int i = 0, count = 0;
    char *str_ptr[10];
    char sentence[200] = "His mind was blown that there was nothing in";

    // scaning words and assign to string pointer array
    char *word = strtok(sentence, " ");
    while (word != NULL)
    {
        str_ptr[i] = word;
        i++;

        if (strlen(word) > 0)
            count++;

        word = strtok(NULL, " ");
    }
    printf("Count %d\n\n", count);

    for (i = 0; i < count; i++)
        printf("%s\n", str_ptr[i]);

    // count occurrences words number
    int w_count = countOccurrences(sentence, "was");

    printf("%d", w_count);

    return 0;
}

// get total number of occurrences of a word in a string

int countOccurrences(char *str, char *toSearch)
{
    int i, j, found, count;
    int stringLen, searchLen;

    stringLen = strlen(str);      // length of string
    searchLen = strlen(toSearch); // length of word to be searched

    count = 0;

    for (i = 0; i <= stringLen - searchLen; i++)
    {
        /* Match word with string */
        found = 1;
        for (j = 0; j < searchLen; j++)
        {
            if (str[i + j] != toSearch[j])
            {
                found = 0;
                break;
            }
        }

        if (found == 1)
            count++;
    }

    return count;
}