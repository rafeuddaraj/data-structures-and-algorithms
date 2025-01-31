#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[50];
    int size;
    cout << "Enter Size of Array: ";
    cin >> size;
    cout << "Enter Given Array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Array TRAVERSING
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    // Array INSERTION

    // int postion, value;
    // cout << "Enter Inserting Position: ";
    // cin >> postion;
    // cin >> value;

    // 1, 2, 4, 5, 6
    // pos = 2
    // val = 3
    // size - 1 ----> pos

    // Sortable for array for insertion
    // for (int i = size - 1; i >= postion; i--)
    // {
    //     arr[i + 1] = arr[i];
    // }

    // arr[postion] = value;

    // Non Sortable array insertion

    // arr[size] = arr[postion];
    // arr[postion] = value;

    // cout << "Insertion Values = ";
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // DELETION
    int deleteIndex;
    cout << "Enter Deletion Postion: ";
    cin >> deleteIndex;

    if (deleteIndex < 0 || size < deleteIndex)
    {
        cout << "Invalid Index" << endl;
        return 0;
    }
    else if (deleteIndex == size - 1)
    {
        size--;
    }
    else
    {
        for (int i = deleteIndex; i < size; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    cout << "Deletion values = ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}