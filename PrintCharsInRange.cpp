/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;



int main()
{
    int num1, num2;
    //string convert;

    cout << "Enter the ASCII code that is the lower bound [32 through 126]: ";
    cin >> num1;
    
    if(num1 < 32)
    {
        cout << "error" << endl;
        
    }
    else
    {
    cout << "Enter the ASCII code that is the upper bound [" << num1 << " through 126]: ";
    cin >> num2;

    cout << "\nThe characters with ASCII values in range " << num1 << " through " << num2 << " are: " << endl;
    //cout << "\n";
    
        for  (int i = num1, line = 0; i <= num2; i++, line ++)
        {
        //convert += char(i);

            if ((line % 15) == 0)
            {
                line = 0;
                cout << endl;
                //cout << convert << endl;
                //convert = "";
            }
        
            cout << static_cast<char>(i) << endl;
        }

    }

    
    //cout << wtv << endl;

    return 0;
}


