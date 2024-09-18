#include <stdio.h>
#include <time.h>
#include <string.h>

int main() {
    char name[50];
    time_t current_time;
    struct tm *local_time;

    // Demande le nom de l'utilisateur
    printf("Quel est votre nom ? ");
    fgets(name, sizeof(name), stdin);

    // Enlever le caractère de nouvelle ligne à la fin
    if (name[strlen(name) - 1] == '\n') {
        name[strlen(name) - 1] = '\0';
    }

    // Obtenir l'heure actuelle
    current_time = time(NULL);
    local_time = localtime(&current_time);

    // Affiche le message de salutation et l'heure actuelle
    printf("Bonjour, %s !\n", name);
    printf("Nous sommes le %02d/%02d/%d, il est %02d:%02d:%02d.\n",
           local_time->tm_mday, local_time->tm_mon + 1, local_time->tm_year + 1900,
           local_time->tm_hour, local_time->tm_min, local_time->tm_sec);

    return 0;
}
