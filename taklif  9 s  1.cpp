#include<iostream>
#define ARRAY_SIZE 10
using namespace std;

int main()
{
    int A[ARRAY_SIZE] = {1,9,14,25,36,40,44,51,65}, fl;
    cout<<"enter a number = ";
    cin>> A[9];
    for(int i = 1; i < ARRAY_SIZE; ++i)
    {
        for (int j = 0; j < (ARRAY_SIZE-i); ++j)
        {
            if (A[j]>A[j+1])
            {
                fl = A[j];
                A[j] = A[j+1];
                A[j+1] = fl;
            }
        }

    }
for(int i=0;i<10;i++)
{
    cout<<"," << A[i] << " ";
}

}