#include <iostream>

using namespace std;

const int Num = 8;

int main()
{
    int nums[Num]; 
    int total = 0;
    
    for (int i = 0; i < Num; i++) 
    {
        cout << "Por favor introduzca un número: "; 
        cin >> nums[i]; 
        total += nums[i]; 
    }
    
    cout << "El total de números es " << total << endl;
    return 0;
}