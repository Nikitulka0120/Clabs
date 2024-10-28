#include <stdio.h>
#include <string.h>

int main() {
    char string[500];
    int indexes[50], max_indexes[50];
    int max_length = 0, new_length = 0, j = 0, i = 0;
    
    printf("Enter: ");
    fgets(string, sizeof(string), stdin);

    while (string[i] != '\0') {
        if (string[i] != ' ' && string[i] != '\n') {
            indexes[j++] = i;
        } else {
            new_length = j;
            if (new_length > max_length) {
                max_length = new_length;
                for (int k = 0; k < j; k++) {
                    max_indexes[k] = indexes[k];
                }
            }
            j = 0;
        }
        i++;
    }

    for (int l = 0; l < max_length; l++) {
        string[max_indexes[l]] = 'x';
    }

    printf("New string: %s\n", string);

}
