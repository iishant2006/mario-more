#include <stdio.h>

int main(){
    int h;
    printf("Enter the height for the pyramid: ");
    scanf("%d", &h);

    // Gotta reprompt the stubborn user
    for (; h<2 ;){
        printf("Enter the height for the pyramid: ");
        scanf("%d", &h);
    }


    // i = rows
    // j = column for left triangle
    // p = column for right triangle

    for (int i = 1; i<=h; i++){
        int spaces = h - i;

        // Drawing the initial left to right triangle
        for (int k = 1; k<= spaces; k++){
                printf(" ");
            }
        for (int j = 1; j<=i; j++){
            printf("#");
        }

        printf(" "); // A Space as a separation bw them

        // Repeating the same triangle but from left to right further
        for (int p = 1; p<=i; p++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}