#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height = 0; // Initializing height by setting it to 0 //

    while (height < 1 || height > 8) // checks to ensure the height inputed is between 1 and 8 //
    {
        height = get_int("Please select a height between 1 and 8\n");
    }

    int q = 1;
    for (int i = 0; i < height; i++) //Creates new line for each iteration
    {
        for (int y = q; y < height; y++) //Prints Height-q amount of 'empty space' each iteration, left pyramid
        {
            printf(" ");
        }
        
        for (int j = height - q; j < height; j++) //Prints q amount of #'s each iteration, left pyramid
        {
            printf("#");
        }
        
        printf("  "); //Prints the double space between the two pyramids
        
        for (int r = height - q; r < height; r++) //Prints the pyramid to the right
        {
            printf("#");
        }

        q++;
        printf("\n");
    }
}