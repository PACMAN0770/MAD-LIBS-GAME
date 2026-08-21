#include <stdio.h>
#include <string.h>

void strip_newline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

int main() {
    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";

    printf("Enter an adjective (description): ");
    fgets(adjective1, sizeof(adjective1), stdin);
    strip_newline(adjective1);

    printf("Enter a noun (animal or person): ");
    fgets(noun, sizeof(noun), stdin);
    strip_newline(noun);

    printf("Enter another adjective (description): ");
    fgets(adjective2, sizeof(adjective2), stdin);
    strip_newline(adjective2);

    printf("Enter a verb (ending w/ -ing): ");
    fgets(verb, sizeof(verb), stdin);
    strip_newline(verb);

    printf("Enter another adjective (description): ");
    fgets(adjective3, sizeof(adjective3), stdin);
    strip_newline(adjective3);

    printf("\nToday I saw a %s zoo.\n", adjective1);
    printf("In an exhibit, I saw a %s.\n", noun);
    printf("%s was %s and %s!\n", noun, verb, adjective2);
    printf("I was %s!\n", adjective3);

    return 0;
}
