// one func for all function to get only one memory location
// Concept of this -> operator
#include <iostream>
using namespace std;
class operations
{
private:
    int a, b;

public:
    void getAandB(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void add()
    {
        cout << "Add = " << a + b << endl;
    }

public:
    void sub()
    {
        cout << "Sub = " << a - b << endl;
    }
    void mul()
    {
        cout << "Mul = " << a * b << endl;
    }
};
int main()
{
    int a, b;
    cout << "Enter a & b = ";
    cin >> a >> b;
    operations obj;
    obj.getAandB(a, b);
    obj.add();
    obj.sub();
    obj.mul();
}