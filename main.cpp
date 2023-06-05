#include <iostream>
#define SIZE 5
using namespace std;

//INIT ARRAY
int** initArray(int** arr, int size)
{
    srand(time(0));
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = new int[size];
        for (size_t j = 0; j < size; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }
    return arr;
}
double** initArray(double** arr, int size)
{
    srand(time(0));
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = new double[size];
        for (size_t j = 0; j < size; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }
    return arr;
}
char** initArray(char** arr, int size)
{
    srand(time(0));
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = new char[size];
        for (size_t j = 0; j < size; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }
    return arr;
}


//PRINT ARRAY
void printArray(int** arr, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void printArray(double** arr, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void printArray(char** arr, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

//MAX MAIN DIAGONAL ARRAY
int maxMainDiagonal(int** arr, int size)
{
    int max = 0;
    for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i == j/* || i + j == size - 1*/)
                {
                    if (arr[i][j] > max)
                    {
                        max = arr[i][j];
                    }
                }                  
            }
        }
    return max;
}
double maxMainDiagonal(double** arr, int size)
{
    double max = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j || i + j == size - 1)
            {
                if (arr[i][j] > max)
                {
                    max = arr[i][j];
                }
            }
        }
    }
    return max;
}
char maxMainDiagonal(char** arr, int size)
{
    char max = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j || i + j == size - 1)
            {
                if (arr[i][j] > max)
                {
                    max = arr[i][j];
                }
            }
        }
    }
    return max;
}

//MIN MAIN DIAGONAL ARRAY
int minMainDiagonal(int** arr, int size)
{
    int min = 10;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j/* || i + j == size - 1*/)
            {
                if (arr[i][j] < min)
                {
                    min = arr[i][j];
                }
            }
        }
    }
    return min;
}
double minMainDiagonal(double** arr, int size)
{
    double min = 10;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j || i + j == size - 1)
            {
                if (arr[i][j] < min)
                {
                    min = arr[i][j];
                }
            }            
        }
    }
    return min;
}
char minMainDiagonal(char** arr, int size)
{
    char min = 10;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j || i + j == size - 1)
            {
                if (arr[i][j] < min)
                {
                    min = arr[i][j];
                }
            }
        }
    }
    return min;
}


int main()
{
    int size = 5;
    int** arr = new int* [size];
    arr = initArray(arr, size);
    cout << "Print array: " << endl;
    printArray(arr, size);
    cout << "Main diagonal max: ";
    int max = maxMainDiagonal(arr, size);
    cout << max << endl;
    cout << "Main diagonal min: ";
    int min = minMainDiagonal(arr, size);
    cout << min << endl;
















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