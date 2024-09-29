//#include <iostream>
//#include <assert.h>
//using namespace std;
//// 半缺省
//void Func2(int a, int b = 10, int c = 20)
//{
//    cout << "a = " << a << endl;
//    cout << "b = " << b << endl;
//    cout << "c = " << c << endl << endl;
//}
//void Func3(int a, int b = 10, int c);
//void Func4(int a = 10, int b, int c);
//void Func5(int a = 10, int b, int c = 20);
//
//int main()
//{
//    Func2(1);
//    Func2(1, 2);
//    Func2(1, 2, 3);
//
//    return 0;
//}

//#include<iostream>
//using namespace std;
//// 1、参数类型不同
//void Add(int a, int b)
//{
//    cout << "a = " << a << endl;
//    cout << "b = " << b << endl;
//}
//void Add(double a, double b)
//{
//    cout << "a = " << a << endl;
//    cout << "b = " << b << endl << endl;
//}
//// 2、参数个数不同
//void f()
//{
//    cout << "f()" << endl;
//}
//void f(int a)
//{
//    cout << "f(int a)" << endl << endl;
//}
//// 3、参数类型顺序不同(等同于参数类型不同)
//void f1(int a, char b)
//{
//    cout << "f(int a,char b)" << endl;
//}
//void f1(char b, int a)
//{
//    cout << "f(char b, int a)" << endl << endl;
//}
//int main()
//{
//    Add(10, 20);
//    Add(10.1, 20.2);
//
//    f();
//    f(10);
//
//    f1(10, 'a');
//    f1('a', 10);
//
//    return 0;
//}
//#include<iostream>
//using namespace std;
//void f1()
//{
//    cout << "f()" << endl;
//}
//void f1(int a = 10)
//{
//    cout << "f(int a)" << endl;
//}
//int main()
//{
//    //f1(); 不能正常运行，编译器不知道调用哪一个函数
//    f1(1);//可以正常运行
//    return 0;
//}
//#include<iostream>
//using namespace std;
//void f()
//{
//    cout << "f()" << endl;
//}
//namespace MY {
//    void f()
//    {
//        cout << "f()" << endl;
//    }
//}
//int main()
//{
//    f();
//    MY::f();
//    return 0;
//}
//#include<iostream>
//using namespace std;
//void f(int a, double b);
//void f(double a,int b);
//int main()
//{
//    f(1,1.2);
//    f(1.2,1);
//    return 0;
//}
#include<iostream>
using namespace std;
void f(int a, char b);
void f(char a, int b);
int main()
{
    f(1, 'a');
    f('a', 1);
    return 0;
}
