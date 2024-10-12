//#include<iostream>
//#include<assert.h>
//using namespace std;
//class Date {
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d;
//	d.Init(2024, 10, 10);
//	return 0;
//}

//#include<iostream>
//#include<assert.h>
//using namespace std;
//
//class Stack //类名
//{
//	//类的主体
//public:	
//	//成员函数
//	void Init(int n = 4)
//	{
//		array = (int*)malloc(sizeof(int) * n);
//	    if (array == nullptr)
//		{
//			perror("malloc申请空间失败");
//			return;
//		}
//		capacity = n;
//		top = 0;
//	}
//	void Push(int x)
//	{
//		// ...扩容
//		array[top++] = x;
//	}
//	int Top()
//	{
//		assert(top > 0);
//		return array[top - 1];
//	}
//	void Destroy()
//	{
//		free(array);
//		array = nullptr;
//		top = capacity = 0;
//	}
//private:
//	//成员变量
//	int* array;
//	int capacity;
//	int top;
//
//}; //以分号结束
//
//int main()
//{
//	Stack st;
//	st.Init();
//
//	st.Push(1);
//	st.Push(2);
//
//	cout << st.Top() << endl;
//
//	st.Destroy();
//
//	Stack* st1;
//	st1 = (Stack*)malloc(sizeof(Stack));
//	st1->Init();
//
//	st1->Push(1);
//	st1->Push(2);
//
//	cout << st1->Top() << endl;
//	st1->Destroy();
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Stack
//{
//public:
//	// 成员函数
//	void Init(int n = 4);
//private:
//	// 成员变量
//	int* array;
//	int capacity;
//	int top;
//};
//// 声明和定义分离，需要指定类域
//void Stack::Init(int n)
//{
//	array = (int*)malloc(sizeof(int) * n);
//	if (nullptr == array)
//	{
//		perror("malloc申请空间失败");
//		return;
//	}
//	capacity = n;
//	top = 0;
//}
//int main()
//{
//	Stack st;
//	st.Init();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//private:
//	//这里的成员变量只是定义，没有开空间
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	/*Date::Init(2024, 10, 12);
//	Date::Print();*/
//	// Date类实例化出对象d1和d2
//	Date d1;
//	Date d2;
//	d1.Init(2021, 1, 29);
//	d1.Print();
//	d2.Init(2024, 10, 12);
//	d2.Print();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//	{
//		cout << _year << " " << _month << " " << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d;
//	cout << sizeof(d) << endl;
//	cout << sizeof(Date) << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Date1
//{
//public:
//	void Init()
//	{
//		
//	}
//	void Print()
//	{
//		
//	}
//};
//
//class Date2
//{
//
//};
//int main()
//{
//	Date1 d1;
//	cout << sizeof(d1) << endl;
//
//	Date2 d2;
//	cout << sizeof(d2) << endl;
//	return 0;
//}

#include<iostream>
using namespace std;

struct Date
{
	char x;
	int y;
};
int main()
{
	Date d;
	cout << sizeof(d) << endl;

	return 0;
}
