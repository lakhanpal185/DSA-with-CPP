#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "hello";
    char str2[20] = "world";

    // strlen()
    printf("Length of str1: %d\n", strlen(str1));

    // strcpy()
    strcpy(str1, str2);
    printf("str1 after copying from str2: %s\n", str1);

    // strcat()
    strcat(str1, "!!");
    printf("str1 after concatenation: %s\n", str1);

    // strcmp()
    int cmp = strcmp(str1, str2);
    if (cmp == 0) {
        printf("str1 and str2 are equal\n");
    } else if (cmp < 0) {
        printf("str1 is less than str2\n");
    } else {
        printf("str1 is greater than str2\n");
    }

    // strchr()
    char *ptr = strchr(str1, 'o');
    printf("First occurrence of 'o' in str1: %s\n", ptr);

    // strstr()
    ptr = strstr(str1, "rld");
    printf("First occurrence of 'rld' in str1: %s\n", ptr);

    // strtok()
    char sentence[] = "This is a sentence.";
    char *token = strtok(sentence, " ");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    // memset()
    int nums[5] = {1, 2, 3, 4, 5};
    memset(nums, 0, sizeof(nums));
    for (int i = 0; i < 5; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    // memcpy()
    char dest[20];
    memcpy(dest, str2, strlen(str2) + 1);
    printf("dest after copying from str2: %s\n", dest);

    return 0;
}
