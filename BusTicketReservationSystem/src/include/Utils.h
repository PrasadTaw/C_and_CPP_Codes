#include <bits/stdc++.h>
using namespace std;

static void printHeading(string header)
{
    cout << "\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t==========================================================\n";
    cout << "\t\t\t\t\t\t\t\t\t\t                       " << header << "                     \n";
    cout << "\t\t\t\t\t\t\t\t\t\t==========================================================\n\n";
}

static string generatePNR()
{
    string pnr;
    int i = 0, j = 0;
    i = rand() % 9 + 1; // First number should not be 0.
    for (int k = 1; k < 4; k++)
    {
        i = i * 10 + rand() % 10; // Generate the next 3 digits.
    }
    for (int k = 0; k < 4; k++)
    {
        j = j * 10 + rand() % 10; // Generate the 4 digits of the lower part.
    }
    // If you want the 8 digit number, save in long int
    long int randomNo = i * 1000 + j;
    pnr = "PNR" + to_string(randomNo);
    return pnr;
}

static string getCurrentDate()
{
    time_t t = time(NULL);
    tm *tPtr = localtime(&t);
    return to_string(tPtr->tm_mday) + "-" + to_string((tPtr->tm_mon) + 1) + "-" + to_string((tPtr->tm_year) + 1900);
}