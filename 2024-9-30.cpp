//#include<iostream>
//using namespace std;
//void f(int a, char b);
//void f(char a, int b);
//int main()
//{
//    f(1, 'a');
//    f('a', 1);
//    return 0;
//}
//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int a = 0;
//
//    //引用：b和c是a的别名
//    int& b = a;
//    int& c = b;
//    cout << "a = " << a << endl;
//    cout << "b = " << b << endl;
//    cout << "c = " << c << endl;
//    cout << endl;
//
//    //也可以给别名b取别名，d相当于还是a的别名
//    int& d = b;
//    cout << "d = " << d << endl;
//    cout << endl;
//
//    ++d;
//    //++d，相当于a,b,c也++
//    cout << "a = " << a << endl;
//    cout << "b = " << b << endl;
//    cout << "c = " << c << endl;
//    cout << "d = " << d << endl;
//    cout << endl;
//
//    //b,c,d都是a的别名，都共享一块内存空间，取地址都是一样的
//    cout << &a << endl;
//    cout << &b << endl;
//    cout << &c << endl;
//    cout << &d << endl;
//
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int a = 0;
//    double& b = a;
//
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int a = 1;
//    int* b = &a;
//    int*& c = b;
//    //b,c共享一块内存空间，b和c都指向a
//    cout << b << endl;
//    cout << c << endl;
//
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int a = 10;
//
//    //编译报错："ra": 必须初始化引用
//    int& ra;
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int a = 10;
//    int& b = a;
//    int c = 20;
//    // 这里并非让b引⽤c，因为C++引用不能改变指向，
//    // 这里是⼀个赋值
//    b = c;
//    
//    cout << a << endl;
//    cout << b << endl;
//    cout << endl;
//    cout << &a << endl;
//    cout << &b << endl;
//    cout << &c << endl;
//    return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//    int a = 10;
//    const int& b = a;
//    a = 20;
//    cout << a << endl;
//    cout << b << endl;
//
//    return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//    const int a = 10;
//    const int& b = a;
//    //const int是常量整数类型，不可修改
//    //int是整数类型，可以修改，但是如果引用对象都不能修改，那么就不可能通过修改引用的值去修改它所绑定的对象的值
//    //因为引用c是int类型，而引用对象a是const int类型，这里触发了权限放大，所以报错
//    int& c = a;
//    return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//    int a = 10;
//    int& b = a;
//    int& c = a * 3;
//}

