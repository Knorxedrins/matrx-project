#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> 

int main() {
    srand(time(NULL)); 
    
    printf("\033[2J"); 

    while (1) {
        for (int i = 0; i < 80; i++) {

            if (rand() % 5 == 0) {
                
                char random_char = (rand() % 93) + 33;
                
                printf("\033[1;32m%c", random_char);
            } else {
                printf(" ");
            }
        }
        printf("\n");
        usleep(50000); 
    }
    return 0;
}
