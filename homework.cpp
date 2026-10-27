# 《高级语言程序设计(C++语言)》实验报告

| 项目 | 内容 | 项目 | 内容 |
| :--- | :--- | :--- | :--- |
| **实验名称** | 第一次上机课实验 | **实验日期** | 2026年10月23日 |
| **实验地点** | 于刚宋晓楼A237 | **学号** | 2026302192042
| **专业** | 人工智能专业 | **指导老师** | 胡黔楠 |

---

## 一、实验目的
1. 掌握 C++ 的基本语法
2. 熟悉C++的分支，循环等基本语法

## 二、实验环境
- **操作系统**：Windows 11
- **开发工具**：Visual Studio Code
- **编程语言**：C++

## 三、实验过程及结果

### 题目1：企业奖金提成计算

**解答：代码**
#include <iostream>
using namespace std;

int main()
{
    double I, bonus;

    cout << "Input profit I (yuan): ";
    cin >> I;

    if (I <= 0)
        bonus = 0;
    else if (I <= 100000)
        bonus = I * 0.10;
    else if (I <= 200000)
        bonus = 100000 * 0.10 + (I - 100000) * 0.075;
    else if (I <= 400000)
        bonus = 100000 * 0.10 + 100000 * 0.075 + (I - 200000) * 0.05;
    else if (I <= 600000)
        bonus = 100000 * 0.10 + 100000 * 0.075 + 200000 * 0.05 + (I - 400000) * 0.03;
    else if (I <= 1000000)
        bonus = 100000 * 0.10 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (I - 600000) * 0.015;
    else
        bonus = 100000 * 0.10 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (I - 1000000) * 0.01;

    cout << "Bonus = " << bonus << " yuan" << endl;

    return 0;
}
 



![题目1运行结果]()

### 题目2：电影打分评语

**解答：代码**
#include <iostream>
using namespace std;

int main()
{
    int score;

    cout << "请输入电影打分（0~10）：";
    cin >> score;

    if (score >= 9 && score <= 10)
    {
        cout << "你认为电影经典" << endl;
    }
    else if (score >= 7 && score <= 8)
    {
        cout << "你认为电影非常好" << endl;
    }
    else if (score >= 5 && score <= 6)
    {
        cout << "你认为电影一般" << endl;
    }
    else if (score >= 0 && score < 5)
    {
        cout << "你认为电影烂片" << endl;
    }
    else
    {
        cout << "分数输入有误，请输入0~10之间的整数" << endl;
    }

    return 0;
}

![题目2运行结果]()

### 题目3：判断回文数

**解答：代码**
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "请输入一个整数：";
    cin >> n;

    if (n < 0)
    {
        cout << n << " 不是回文数" << endl;
        return 0;
    }

    int original = n;   
    int reversed = 0;   

    while (n > 0)
    {
        int digit = n % 10;              
        reversed = reversed * 10 + digit; 
        n = n / 10;                       
    }

    if (original == reversed)
        cout << original << " 是回文数" << endl;
    else
        cout << original << " 不是回文数" << endl;

    return 0;
}



![题目3运行结果]()

### 题目4：三位水仙花数

**解答：代码**
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "请输入一个三位数：";
    cin >> n;

    if (n < 100 || n > 999)
    {
        cout << "输入有误，请输入100~999之间的三位数" << endl;
    }
    else
    {
        int a = n / 100;
        int b = n / 10 % 10;
        int c = n % 10;

        if (a * a * a + b * b * b + c * c * c == n)
            cout << n << " 是水仙花数" << endl;
        else
            cout << n << " 不是水仙花数" << endl;
    }

    cout << "\n所有三位水仙花数：" << endl;
    for (int i = 100; i <= 999; i++)
    {
        int a = i / 100;
        int b = i / 10 % 10;
        int c = i % 10;

        if (a * a * a + b * b * b + c * c * c == i)
            cout << i << " ";
    }
    cout << endl;

    return 0;
}



![题目4运行结果]()

### 题目5：数列 a, aa, aaa... 求和

**解答：代码**
#include <iostream>
using namespace std;

int main()
{
    int n, a;
    cout << "请输入n和a：";
    cin >> n >> a;

    int term = 0;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        term = term * 10 + a;
        sum = sum + term;
    }

    cout << "数列和为：" << sum << endl;

    return 0;
}




![题目5运行结果]()

### 题目6：乘法口诀表

**解答：代码**
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << "*" << i << "=" << j * i << "\t";
        }
        cout << endl;
    }

    return 0;
}




![题目6运行结果]()
### 题目7：兔子数量

**解答：代码**
#include<iostream>
using namespace std;

int main(){
    long long a = 1,b = 1;

    cout<<"Month 1:"<<a<<"pairs"<<endl;
    cout<<"Month 2:"<<b<<"pairs"<<endl;

    for(int month = 3;month <= 20;month+=1){
        long long c = a + b;
        cout<<"Month "<<month<<":"<<c<<"pairs"<<endl;
        a = b;
        b = c;
    }
    return 0;
}


![题目7运行结果]()

### 题目8：猴子吃桃

**解答：代码**
#include <iostream>
using namespace std;

int main()
{
    int peach = 1;

    for (int day = 9; day >= 1; day--)
    {
        peach = (peach + 1) * 2;
    }

    cout << "第一天共摘了 " << peach << " 个桃子" << endl;

    return 0;
}

![题目8运行结果]()

实验总结：
