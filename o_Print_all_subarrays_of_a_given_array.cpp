#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n ; i++)
    {
        int size;
        cin >> size;
        int arr[size];
        for(int x=0; x<size ; x++)
        {
            cin >> arr[x];
        }
        for(int j=0; j<size ; j++)
        {
            for(int k=j; k<size ; k++)
            {
                for(int l=j; l<=k ; l++)
                {
                    cout << arr[l] << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}
