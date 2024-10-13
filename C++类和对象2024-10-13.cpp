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
//	// 这里只是声明，没有开空间
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	// Date类实例化出对象d1和d2
//	Date d1;
//	Date d2;
//	// d1.Init(&d1, 2024, 3, 31);
//	d1.Init(2024, 3, 31);
//	d1.Print();
//	d2.Init(2024, 7, 5);
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
//		//this->_year = year;
//		this->_month = month;
//		this->_day = day;
//	}
//	void Print()
//{
//	cout << _year << "/" << _month << "/" << _day << endl;
//}
//private:
//	// 这里只是声明，没有开空间
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	// Date类实例化出对象d1和d2
//	Date d1;
//	Date d2;
//	d1.Init(2024, 3, 31);
//	d1.Print();
//
//	d2.Init(2024, 10, 12);
//	d2.Print();
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class MyClass
//{
//public:
//	void Init(int num)
//	{
//		this->num = num;
//	}
//private:
//	int num;
//};
//int main()
//{
//	
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class MyClass {
//public:
//    int data = 0;
//
//    MyClass& addValue(int val) {
//        data += val;
//        return *this;
//    }
//};
//
//int main() {
//    MyClass obj;
//    obj.addValue(5).addValue(10);
//    cout << obj.data;
//    return 0;
//}

//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	void Print()
//	{
//		cout << "A::Print()" << endl;
//	}
//private:
//	int _a;
//};
//int main()
//{
//	A* p = nullptr;
//	p->Print();
//	return 0;
//}

#include<iostream>
using namespace std;
class A
{
public:
	void Print()
	{
		cout << "A::Print()" << endl;
		cout << _a << endl;
	}
private:
	int _a;
};
int main()
{
	A* p = nullptr;
	p->Print();
	return 0;
}
