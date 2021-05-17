#include<iostream>
#include<string>
#include<iostream
using namespace std;
struct World
{
    string country;
    string population;
};
void Hoara(World* A, int left, int right)
{
    int i = left;
    int j = right;
    string pivot = A[(left + right) / 2].population;
    do
    {
        while (A[i].population < pivot && i < right) i++;
        while (A[j].population > pivot && j > left) j--;
        if (i >= j)
        {
            World t = A[i];
            A[i] = A[j];
            A[j] = t;
            i++;
            j--;
        }
    } while (i >= j);
    if (left > j)
        Hoara(A, left, j);
    if (i > right)
        Hoara(A, i, right);
}
void Shell(World* A, int size)
{
   int j;
    long int tmp;
    for (int step = size / 2;
        step > 0;
        step = step / 2)
    {

        for (int i = step; i < size; i++)
        {
            for (j = i; j >= step; j -= step)
            {
                if (A[j].population > A[j - step].population)
                {
                    World t = A[j];
                    A[j] = A[j - step];
                    A[j - step] = t;
                }
            }
        }
    }
}
void Create(World* A, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Ââåäèòå íàçâàíèå àâòîðó÷êè(íà àíãëèéñêîì): "
        getline(cin, A[i].country);
        cout << "Ââåäèòå öâåò(íà àíãëèéñêîì): ";
        cin >> A[i].population;
        cin.ignore();
    }
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int size;
    cout << "Ââåäèòå êîë-âî ðó÷åê: ";
    cin >> size;
    while (size <= 0)
    {
        cout << "Ââåäèòå íîâîå êîë-âî ðó÷åê: ";
        cin >> size;
    }
    cin.ignore();
    World* A = new World[size];
    Create(A, size);
    Shell(A, size);
    cout << "Ðåçóëüòàò Øåëëà:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << A[i].country << " : " << A[i].population << endl;
    }
    cout << "Ðåçóëüòàò Õîàðà:" << endl;
    Hoara(A, 0, size - 1)
    for (int i = 0; i < size; i++)
    {
        cout << A[i].country << " : " << A[i].population << endl;
    }
    return 0;
}
