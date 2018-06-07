#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int numberGenerator(int table[], int count)
{
    for(int i = 0; i < count; i++)
        table[i] = (rand() % 21) +10;

    return 0;
}

void printTable(int table[], int count)
{
    for(int i = 0; i < count; i++)
        cout << table[i] << " ";

    cout << endl;
}

void printTableBackward(int table[], int count)
{
    for(int i = 9; i >= 0; i--)
        cout << table[i] << " ";

    cout << endl;
}

int findMin (int table[], int count)
{
    int index;

    for(int min = 10; min <= 30; min++)
    {
        for(index = 0; index < count; index++)
            if(table[index] == min)
                return min;
    }
}

int findMax (int table[], int count)
{
    int index;

    for(int max = 30; max >= 10; max--)
    {
        for(index = 0; index < count; index++)
            if(table[index] == max)
                return max;
    }
}

void printMinMax(int fMin, int fMax)
{
    cout << "Min.: " << fMin << endl;
    cout << "Max.: " << fMax << endl;
}

int main()
{
    srand(time(NULL));
    int table[10];

    numberGenerator(table, 10);
    printTable(table, 10);
    printTableBackward(table, 10);

    int fMin = findMin(table, 10);
    int fMax = findMax(table, 10);
    printMinMax( fMin, fMax );

    return 0;
}