//#include<iostream>
//using namespace std;
//
//int main() {
//    int x = 10;
//    int y = 20;
//    const int* p = &x; // p 是一个指向常量整数的指针，指向 x  
//
//    // 修改 p 指向的地址（可以）  
//    p = &y; // 现在 p 指向 y  
//
//    // 尝试通过 p 修改所指向的整数的值（错误）  
//    // *p = 5; // 这将导致编译错误，因为 p 指向的是 const int  
//
//    cout << p << endl;
//    cout << &y << endl;
//
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main() {
//    int x = 10;
//    int y = 20;
//    int* const p = &x; // p 是一个常量指针，指向 x  
//
//    // 尝试修改 p 指向的地址（错误）  
//    // p = &y; // 这将导致编译错误  
//
//    // 修改 p 指向的整数的值（可以）  
//    *p = 5; // 现在 x 的值是 5  
//
//    cout << p << endl;
//    cout << &x << endl;
//    cout << &y << endl;
//    cout << endl;
//    cout << *p << endl;
//
//    return 0;
//}

//#include<iostream>
//using namespace std;
//void Swap(int& a, int& b)
//{
//    int temp = a;
//    a = b;
//    b = temp;
//}
//int main()
//{
//    int x = 1, y = 2;
//    Swap(x, y);
//
//    cout << x << " " << y << endl;
//
//    return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
////定义链表（结点）的结构
//
//typedef int SLTDataType;
//
//typedef struct SListNode {
//    SLTDataType data;
//    struct SListNode* next;
//}SLTNode, * SLNode;
////申请新结点
//SLTNode* SLTbuyNode(SLTDataType x)
//{
//    //使用malloc创建新结点，因为malloc的返回值类型是void*，使用这里还需要强行转换为SLTNode*指针类型
//    SLTNode* nownode = (SLTNode*)malloc(sizeof(SLTNode));
//    if (nownode == NULL)//申请失败
//    {
//        perror("malloc fail!");//打印错误信息
//        exit(1);//异常退出
//    }
//    //申请成功
//    nownode->data = x;
//    nownode->next = NULL;
//
//    return nownode;//返回这个新结点
//}
////尾插
//void SLTPushBack(SLNode& pphead, SLTDataType x)
//{
//    //assert(pphead);//传入的地址不能为空
//    SLTNode* nownode = SLTbuyNode(x);//申请新结点
//    if (pphead == NULL)//链表为空的情况
//    {
//        pphead = nownode;//申请的新结点就是头结点
//    }
//    else
//    {
//        //创建新变量pcur将*pphead赋值给pcur，再进行循环遍历操作，这样头结点指针不会发生变化
//        SLTNode* pcur = pphead;
//        //找到尾结点
//        while (pcur->next)
//        {
//            pcur = pcur->next;
//        }
//        pcur->next = nownode;//将尾结点的next指向node，尾插成功
//    }
//}
//int main()
//{
//    SLNode plist = NULL;
//    SLTPushBack(plist, 1);
//    SLTPushBack(plist, 2);
//    SLTPushBack(plist, 3);
//    printf("%d\n",plist->data);
//    printf("%d\n", plist->next->data);
//    printf("%d\n", plist->next->next->data);
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//int& addOne(int& num) {
//    num++;
//    return num;
//}
//
//int main() {
//    int x = 5;
//    int& result = addOne(x);
//    cout <<  result << endl;
//
//    return 0;
//}

//#include <iostream>  
//using namespace std;
//
//int& test() {
//    static int a = 20;
//    return a;
//}
//
//int main() {
//    int& ref = test();
//    cout << "ref = " << ref << endl;
//    ref = 1000;
//    cout  << ref << endl;
//
//    return 0;
//}
// 
//#include <iostream>  
//using namespace std;
//
//int& test(int a) {
//    return a;
//}
//
//int main() {
//
//    int a = 10;
//    int& ref = test(a);
//
//    cout << ref << endl;
//    cout << ref << endl;
//    
//    return 0;
//}
//#include<iostream>
//using namespace std;
//int& badReturnExample() {
//    int a = 10;
//    return a;
//}
//
//int main() {
//    int& ref = badReturnExample();
//    std::cout << ref << std::endl;
//    std::cout << ref << std::endl;
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//int& func(int x)
//{
//    return x;
//}
//
//int main()
//{
//    int a = 10;
//    int& ret = func(a);
//
//    cout << ret << endl;
//    cout << ret << endl;
//
//    return 0;
//}
//#include <iostream>  
//using namespace std;
//
//const int& test() {
//    static int a = 10;
//    return a;
//}
//
//int main() {
//
//    const int& ref = test();
//    cout << ref << endl;
//    cout << ref << endl;
//
//    return 0;
//}
//#include <iostream>  
//using namespace std;
//class MyClass {
//public:
//    int& getValue() {
//        return data;
//    }
//private:
//    int data = 5;
//};
//
//int main() {
//    MyClass obj;
//    int& ref = obj.getValue();
//    cout << obj.getValue() << endl;
//    ref = 10;
//    cout << obj.getValue() << endl;
//    return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//    //引用
//    int a = 10;
//    int& ra = a;
//
//    //指针
//    int b = 20;
//    int* pb = &b;
//
//    return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//    //引用
//    int a = 10;
//    int& ra = a;
//    cout << sizeof(ra) << endl;
//    //指针
//    int b = 20;
//    int* pb = &b;
//    cout << sizeof(pb) << endl;
//    return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//    //引用
//    int a = 10;
//    int& ra = a;
//    cout << ra << endl;
//    ++ra;
//    cout << ra << endl;
//    cout << endl;
//    //指针
//    int b = 20;
//    int* pb = &b;
//    cout << pb << endl;
//    ++pb;
//    cout << pb << endl;
//    return 0;
//}

#include<iostream>
using namespace std;
int main()
{

    //引用
    int a = 10;
    int& ra = a;
    cout << ra << endl;

    //指针
    int b = 20;
    int* pb = &b;
    cout << *pb << endl;

    return 0;
}
