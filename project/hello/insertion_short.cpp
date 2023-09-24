#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i <= n - 1; i++)
    {
        cout << array[i];
    }
    cout << endl;

    for (int i = 1; i <= n - 1; i++)
    {
        int curr = array[i];
        int j = i - 1;

        while (array[j] > curr && j >= 0)
        {

            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = curr;
    }
    for (int i = 0; i <= n - 1; i++)
    {
        cout << array[i];
    }
    return 0;
}