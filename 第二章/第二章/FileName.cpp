#include<iostream>
using namespace std;
//【2018 统考真题 13分】给定一个含 n(n >= 1)个整数的数组，请设计一个在时间上尽可能高效
//的算法，找出数组中未出现的最小正整数。例如，数组 { -5, 3, 2, 3 }中未出现的最小正整数
// 是 1; 数组{ 1,2,3 }中未出现的最小正整数是4。要求:
//1)给出算法的基本设计思想。
//2)根据设计思想，采用C或C++语言描述算法，关键之处给出注释，
//3)说明你所设计算法的时间复杂度和空间复杂度。
int main()
{
	int a[100] = {0};
	int b[100] = { 0 };
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	//算法的实现
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
			b[a[i]] = 1;//将出现过的最小的正整数对应的b数组里标为1
	}
	for (int i = 1; i <=n; i++)
	{
		if (b[i] == 0)
		{
			cout << i;
			break;
		}

	}
	return 0;
}
//算法设计思想：将数组里对应的数存到另一个数组的下标所对应的，如果出现记为1，没有出现记为
// 0，这样只需要遍历一遍即可解决问题
//时间复杂度O（n），空间复杂度O（n）（理论来说，但实际上我的代码数组创建较大，所以空间复
// 杂度更大些）



//【2019统考真题】设线性表L=(a1,a2,a3,…,an-2,an-1,an)采用带头结点的单链表保存，链表中的
// 结点定义如下:
typedef struct node
{
	int data;
	struct node* next;
}NODE;
//请设计一个空间复杂度为O(1)且时间上尽可能高效的算法，重新排列L中的各结点，得到线性表
// L’ = （a1, an, a2, an - 1, a3, an - 2, …）。要求：
//1）给出算法的基本设计思想。
//2）根据设计思想，采用C或C++语言描述算法，关键之处给出注释。
//3）说明你所设计的算法的时间复杂度。

void change_list(NODE* h)
{
	NODE* p, * q, * r, * s;
	p = q = h;
	while (q->next != NULL)//寻找中间节点
	{
		p = p->next;//p走一步
		q = q->next;
		if (q->next != NULL)
			q = q->next;//q走两步
	}
	q = p->next;//p为中间节点，q为后半段的首节点
	p->next = NULL;
	while (q != NULL)
	{
		r = q->next;
		q->next = p->next;
		p->next = q;
		q = r;
	}
	s = h->next;//s指向前半段的第一个数据节点
	q = p->next;//q指向后半段第一个数据节点
	p->next = NULL;
	while (q != NULL)//依次插入到正确的位置
	{
		r = q->next;
		q->next = s->next;
		s->next = q;
		s = q->next;
		q = r;
	}
}
//算法设计思想
//1.找到中间节点
//2.后半部分倒置
//3.重新插入
//时间复杂度O（n）