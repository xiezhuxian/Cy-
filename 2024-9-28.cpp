//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//namespace MY {
//    int a = 0;
//    int b = 1;
//}
////展开命名空间中全部成员
//using namespace MY;
//int main()
//{
//    int a = 10;
//    printf("%d\n", a);
//    printf("%d\n", b);
//    return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;//日常训练和竞赛的时候可以全部展开，大型项目不推荐
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//
//    return 0;
//}
//#include <fstream>  
//#include <iostream>  
//
//int main() {
//    //std::ofstream outFile("E:\\文本文档\\离散.txt", std::ios_base::app); // 创建输出文件流对象，并尝试打开example.txt  
//    //if (outFile.is_open()) {
//    //    outFile << "This is a line.\n"; // 写入一行文本  
//    //    outFile << "This is another line.\n";
//    //    outFile.close(); // 关闭文件  
//    //}
//    //else {
//    //    std::cout << "Unable to open file";
//    //}
//    std::ofstream outFile("example.txt",std::ios_base::app);
//    return 0;
//}
// 
//#include <sstream>  
//#include <iostream>  
//#include <string>  
//
//int main() {
//    std::string data = "42, Hello, World!";
//    std::istringstream iss(data);
//    int number;
//    std::string word1, word2;
//    char comma1, comma2;
//
//    iss >> number >> comma1 >> word1 >> comma2 >> word2; // 解析字符串  
//
//    std::cout << "Number: " << number << ", Word1: " << word1 << ", Word2: " << word2 << std::endl;
//    return 0;
//}
//#include <iostream>
//#include <sstream>
//#include <string>
//
//int main() {
//    std::string str = "123 45.6 hello";
//    std::istringstream iss(str);
//
//    int num;
//    double dbl;
//    std::string word;
//
//    iss >> num >> dbl >> word;
//
//    std::cout << "Number: " << num << std::endl;
//    std::cout << "Double: " << dbl << std::endl;
//    std::cout << "Word: " << word << std::endl;
//
//    return 0;
//}
//#include <iostream>
//#include <sstream>
//#include <string>
//
//int main() {
//    std::ostringstream oss;
//
//    oss << "Number: " << 42 << ", Double: " << 3.14 << ", Word: " << "hello";
//
//    std::string result = oss.str();
//
//    std::cout << result << std::endl;
//
//    return 0;
//}

//#include <iostream>
//#include <sstream>
//#include <string>
//
//int main() {
//    std::istringstream iss("10 20");
//    int a, b;
//    iss >> a >> b;
//
//    std::ostringstream oss;
//    oss << "Sum: " << a + b; // 使用 << 操作符向 oss 中写入了一系列数据
//
//    std::cout << oss.str() << std::endl;
//
//    return 0;
//}

//#include <iostream>  
//#include <iomanip> // 必须包含此头文件以使用setprecision等操作符  
//
//int main() {
//    double pi = 3.141592653589793;
//    std::cout << std::fixed << std::setprecision(3) << pi << std::endl; // 输出：3.142  
//    std::cout << std::scientific << std::setprecision(5) << pi << std::endl; // 输出：3.14159e+00  
//    return 0;
//}
//#include <iostream>  
//#include <iomanip>  
//
//int main() {
//    int number = 42;
//    std::cout << std::setw(10) << number << std::endl; // 输出：       42（默认右对齐）  
//    std::cout << std::setw(10) << std::left << number << std::endl; // 输出：42       （左对齐）  
//    return 0;
//}
//#include <iostream>
//#include <iomanip>
//
//int main() {
//    int num = 10;
//    std::cout << std::setfill('*') << std::setw(5) << num << std::endl; // 输出***10
//    return 0;
//}
//#include <iostream>
//#include <iomanip>
//
//int main() {
//    int num = 123;
//    std::cout << std::setfill('*') << std::setw(10) << std::internal << num << std::endl;
//    return 0;
//}
//#include <iostream>  
//#include <iomanip>  
//
//int main() {
//    double numbers[] = { 1.23456, 7.89012, 3.14159 };
//    for (double num : numbers) {
//        std::cout << std::setw(10) << std::fixed << std::setprecision(3) << num << std::endl;
//    }
//    return 0;
//}
#include <iostream>  
#include <iomanip>  

int main() {
    double numbers[] = { 1.23456, 7.89012,3.14159 };
    for (double num : numbers)
    {
        std::cout << std::setw(10) << std::fixed << std::setprecision(3) << num << std::endl;
    }
    return 0;
}
