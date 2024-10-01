//C语言实现宏函数也会在预处理时替换展开，但是宏函数实现很复杂很容易出错的，且不方便调试，C++设计了inline目的就是替代C的宏函数。
// 可以通过汇编观察程序是否展开
// 有call Add语句就是没有展开，没有就是展开了
//#include<iostream>
//using namespace std;
//inline int Add(int x, int y)
//{
//    int ret = x + y;
//    ret += 1;
//    ret += 1;
//    ret += 1;
//
//    return ret;
//}
//int main()
//{
//    
//    int ret = Add(1, 2);
//
//    return 0;
//}

//#include<iostream>
//using namespace std;
//// 实现⼀个ADD宏函数的常⻅问题
////#define ADD(int a, int b) return a + b;
////#define ADD(a, b) a + b;
////#define ADD(a, b) (a + b)
//// 正确的宏实现
//#define ADD(a, b) ((a) + (b))
//// 1.为什么不能加分号?
//// 2.为什么要加外面的括号?
//// 3.为什么要加里面的括号?
//int main()
//{
//    int ret = ADD(1, 2);
//    cout << ADD(1, 2) << endl;
//    //1.如果加了分号，ADD(1, 2)相当于((a) + (b)); 因为;是一条语句结束的地方，输出的时候会报错
//
//    cout << ADD(1, 2) * 5 << endl;
//    //2.如果不加外面的括号，ADD(1, 2)相当于(a) + (b)，此时的结果为1+2*5=11，不是预想的结果为15
//
//    int x = 1, y = 2;
//    ADD(x & y, x | y);
//    //3.如果不加里面的括号，ADD(1, 2)相当于(a + b)，此时结果为(x&y+x|y),而符号+比符号&和|的优先级高，会先计算y+x的和，这样结果就不对了
//
//    return 0;
//}

//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//using namespace std;
//int Add()
//{
//    return 10;
//}
//int main()
//{
//    auto x = 5;       // x的类型是int  
//    auto y = 3.14;    // y的类型是double  
//    auto z = "Hello"; // z的类型是const char*（在C++11及更高版本中）
//    auto a = 'x';     //a的类型是chat
//    auto add = Add(); //add的类型是add
//    vector<string> t;
//    map<int, char> mp;
//
//    cout << typeid(x).name() << endl << endl;
//    cout << typeid(y).name() << endl << endl;
//    cout << typeid(z).name() << endl << endl;
//    cout << typeid(a).name() << endl << endl;
//    cout << typeid(add).name() << endl << endl;
//    cout << typeid(t).name() << endl << endl;
//    cout << typeid(mp).name() << endl << endl;
//
//    return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//    int num = 10;
//    int* ptr = &num;
//    auto p = ptr;
//    cout << ptr << endl;
//    cout << p << endl;
//    cout << typeid(ptr).name() << endl;
//    cout << typeid(p).name() << endl << endl;
//    auto* pp = ptr;
//    cout << pp << endl;
//    cout << typeid(pp).name() << endl;
//    return  0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//    int num = 10;
//    int& ref = num;
//
//    auto re = ref;
//    auto& r = ref;
//
//    return 0;
//}
//auto x = 1, y = 1.2, z = 'a';
//#include<iostream>
//using namespace std;
//int main()
//{
//    auto a = 1, b = 1.2, c = 'a';
//
//    cout << a << " " << b << " " << c << endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//int test(auto x = 1)
//{
//    return x;
//}
//int main()
//{
//    return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//    auto arr[3] = { 1,2,3 };
//    return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//    vector<int> vec = { 6, 7, 8, 9, 10 };
//    for (auto value : vec)
//    {
//        cout << value << " ";
//    }
//    cout << endl;
//    vector<int>::iterator it;
//    for (it = vec.begin(); it < vec.end(); it++)
//    {
//        *it += 10;
//        cout << *it << " ";
//    }
//    return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//    vector<int> vec = { 6, 7, 8, 9, 10 };
//    for (auto value : vec)
//    {
//        cout << value << " ";
//    }
//    cout << endl;
//    for (auto& it : vec)
//    {
//        it += 10;
//        cout << it << " ";
//    }
//    return 0;
//}

#include<iostream>
using namespace std;
void f(int x)
{
    cout << "f(int x)" << endl;
}
void f(int* ptr)
{
    cout << "f(int* ptr)" << endl;
}
int main()
{
    f(0);// 本想通过f(NULL)调用指针版本的f(int*)函数，但是由于NULL被定义成0，调用了f(intx)，因此与程序的初衷相悖。
    f(NULL);
    f((int*)NULL);
    // 编译报错：error C2665: “f”: 2 个重载中没有⼀个可以转换所有参数类型
    // f((void*)NULL);
    f(nullptr);
    return 0;
}
