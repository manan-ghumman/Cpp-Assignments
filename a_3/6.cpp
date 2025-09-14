#include <iostream>
using namespace std;

int main()
{
    int a[50], fa[100], i, j, k, x = 0, n, ele, c;

    cout << "Input number of elements you want to input: ";
    cin >> n;

    cout << "Input Array's elements: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < n;)
    {
        ele = a[i];
        c = 0;


        for (j = 0; j < n; j++)
        {
            if (ele == a[j])
                c++;
        }

        fa[x++] = ele;
        fa[x++] = c;

      
        for (j = 0; j < n; j++)
        {
            if (ele == a[j])
            {
                for (k = j; k < n; k++)
                {
                    a[k] = a[k + 1];
                }
                n--;
                j--;
            }
        }
    }

    for (i = 0; i < x; i += 2)
    {
        cout << "| Element: " << fa[i] << "\tFrequency: " << fa[i + 1] << " |\n";
    }

    return 0;
}
