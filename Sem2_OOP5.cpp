#include "Vector.h"
#include "Student.h"

int main()
{
    system("chcp 1251");

    int Length;

    do
    {
        cout << "Введите размер вектора" << endl;
        cin >> Length;
    } while (Length <= 0);

    Vector vector(Length);

    cin >> vector;

    cout << vector << endl;
}
