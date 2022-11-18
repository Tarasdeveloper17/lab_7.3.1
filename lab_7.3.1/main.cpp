#include <iostream>
#include <time.h>
using namespace std;
void createArray(int** arr, const int rowCount, const int colCount, const int Low,
 const int High)
{
    
 for (int i=0; i<rowCount; i++)
 for (int j=0; j<colCount; j++)
 arr[i][j] = Low + rand() % (High-Low+1);
    
}


void printArray(int** arr, const int rowCount, const int colCount)
{
    
 cout << endl;
 for (int i=0; i<rowCount; i++)
 {
 for (int j=0; j<colCount; j++)
 cout << arr[i][j]<<"  ";
 cout << endl;
 }
 cout << endl;
    
}





void maxElementOfTheMatrix(int** arr, const int rowCount, const int colCount)
{
    int count = 0;
    int maxElement= arr[0][0];


    for(int i = 0; i < rowCount; i++)
    {
        count = 0;
        for(int j = 0; j < colCount; j++)
        {
            if(arr[i][j] > maxElement)
                {
                   maxElement = arr[i][j];
                }
            if(maxElement == arr[i][j])
            {
                count++;
            }
//            if(count > (colCount / 2))
//            {
//                cout<<maxElement<<endl;
//            }
        }
    }

    cout<< "Max element: " <<maxElement<<endl;

}




int countRow(int** arr, const int rowCount , const int colCount)
{
    
    int count = 0;
    for(int i = 0; i < rowCount; i++)
    {
        for(int j = 0; j < colCount; j++)
        {
           if(arr[i][j] !=0)
           {
               count = 0;
           }
            else
                count++;
        }
    }
    
    return count;
}



int main()
{
    srand((unsigned)time(NULL));
 
    int Low = 0;
    
    int High = 9;
    
    int rowCount = 4;
    
    int colCount = 4;
    
    int **arr = new int*[rowCount];
    
    for (int i=0; i<rowCount; i++)
        
    arr[i] = new int[colCount];

    createArray(arr, rowCount, colCount, Low, High);
    maxElementOfTheMatrix(arr, rowCount, colCount);
    cout<< countRow(arr, rowCount, colCount);
    printArray(arr, rowCount, colCount);
    
    for (int i=0; i<rowCount; i++)
        
    delete [] arr[i];
    
    delete [] arr;
    
    return 0;

}
