#include <iostream>

using namespace std;

int main()
{
    int s;
    float a,b;
    cout << "nhap a = ";cin>>a;

    cout << "nhap b = ";cin>>b;

    cout << "\n 1. de tinh tong \n 2. de tinh hieu \n 3. de tinh tich \n 4. de tinh thuong"<<endl;

    cout << "nhap so ban chon ";cin >>s;

    switch (s)
    {
        case 1:
        {
            cout << "a + b =" << a+b;
            break;
        }
        case 2:
        {
            cout << "a - b= " << a-b;
            break;
        }
        case 3:
        {
            cout << "a x b = " << a*b;
            break;
        }
        case 4:
        {
            cout << "a chia b = " << a/b;
            break;
        }


    }
    return 0;
}
