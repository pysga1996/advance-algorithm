#include <d_array.h>

namespace d_array {

    void sumArrayDemo()
    {
        int a[100];
        int n;
        cout << "Enter array length:" << endl;
        cin >> n;
        for (int i = 0; i < n; i++){
            cout << "Enter element " << i << ":" << endl;
            cin >> a[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++){
            sum += a[i];
        }
        cout << "Sum of array: " << sum << endl;
    }
}
