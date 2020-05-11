// unit4_1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,P7};

class CPU {
private:
    CPU_Rank rank;
    int frequency;
    float voltage;
public:
    CPU(CPU_Rank r, int f, float v) {
        rank = r;
        frequency = f;
        voltage = v;
        cout << "构造了一个CPU" << endl;
    }
    ~CPU() {
        cout << "析构了一个CPU" << endl;
    }
    CPU_Rank GetRank()const { return rank; }
    int GetFrequency()const { return frequency; }
    float GetVoltage()const { return voltage; }
    void SetRank(CPU_Rank r) { rank = r; }
    void SetFrequency(int f) { frequency = f; }
    void SetVoltage(float v) { voltage = v; }

    void Run() { cout << "启动了CPU" << endl; return 0; }
    void Stop() { cout << "停止了CPU" << endl; return 0; }
};
int main()
{
    CPU a(P6, 300, 2.8);
    a.Run;
    a.Stop;

    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
