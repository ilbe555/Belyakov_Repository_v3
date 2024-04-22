#include <iostream>
using namespace std;
float EnterNumberA(float A)
{

}
float EnterNumberB(float B)
{

}
float OperationMultip(float A, float B, float res)
{
    res = A * B;
    return res;
}
float OperationDiv(float A, float B, float res)
{

}
int main()
{
    float A = 0, B = 0, res = 0;
    int num = -1;
    cout << "1. Enter a number A" << endl;
    cout << "2. Enter a number B" << endl;
    cout << "3. Perform the operation '*'" << endl;
    cout << "4. Perform the operation '/'" << endl;
    cout << endl << "Please enter the number of the desired function or 0 if you want to close the app:" << endl;
    while (num != 0)
    {
        cin >> num;
        switch (num)
        {
        case 1:
            cout << "A = ";
            A = EnterNumberA(A);
            cout << endl;
            break;
        case 2:
            cout << "B = ";
            B = EnterNumberB(B);
            cout << endl;
            break;
        case 3:
            res = OperationMultip(A, B, res);
            cout << "A * B = ";
            cout << res << endl;
            break;
        case 4:
            res = OperationDiv(A, B, res);
            cout << "A / B = ";
            cout << res << endl;
            break;
        default:
            num = 0;
            break;
        }
    }
}