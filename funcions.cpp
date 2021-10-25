#include "functions.h"
using namespace std;
char filstyle(){
    char ch;
    cin >> ch;
    while (ch != 'c')
    {
        cout << "Invalid symbol,try again: ";
        cin >> ch;
    }
    return ch;
}
double sum(double *array,int size1){
    int nb=0;
    int nq = 0;
    int mn1sum = 0;
    for (int q = 1; q <= size1; q++)
    {
        if (array[q] < 0)
        {
            nq = q;
            break;
        }
    }
    for (int b = size1; b > 0; b--)
    {
        if (array[b] < 0)
        {
            nb = b;
            break;
        }
    }
    for (int w = nq + 1; w < nb; w++)
    {
        mn1sum += array[w];
    }
    return mn1sum;
}