#include <iostream>
using namespace std;
int main()
{
    int array[] = {1, 2, 3, 1, 2, 4, 5, 3,5, 6};
    int size = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
                if (array[i] == array[j])
                {
                    array[i]=-1; 
                    array[j]=-1;
                }
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (array[i] > 0)
        {
            cout << array[i];
        }
        else{
            cout<<array[i];
        }
    }
    return 0;
}