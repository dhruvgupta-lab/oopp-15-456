#include <iostream>
using namespace std;

void usingReference(float &salary)
{
    salary = salary + (salary * 10 / 100);
}

void usingPointer(float *salary)
{
    *salary = *salary + (*salary * 10 / 100);
}

int main()
{
    float salary1 = 20000;
    float salary2 = 20000;

    usingReference(salary1);
    usingPointer(&salary2);

    cout << "Salary using reference: " << salary1 << endl;
    cout << "Salary using pointer: " << salary2 << endl;

    return 0;
}