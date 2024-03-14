#include <iostream>
using namespace std;
//********************
// Declare Function Prototypes
//********************

// ******************************
// Implement all your functions here
// ******************************

void getTwoValues(int &begin, int &end);
int getNextPrime(int begin);
int getPrevPrime(int end);

int prime;

void getTwoValues (int &begin, int &end)
{
    cout << " Enter two values: " << endl;
    cin >> begin >> end;

    while (begin > end)
    {
        cout << " Enter two new values: " << endl;
        cin >> begin >> end;
    }
}

int getNextPrime(int begin)
{
    for (int i = begin++; i < 101; i++)
    {
        prime = 0;

        for(int j = 2; j < 101; j++)
        {
            if(i == j)
            {
                j++;
            }

            if (i % j == 0)
            {
                prime++;
            }
        }
        if(prime == 0)
        {
            cout << i << endl;

            i = 102;
        }
    }
    return prime;
}

int getPrevPrime(int end)
{
    for (int i = end--; i < 101; i--)
    {
        prime = 0;

        for (int j = 2; j < 101; j--)
        {
            if ( i == j)
            {
                j--;
            }
            if (i % j == 0)
            {
                prime--;
            }
        }
        if (prime == 0)
        {
            cout << "The previous prime number is: " << i << endl;
            prime = 1;
            i = -2;
        }
    }
    return prime;
}