/** Functions Project 04 - anagrams.c */

#include <stdio.h>
#include <ctype.h>

void read_word(int counts[26]);
void equal_array(int counts[26], int counts2[26]);

int main(void)
{
    int counts[26] = {0},
        counts2[26] = {0};

    read_word(counts);
    read_word(counts2);

    equal_array(counts, counts2);

    return 0;
}

void read_word(int counts[26])
{
    char ch;

    printf("Enter a word: ");

    while ((ch = getchar()) != '\n')
    {
        counts[tolower(ch) - 'a']++;
    }
}

void equal_array(int counts[26], int counts2[26])
{
    int i;

    for (i = 0; i < 26; i++)
    {
        if (counts[i] != counts2[i])
        {
            printf("Words are not anagrams.\n");
            return;
        }
    }

    printf("Words are anagrams.\n");
}