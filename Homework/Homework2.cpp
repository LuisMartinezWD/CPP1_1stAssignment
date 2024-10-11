#include"iostream"
#include"cstdio"
int main2()
{
    //This is the assignment 2, There is only 1 main function so I am replacing the code in here every time, but all old code will be in their respective Homework Files
    for (int n = 1; n < 100; n++)
    {
        int cnt = 0;

        if (n <= 1)
            printf("%d is NOT prime\n", n);
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
                printf("%d is NOT prime\n", n);

            // else it is prime
            else
                printf("%d is prime\n", n);
        }
    }
    return 0;
}