#include <iostream>
using namespace std;
int main()
{
    int row;
    int columns;

    cout << " Enter the number of rows and columns: ";
    cin >> row ;


    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=row; j++)
        {
            cout << "* ";
        }
        cout << endl;

    }


}