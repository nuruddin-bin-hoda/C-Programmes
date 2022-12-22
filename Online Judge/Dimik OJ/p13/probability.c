#include <stdio.h>
#include <string.h>

int words_count(char sen[]);
int find_factorial(int num);
int countOccurrences(char *str, char *toSearch);
int value_r(char *sentence, char *copySen);

int main(void)
{
    int T, words, probability, r;
    char sentence[200], copySen[200];

    scanf("%d", &T);

    while (T--)
    {
        scanf(" %[^\n]", sentence);
        strcpy(copySen, sentence);

        words = words_count(sentence);

        r = value_r(sentence, copySen);

        probability = find_factorial(words) / find_factorial(r);

        printf("1/%d", probability);
    }

    return 0;
}

// function to count the words
int words_count(char sen[])
{
    int i, count = 0;

    for (i = 0; sen[i] != '\0'; i++)
    {
        if (sen[i] == ' ' && sen[i + 1] != ' ')
            count++;
    }

    return count + 1;
}

// function to find factorial
int find_factorial(int num)
{
    int fac = 1;

    for (int i = num; i > 1; i--)
    {
        fac = fac * i;
    }

    return fac;
}

//  Get, total number of occurrences of a word in a string
int countOccurrences(char *s, char *w)
{
    int n, a[1000], i, j, k = 0, l, found = 0, t = 0;

    for (i = 0; s[i]; i++)
    {
        if (s[i] == ' ')
            a[k++] = i;
    }

    a[k++] = i;
    j = 0;

    for (i = 0; i < k; i++)
    {
        n = a[i] - j;

        if (n == strlen(w))
        {
            t = 0;

            for (l = 0; w[l]; l++)
            {
                if (s[l + j] == w[l])
                {
                    t++;
                }
            }

            if (t == strlen(w))
                found++;
        }

        j = a[i] + 1;
    }

    return found;
}

// value of r
int value_r(char *sentence, char *copySen)
{
    int w_count = 1, count = 0, i = 0;
    char *str_ptr[10];

    char *word = strtok(sentence, " ");
    while (word != NULL)
    {
        str_ptr[i] = word;
        i++;

        if (strlen(word) > 0)
            count++;

        word = strtok(NULL, " ");
    }

    for (int l = 0; l < count / 2; l++)
    {
        w_count = w_count * countOccurrences(copySen, str_ptr[l]);
    }

    return w_count;
}

// This problem wasn't solved