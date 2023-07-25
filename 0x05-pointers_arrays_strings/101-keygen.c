#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * generate_password - Generates a random password
 * @length: The length of the password to be generated
 *
 * Return: The generated password
 */
char *generate_password(int length) {
    char *password = (char *)malloc((length + 1) * sizeof(char));
    if (!password) {
        perror("Memory allocation failed.");
        exit(EXIT_FAILURE);
    }

    int i;
    for (i = 0; i < length; i++) {
        int type = rand() % 3;

        if (type == 0)
            password[i] = 'A' + rand() % 26;
        else if (type == 1)
            password[i] = 'a' + rand() % 26;
        else
            password[i] = '0' + rand() % 10;
    }

    password[length] = '\0';
    return password;
}

int main(void) {
    srand(time(NULL));

    int password_length = 10;

    char *password = generate_password(password_length);

    printf("Generated Password: %s\n", password);

    free(password);

    return 0;
}

