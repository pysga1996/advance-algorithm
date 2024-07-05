#include <d_array.h>

namespace d_array {

    void squareArrayDemo()
    {
        int a[100];
        int n;
        cout << "Enter array length:" << endl;
        cin >> n;
        for (int i = 0; i < n; i++){
            cout << "Enter element " << i << ":" << endl;
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            a[i] = a[i]*a[i];
        }
        cout << "Square array is: ";
        for (int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
