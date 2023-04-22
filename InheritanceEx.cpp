#include<iostream>
#include<math.h>
using namespace std;

class SimpleCalculator
{
    private:
        float num1, num2;   
    public:
        void setAB(float , float);
        float add();
        float subtract();
        float multiply();
        float divide();
        void show() {
            cout<<"inside SimpleCalculator"<<endl;
        }
};

void SimpleCalculator:: setAB(float a, float b) {
    num1 = a;
    num2 = b;
}

float SimpleCalculator:: add() {
    return num1 + num2;
}

float SimpleCalculator:: subtract() {
    return num1 - num2;
}

float SimpleCalculator:: multiply() {
    return num1 * num2;
}

float SimpleCalculator:: divide() {
    return num1 / num2;
}

class ScientificCalculator
{
    private:
        float num;
    public:
        void setN(float n) {
            num = n;
        }

        float sin() {
            return sinf(num); 
        }

        float cos() {
            return cosf(num);
        }

        float tan() {
            return tanf(num) ;
        }

        float sqrt() {
            return sqrtf(num);
        }
        void show() {
            cout<<"inside ScientificCalculator"<<endl;
        }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator {
    public:
        void show() {
            SimpleCalculator::show();
            ScientificCalculator::show();
        }
};




int main()
{
    SimpleCalculator myCalculator;
    myCalculator.setAB(4, 5);
    cout<< "USING SIMPLE CALCULATOR"<<endl;
    cout<< "sum is :"<< myCalculator.add() << endl;
    cout<< "diff is :"<< myCalculator.subtract() << endl;
    cout<< "multiplication is :"<< myCalculator.multiply() << endl;
    cout<< "division is :"<< myCalculator.divide() << endl;

    ScientificCalculator mySciCalculator;
    mySciCalculator.setN(4);
    cout<< "USING SCIENTIFIC CALCULATOR"<<endl;
    cout<< "sin : "<< mySciCalculator.sin()<<endl;
    cout<< "cos : "<< mySciCalculator.cos()<<endl;
    cout<< "tan : "<< mySciCalculator.tan()<<endl;
    cout<< "sqrt : "<< mySciCalculator.sqrt()<<endl;

    HybridCalculator myHybCalculator;
    myHybCalculator.setN(7);
    myHybCalculator.setAB(10, 99);
    cout<< "USING HYBRID CALCULATOR"<<endl;
    cout<< "sum is :"<< myHybCalculator.add() << endl;
    cout<< "diff is :"<< myHybCalculator.subtract() << endl;
    cout<< "multiplication is :"<< myHybCalculator.multiply() << endl;
    cout<< "division is :"<< myHybCalculator.divide() << endl;
    cout<< "sin : "<< myHybCalculator.sin()<<endl;
    cout<< "cos : "<< myHybCalculator.cos()<<endl;
    cout<< "tan : "<< myHybCalculator.tan()<<endl;
    cout<< "sqrt : "<< myHybCalculator.sqrt()<<endl;

    myCalculator.show();
    mySciCalculator.show();

    myHybCalculator.show();

    return 0;
}