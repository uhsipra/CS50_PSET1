#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int digits = 0;
    int first_two_digits = 0;
    int first_digit = 0;
    long c_num = get_long("What is your credit card number?\n");
    printf("Number: %li\n", c_num);

    if (c_num >= 1000000000000000 && c_num <= 10000000000000000) //Checks to see if number is 16 digits
    {
        digits = 16;
        printf("digits: %i\n", digits);
    }
    else if (c_num >= 100000000000000 && c_num <= 1000000000000000) //Checks to see if number is 15 digits
    {
        digits = 15;
        printf("digits: %i\n", digits);
    }
    else if (c_num >= 1000000000000 && c_num <= 10000000000000)
    {
        digits = 13;
        printf("digits: %i\n", digits);
    }
    else
    {
        printf("INVALID\n");
    }

    // In this section write the code for the "Check_sum", after finding the # of digits but before checking the first
    // two digits

    int r_1, r_2;

    if (digits == 15)
    {
        int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15; // d2 is the second most digit from the left
        int ch_sum;
        d15 =  c_num % 10;
        d14 = (c_num / 10) % 10;
        d13 = (c_num / 100) % 10;
        d12 = (c_num / 1000) % 10;
        d11 = (c_num / 10000) % 10;
        d10 = (c_num / 100000) % 10;
        d9  = (c_num / 1000000) % 10;
        d8  = (c_num / 10000000) % 10;
        d7  = (c_num / 100000000) % 10;
        d6  = (c_num / 1000000000) % 10;
        d5  = (c_num / 10000000000) % 10;
        d4  = (c_num / 100000000000) % 10;
        d3  = (c_num / 1000000000000) % 10;
        d2  = (c_num / 10000000000000) % 10;
        d1  = (c_num / 100000000000000) % 10;

        printf("Every other digit from the right is: %i %i %i %i %i %i %i\n", d14, d12, d10, d8, d6, d4, d2);

        // NEED TO FIND ALL DIGITS, MAKE CODE TO SOLVE THE CHECK SUM
        d14 = d14 * 2, d12 = d12 * 2, d10 = d10 * 2, d8 = d8 * 2, d6 = d6 * 2, d4 = d4 * 2, d2 = d2 * 2;

        printf("Every other digit multiplied by 2 is: %i %i %i %i %i %i %i\n", d14, d12, d10, d8, d6, d4, d2);

        int d14_1, d14_2, d12_1, d12_2, d10_1, d10_2, d8_1, d8_2, d6_1, d6_2, d4_1, d4_2, d2_1, d2_2;

        if (d14 >= 10)
        {
            d14_1 = (d14 / 10) % 10;
            d14_2 = d14 % 10;
            printf("Every digit of d14 is: %i %i\n", d14_1, d14_2);
        }
        else
        {
            d14_1 = 0;
            d14_2 = d14;
            printf("Every digit of d14 is: %i %i\n", d14_1, d14_2);
        }

        if (d12 >= 10)
        {
            d12_1 = (d12 / 10) % 10;
            d12_2 = d12 % 10;
            printf("Every digit of d12 is: %i %i\n", d12_1, d12_2);
        }
        else
        {
            d12_1 = 0;
            d12_2 = d12;
            printf("Every digit of d12 is: %i %i\n", d12_1, d12_2);
        }

        if (d10 >= 10)
        {
            d10_1 = (d10 / 10) % 10;
            d10_2 = d10 % 10;
            printf("Every digit of d10 is: %i %i\n", d10_1, d10_2);
        }
        else
        {
            d10_1 = 0;
            d10_2 = d10;
            printf("Every digit of d10 is: %i %i\n", d10_1, d10_2);
        }

        if (d8 >= 10)
        {
            d8_1 = (d8 / 10) % 10;
            d8_2 = d8 % 10;
            printf("Every digit of d8 is: %i %i\n", d8_1, d8_2);
        }
        else
        {
            d8_1 = 0;
            d8_2 = d8;
            printf("Every digit of d8 is: %i %i\n", d8_1, d8_2);
        }

        if (d6 >= 10)
        {
            d6_1 = (d6 / 10) % 10;
            d6_2 = d6 % 10;
            printf("Every digit of d6 is: %i %i\n", d6_1, d6_2);
        }
        else
        {
            d6_1 = 0;
            d6_2 = d6;
            printf("Every digit of d6 is: %i %i\n", d6_1, d6_2);
        }

        if (d4 >= 10)
        {
            d4_1 = (d4 / 10) % 10;
            d4_2 = d4 % 10;
            printf("Every digit of d4 is: %i %i\n", d4_1, d4_2);
        }
        else
        {
            d4_1 = 0;
            d4_2 = d4;
            printf("Every digit of d4 is: %i %i\n", d4_1, d4_2);
        }

        if (d2 >= 10)
        {
            d2_1 = (d2 / 10) % 10;
            d2_2 = d2 % 10;
            printf("Every digit of d2 is: %i %i\n", d2_1, d2_2);
        }
        else
        {
            d2_1 = 0;
            d2_2 = d2;
            printf("Every digit of d2 is: %i %i\n", d2_1, d2_2);
        }

        //Need to add up the digits of each number that was multiplied by 2

        int r = d14_1 + d14_2 + d12_1 + d12_2 + d10_1 + d10_2 + d8_1 + d8_2 + d6_1 + d6_2 + d4_1 + d4_2 + d2_1 +d2_2;
        r = r + d15 + d13 + d11 + d9 + d7 + d5 + d3 + d1;

        if (r >= 10)
        {
            r_1 = (r / 10) % 10;
            r_2 = r % 10;
        }
        else
        {
            r_1 = 0;
            r_2 = r;
        }

        if (r_2 == 0)
        {
            printf("Last digit of check sum is %i therefore passed\n", r_2);
        }
        else
        {
            printf("Last digit of check sum is %i therefore does not pass\n", r_2);
            printf("INVALID\n");
        }
    }

    if (digits == 16)
    {
        int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16; // d2 is the second most digit from the left
        int ch_sum;

        d16 =  c_num % 10;
        d15 = (c_num / 10) % 10;
        d14 = (c_num / 100) % 10;
        d13 = (c_num / 1000) % 10;
        d12 = (c_num / 10000) % 10;
        d11 = (c_num / 100000) % 10;
        d10 = (c_num / 1000000) % 10;
        d9  = (c_num / 10000000) % 10;
        d8  = (c_num / 100000000) % 10;
        d7  = (c_num / 1000000000) % 10;
        d6  = (c_num / 10000000000) % 10;
        d5  = (c_num / 100000000000) % 10;
        d4  = (c_num / 1000000000000) % 10;
        d3  = (c_num / 10000000000000) % 10;
        d2  = (c_num / 100000000000000) % 10;
        d1  = (c_num / 1000000000000000) % 10;

        printf("Every other digit from the right is: %i %i %i %i %i %i %i %i\n", d15, d13, d11, d9, d7, d5, d3, d1);

        // NEED TO FIND ALL DIGITS, MAKE CODE TO SOLVE THE CHECK SUM
        d15 = d15 * 2, d13 = d13 * 2, d11 = d11 * 2, d9 = d9 * 2, d7 = d7 * 2, d5 = d5 * 2, d3 = d3 * 2, d1 = d1 * 2;

        printf("Every other digit multiplied by 2 is: %i %i %i %i %i %i %i %i\n", d15, d13, d11, d9, d7, d5, d3, d1);

        int d15_1, d15_2, d13_1, d13_2, d11_1, d11_2, d9_1, d9_2, d7_1, d7_2, d5_1, d5_2, d3_1, d3_2, d1_1, d1_2;

        if (d15 >= 10)
        {
            d15_1 = (d15 / 10) % 10;
            d15_2 = d15 % 10;
            printf("Every digit of d15 is: %i %i\n", d15_1, d15_2);
        }
        else
        {
            d15_1 = 0;
            d15_2 = d15;
            printf("Every digit of d15 is: %i %i\n", d15_1, d15_2);
        }

        if (d13 >= 10)
        {
            d13_1 = (d13 / 10) % 10;
            d13_2 = d13 % 10;
            printf("Every digit of d13 is: %i %i\n", d13_1, d13_2);
        }
        else
        {
            d13_1 = 0;
            d13_2 = d13;
            printf("Every digit of d13 is: %i %i\n", d13_1, d13_2);
        }

        if (d11 >= 10)
        {
            d11_1 = (d11 / 10) % 10;
            d11_2 = d11 % 10;
            printf("Every digit of d11 is: %i %i\n", d11_1, d11_2);
        }
        else
        {
            d11_1 = 0;
            d11_2 = d11;
            printf("Every digit of d11 is: %i %i\n", d11_1, d11_2);
        }

        if (d9 >= 10)
        {
            d9_1 = (d9 / 10) % 10;
            d9_2 = d9 % 10;
            printf("Every digit of d9 is: %i %i\n", d9_1, d9_2);
        }
        else
        {
            d9_1 = 0;
            d9_2 = d9;
            printf("Every digit of d9 is: %i %i\n", d9_1, d9_2);
        }

        if (d7 >= 10)
        {
            d7_1 = (d7 / 10) % 10;
            d7_2 = d7 % 10;
            printf("Every digit of d7 is: %i %i\n", d7_1, d7_2);
        }
        else
        {
            d7_1 = 0;
            d7_2 = d7;
            printf("Every digit of d7 is: %i %i\n", d7_1, d7_2);
        }

        if (d5 >= 10)
        {
            d5_1 = (d5 / 10) % 10;
            d5_2 = d5 % 10;
            printf("Every digit of d5 is: %i %i\n", d5_1, d5_2);
        }
        else
        {
            d5_1 = 0;
            d5_2 = d5;
            printf("Every digit of d5 is: %i %i\n", d5_1, d5_2);
        }

        if (d3 >= 10)
        {
            d3_1 = (d3 / 10) % 10;
            d3_2 = d3 % 10;
            printf("Every digit of d3 is: %i %i\n", d3_1, d3_2);
        }
        else
        {
            d3_1 = 0;
            d3_2 = d3;
            printf("Every digit of d3 is: %i %i\n", d3_1, d3_2);
        }

        if (d1 >= 10)
        {
            d1_1 = (d1 / 10) % 10;
            d1_2 = d1 % 10;
            printf("Every digit of d1 is: %i %i\n", d1_1, d1_2);
        }
        else
        {
            d1_1 = 0;
            d1_2 = d1;
            printf("Every digit of d1 is: %i %i\n", d1_1, d1_2);
        }

        //Need to add up the digits of each number that was multiplied by 2

        int r = d15_1 + d15_2 + d13_1 + d13_2 + d11_1 + d11_2 + d9_1 + d9_2 + d7_1 + d7_2 + d5_1 + d5_2 + d3_1 + d3_2 +
                d1_1 + d1_2;
        r = r + d16 + d14 + d12 + d10 + d8 + d6 + d4 + d2;

        printf("Check Sum: %i\n", r);

        if (r >= 10)
        {
            r_1 = (r / 10) % 10;
            r_2 = r % 10;
        }
        else
        {
            r_1 = 0;
            r_2 = r;
        }

        if (r_2 == 0)
        {
            printf("Last digit of check sum is %i therefore passed\n", r_2);
        }
        else
        {
            printf("Last digit of check sum is %i therefore does not pass\n", r_2);
            printf("INVALID\n");
        }
    }

    if (digits == 13)
    {
        int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13; // d2 is the second most digit from the left
        int ch_sum;
        d13 =  c_num % 10;
        d12 = (c_num / 10) % 10;
        d11 = (c_num / 100) % 10;
        d10 = (c_num / 1000) % 10;
        d9  = (c_num / 10000) % 10;
        d8  = (c_num / 100000) % 10;
        d7  = (c_num / 1000000) % 10;
        d6  = (c_num / 10000000) % 10;
        d5  = (c_num / 100000000) % 10;
        d4  = (c_num / 1000000000) % 10;
        d3  = (c_num / 10000000000) % 10;
        d2  = (c_num / 100000000000) % 10;
        d1  = (c_num / 1000000000000) % 10;

        printf("Every other digit from the right is: %i %i %i %i %i %i\n", d12, d10, d8, d6, d4, d2);

        // NEED TO FIND ALL DIGITS, MAKE CODE TO SOLVE THE CHECK SUM
        d12 = d12 * 2, d10 = d10 * 2, d8 = d8 * 2, d6 = d6 * 2, d4 = d4 * 2, d2 = d2 * 2;

        printf("Every other digit multiplied by 2 is: %i %i %i %i %i %i\n", d12, d10, d8, d6, d4, d2);

        int d12_1, d12_2, d10_1, d10_2, d8_1, d8_2, d6_1, d6_2, d4_1, d4_2, d2_1, d2_2;


        if (d12 >= 10)
        {
            d12_1 = (d12 / 10) % 10;
            d12_2 = d12 % 10;
            printf("Every digit of d12 is: %i %i\n", d12_1, d12_2);
        }
        else
        {
            d12_1 = 0;
            d12_2 = d12;
            printf("Every digit of d12 is: %i %i\n", d12_1, d12_2);
        }

        if (d10 >= 10)
        {
            d10_1 = (d10 / 10) % 10;
            d10_2 = d10 % 10;
            printf("Every digit of d10 is: %i %i\n", d10_1, d10_2);
        }
        else
        {
            d10_1 = 0;
            d10_2 = d10;
            printf("Every digit of d10 is: %i %i\n", d10_1, d10_2);
        }

        if (d8 >= 10)
        {
            d8_1 = (d8 / 10) % 10;
            d8_2 = d8 % 10;
            printf("Every digit of d8 is: %i %i\n", d8_1, d8_2);
        }
        else
        {
            d8_1 = 0;
            d8_2 = d8;
            printf("Every digit of d8 is: %i %i\n", d8_1, d8_2);
        }

        if (d6 >= 10)
        {
            d6_1 = (d6 / 10) % 10;
            d6_2 = d6 % 10;
            printf("Every digit of d6 is: %i %i\n", d6_1, d6_2);
        }
        else
        {
            d6_1 = 0;
            d6_2 = d6;
            printf("Every digit of d6 is: %i %i\n", d6_1, d6_2);
        }

        if (d4 >= 10)
        {
            d4_1 = (d4 / 10) % 10;
            d4_2 = d4 % 10;
            printf("Every digit of d4 is: %i %i\n", d4_1, d4_2);
        }
        else
        {
            d4_1 = 0;
            d4_2 = d4;
            printf("Every digit of d4 is: %i %i\n", d4_1, d4_2);
        }

        if (d2 >= 10)
        {
            d2_1 = (d2 / 10) % 10;
            d2_2 = d2 % 10;
            printf("Every digit of d2 is: %i %i\n", d2_1, d2_2);
        }
        else
        {
            d2_1 = 0;
            d2_2 = d2;
            printf("Every digit of d2 is: %i %i\n", d2_1, d2_2);
        }

        //Need to add up the digits of each number that was multiplied by 2

        int r = d12_1 + d12_2 + d10_1 + d10_2 + d8_1 + d8_2 + d6_1 + d6_2 + d4_1 + d4_2 + d2_1 + d2_2;
        r = r + d13 + d11 + d9 + d7 + d5 + d3 + d1;

        if (r >= 10)
        {
            r_1 = (r / 10) % 10;
            r_2 = r % 10;
        }
        else
        {
            r_1 = 0;
            r_2 = r;
        }

        if (r_2 == 0)
        {
            printf("Last digit of check sum is %i therefore passed\n", r_2);
        }
        else
        {
            printf("Last digit of check sum is %i therefore does not pass\n", r_2);
            printf("INVALID\n");
        }

    }

    if (digits == 15 && r_2 == 0) // Checks to see if the card could be american express
    {
        first_two_digits = c_num / 10000000000000;
        printf("First two digits are: %i\n", first_two_digits);

        if (first_two_digits == 34 || first_two_digits == 37)
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }



    if (digits == 16 && r_2 == 0)  // Checks to see if the card is master card or visa
    {
        first_digit = c_num / 1000000000000000;
        first_two_digits = c_num / 100000000000000;
        printf("First two digits are: %i\n", first_two_digits);
        printf("First digit is: %i\n", first_digit);

        if (first_two_digits >= 51 && first_two_digits <= 55)
        {
            printf("MASTERCARD\n");
        }
        else if (first_digit == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }

    if (digits == 13 && r_2 == 0)
    {
        first_digit = c_num / 1000000000000;
        printf("First digit is: %i\n", first_digit);

        if (first_digit == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }

}