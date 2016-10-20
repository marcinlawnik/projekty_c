
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sing_break() {
    int milliseconds = 1800;
    struct timespec time;
    time.tv_sec = milliseconds / 1000;
    time.tv_nsec = (milliseconds % 1000) * 1000000;
    nanosleep(&time, NULL);
}

void read_words (FILE *fp) {
    char * line = NULL;
    size_t len = 0;
    ssize_t read;
    while ((read = getline(&line, &len, fp)) != -1) {
        if(read == 1) {
            /* Refren */
            printf("Hej, ha! Kolejkę nalej!\n");
            sing_break();
            printf("Hej, ha! Kielichy wznieśmy!\n");
            sing_break();
            printf("To zrobi doskonale\n"); 
            sing_break();
            printf("Morskim opowieściom.\n");
            sing_break();
        } else {
            printf("%s", line);
            sing_break();
        }
    }
}

int main (){
    FILE *fp;
    fp = fopen("opowiesci.txt", "r");

    read_words(fp);

    return 0;
}
