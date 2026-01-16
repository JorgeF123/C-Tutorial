#include <stdio.h>
#include <string.h>

int main(){

    // variables to store words for mad libs game
    char adjective1[30] = "";
    char adjective2[30] = "";
    char adjective3[30] = "";
    char noun[30] = "";
    char verb[30] = "";
    

    // get first adjective from user
    printf("Enter an adjective (description): ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1] = '\0';

    // get noun from user
    printf("Enter a noun (animal or person): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    // get second adjective from user
    printf("Enter an adjective (description): ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) - 1] = '\0';

    // get verb from user
    printf("Enter a verb (ending w/ -ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    // get third adjective from user
    printf("Enter an adjective (description): ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) - 1] = '\0';

    // display the mad libs story with user's words
    printf("\nToday i went to a %s zoo.\n",adjective1);
    printf("in an exhibit i saw a %s.\n",noun);
    printf("%s was %s and %s!\n",noun,adjective2,verb);
    printf("I was %s!\n",adjective3);

    return 0;
}