#include <iostream>
#include <iomanip>
#include <fixed.h>
#include <cmath>
#include <typeinfo>

using namespace std;

int main() {
    cout << "Hello World!" << endl;
    fixed32<16> a(M_PI);
    fixed32<17> b(9.654);
    fixed32<18> c = a*b;
    fixed32<24> d = a+b+c;
    fixed32<24> e = b/a;

    cout << typeid(e).name() << endl;

    cout << "M_PI*9.654 resulted in " << c.to_double();
    cout << ", should be " << (M_PI*9.654) << "." << endl;

    cout << "M_PI*9.654 + M_PI + 9.654 resulted in " << d.to_double();
    cout << ", should be " << (M_PI*9.654+M_PI+9.654) << "." << endl;

    cout << "9.654/M_PI resulted in " << e.to_double();
    cout << ", should be " << (9.654/M_PI) << "." << endl;

    return 0;
}
