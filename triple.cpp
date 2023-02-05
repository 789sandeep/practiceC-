#include <iostream>
using namespace std;
int main()
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    cout<<"enter the value greater then 0 and less then 16:"<<endl;
    int user;
    cin>>user;
    int pair = 0;
    int size = sizeof(array)/sizeof(array[0]);
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                    if (array[i] + array[j] + array[k] == user)
                    {
                        pair++;
                    }
            }
        }
    }
    cout<<pair;
    return 0;
}