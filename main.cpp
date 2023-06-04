#include <iostream>
#define SIZE 5
using namespace std;

int** init_array(int size)
{
    srand(time(0));
    int** arr = new int* [size];
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = new int[size];
        for (size_t j = 0; j < SIZE; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }
    return arr;
}

double** init_array(double** arr)
{
    srand(time(0));
    for (size_t i = 0; i < SIZE; i++)
    {
        arr[i] = new double[SIZE];
        for (size_t j = 0; j < SIZE; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }
    return arr;
}

char** init_array(char** arr)
{
    srand(time(0));
    for (size_t i = 0; i < SIZE; i++)
    {
        arr[i] = new char[SIZE];
        for (size_t j = 0; j < SIZE; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }
    return arr;
}


//PRINT ARRAY

void print_array(int** arr)
{
    for (size_t i = 0; i < 200; i++)
    {
        for (size_t j = 0; j < 200; j++)
        {
            if (arr[i][j] != -33686019)
            {
                cout << arr[i][j] << " ";
            }
            else
            {
                break;
            }
        }
        cout << endl;
    } 
}

void print_array(double** arr)
{
    for (size_t i = 0; i < 200; i++)
    {
        for (size_t j = 0; j < 200; j++)
        {
            if (arr[i][j] != -33686019)
            {
                cout << arr[i][j] << " ";
            }
            else
            {
                break;
            }
        }
        cout << endl;
    }
}

void print_array(char** arr)
{
    for (size_t i = 0; i < 200; i++)
    {
        for (size_t j = 0; j < 200; j++)
        {
            if (arr[i][j] != -33686019)
            {
                cout << arr[i][j] << " ";
            }
            else
            {
                break;
            }
        }
        cout << endl;
    }
    cout << endl;
}
int main()
{
    int size = 5;
    int** arr = init_array(size);
    print_array(arr);






    //int matrix[SIZE][SIZE];
    ////Take input into Matrix
    //cout << "Enter elements into the matrix: \n";
    //for (int i = 0; i < SIZE; i++) {
    //    for (int j = 0; j < SIZE; j++) {
    //        cin >> matrix[i][j];
    //    }
    //}
    ////Output the diagonal elements
    //cout << "Diagonal Elements: \n";
    //for (int i = 0; i < SIZE; i++) {
    //    for (int j = 0; j < SIZE; j++) {
    //        if (i == j || i + j == SIZE - 1)
    //            cout << matrix[i][j] << "\t";
    //        else
    //            cout << " " << "\t";
    //    }
    //    cout << "\n";
    //}
    return 0;
}