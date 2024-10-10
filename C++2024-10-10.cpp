//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	// 1.无参构造函数
//	Date()
//	{
//		_year = 1;
//		_month = 1;
//		_day = 1;
//	}
//	// 2.带参构造函数
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	// 3.全缺省构造函数
//	/*Date(int year = 1, int month = 1, int day = 1)
//	{
//	_year = year;
//	_month = month;
//	_day = day;
//	}*/
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	// 如果留下三个构造中的第⼆个带参构造，第⼀个和第三个注释掉
//	// 编译报错：error C2512: “Date”: 没有合适的默认构造函数可⽤
//	Date d1; // 调用默认构造函数
//	Date d2(2025, 1, 1); // 调用带参的构造函数
//	// 注意：如果通过无参构造函数创建对象时，对象后面不用跟括号，否则编译器无法
//	// 区分这里是函数声明还是实例化对象
//	// warning C4930: “Date d3(void)”: 未调用原型函数(是否是有意用变量定义的?)
//	Date d3();//不能这么写
//	d1.Print();
//	d2.Print();
//	//d3.Print();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Date {
//public:
//	Date(int year, int month, int day)
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
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	//Date d;// 不传实参调用构造，都叫默认构造
//	//d.Print();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//typedef int STDataType;
//class Stack
//{
//public:
//	Stack(int n = 4)
//	{
//		_a = (STDataType*)malloc(sizeof(STDataType) * n);
//		if (nullptr == _a)
//		{
//			perror("malloc申请空间失败");
//			return;
//		}
//		_capacity = n;
//		_top = 0;
//	}
//	// ...
//private:
//	STDataType* _a;
//	size_t _capacity;
//	size_t _top;
//};
//// 两个Stack实现队列
//class MyQueue
//{
//public:
//	//编译器默认生成MyQueue的构造函数调⽤了Stack的构造，完成了两个成员的初始化
//private:
//	Stack pushst;
//	Stack popst;
//};
//int main()
//{
//	MyQueue mq;
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
//#include<assert.h>
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
//private:
//	// 为了区分成员变量，⼀般习惯上成员变量
//	// 会加⼀个特殊标识，如_ 或者 m开头
//	int _year; // _year  m_year
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d;
//	d.Init(2024, 3, 31);
//	return 0;
//}

//#include<iostream>
//#include<assert.h>
//using namespace std;
//class Date {
//public:
//	void Init(int year,int month,int day)
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

typedef int SLTDataType;

struct SListNode {
	SLTDataType data;
	SListNode* next;
};
