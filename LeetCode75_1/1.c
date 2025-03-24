#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    char* word1 = "tessereyeshxgagprozlpunqanhwmitayqkdzqyhnieqosyrlidxxxcwlmolnvqopmrabpkyhdalcwfwpdheoxcfuiypwlfhbjuo";
    char* word2 = "rrotjhajpeggfjcifmuzyszjxyfomvczltlhazrtfotejmekkiaegiguabubojhqyudxctegfanffokbotqlwjsertqbhdophqkd";
    char* result = (char*)calloc(201,sizeof(char));
    if (result == NULL) return 1;
    int w1 = 0, w2 = 0, r = 0;
    bool w1b = false, w2b = false, fin = false;

    while (!fin) {
        if (word1[w1] != '\0') {
            result[r] = word1[w1];
            w1++;
            r++;
        }
        else {
            w1b = true;
        }
        if (word2[w2] != '\0') {
            result[r] = word2[w2];
            w2++;
            r++;
        }
        else {
            w2b = true;
        }
        if (w1b && w2b) fin = true;
    }
    printf("°á°ú: %s\n", result);
    free(result);
    return 0;
}