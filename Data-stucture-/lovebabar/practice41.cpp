#include <iostream>
using namespace std;
int tripletsum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size - 1; i++)
    {
        int j;
        for (j = 0; j < size - 1; j++)
        {
            int k;
            for(k= 0 ; k < size -1 ; k++){
                sum = arr[i] + arr[j] + arr[k];
            if (sum == 24)
                {
                    cout << "(" << arr[i] << " ," << arr[j]<< ","<< arr[k] << ")"
                         << ",";
                }
            }
            
        }
    }
    cout << endl;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[6] = {12, 3, 4, 1, 6, 9};

tripletsum(arr, 6);

printArray(arr, 6);

return 0;
}