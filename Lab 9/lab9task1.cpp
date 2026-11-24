#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Number of students: ";
    cin >> n;

    int* marks = new int[n];

    cout << "Enter " << n << " marks: ";

    int highest = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
        sum += marks[i];

        if (i == 0 || marks[i] > highest)
        {
            highest = marks[i];
        }
    }

    double average = (double)sum / n;

    cout << "\nAverage: " << average << endl;
    cout << "Highest: " << highest << endl;

    cout << "Above average: ";
    for (int i = 0; i < n; i++)
    {
        if (marks[i] > average)
        {
            cout << marks[i] << " ";
        }
    }
    cout << endl;

    delete[] marks;
    marks = nullptr;

    return 0;
}