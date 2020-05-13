#include<iostream>
#include<cstdlib>
#include"zoo.h"
using namespace std;
int main()
{
zoo ZooNN;
    elephant ele;
    zebra black;
    int nums;
    for (int i = 0; i < 10; i++)
    {   nums = rand() % 2;
        if (nums == 1) ZooNN.numofCage[i].inner(&black);
        if (nums == 0) ZooNN.numofCage[i].inner(&ele);}
    ZooNN.check();
    return 0;
}
