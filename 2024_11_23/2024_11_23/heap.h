#pragma once
#include<iostream>
#include<assert.h>
using namespace std;
typedef int HPDataType;
//堆的结构
struct heap
{
	HPDataType* arr;
	int size;//有效数据个数
	int capacity;//容量
};

void HPInit(heap* php);
void HPDestroy(heap* php);

//插入数据
void HPPush(heap* php, HPDataType x);
//删除堆顶数据
void HPPop(heap* php);

//判空
bool HPEmpty(heap* php);
//求size
int HPSize(heap* php);