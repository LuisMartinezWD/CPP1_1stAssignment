#include"iostream"
#include"cstdio"
int main()
{
    //This is the assignment 2, There is only 1 main function so I am replacing the code in here every time, but all old code will be in their respective Homework Files
    //Big Shoutout to my boy Tyrone for the help, I was really confused on this assignment, but he cleared it up with me
    for (int n = 1; n < 1001; n++)
    {
        int cnt = 0;

        if (n <= 1)
            printf("%d is NOT a prime number\n", n);
        else {

            // Check for divisors from 1 to n
            for (int i = 1; i <= n; i++)
            {

                // Check how many number is divisible
                // by n
                if (n % i == 0)
                    cnt++;
            }

            // If n is divisible by more than 2 numbers
            // then it is not prime
            if (cnt > 2)
                printf("%d is NOT a prime number\n", n);

            // else it is prime
            else
                printf("%d is a prime number\n", n);
        }
    }
}