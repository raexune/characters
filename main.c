#include <stdbool.h>
#include <stdio.h>

int main()
{
    char character;

    printf("Please enter any ASCII character: ");
    scanf("%c", &character);
    printf("You entered %c\n", character);


    // is numeric

    bool numeric = false;

    if(character >= '0' && character <= '9'){
        numeric = true;

    }
    printf("Is numeric: %d\n", numeric);

    // is upper case

    bool upper = false;

    if(character >= 'A' && character <= 'Z'){
        upper = true;
    }

    printf("Is upper: %d\n", upper);

    // is lower case

    bool lower = false;

    if(character >= 'a' && character <= 'z'){
        lower = true;
    }

    printf("Is lower: %d\n", lower);

    // is alpha

    bool alpha = false;

    if(upper || lower){
        alpha = true;
    }

    printf("Is alpha: %d\n", alpha);

    // is alpha numeric

    bool alpha_numeric = false;

    if(upper || lower || numeric){
        alpha_numeric = true;
    }

    printf("Is alpha numeric: %d\n", alpha_numeric);

    // to upper case

    char upper_case_character = character;

    if(lower){
        upper_case_character = character - 32;
        printf("New Character: %c", upper_case_character);
    }

    // to lower case

    char lower_case_character = character;

    if(upper){
        lower_case_character = character + 32;
        printf("New Character: %c", lower_case_character);
    }

    return 0;
}
