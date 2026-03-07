//#include<iostream>
//#include<algorithm>
//#include<queue>
//#include<vector>
//using namespace std;
//int n;
//int sum = 0;
//class node {
//public:
//    char data;
//    int weight;
//    int p, lch, rch;
//    bool flag;
//    //        int deep=1;
//    node() {
//        p = -1;
//        
//    }
//    node(int w1)
//    {
//        weight = w1;
//        lch = rch = -1;
//    }
//};
//node hf[2000];
//class heap {
//public:
//    int w;
//    int i;
//    heap(int w1, int i1)
//    {
//        w = w1; i = i1;
//    }
//    bool operator<(const heap& s)const {
//        return w > s.w;
//    }
//};
//int cal(node a, int path) {
//    
//    if (a.lch == -1 && a.rch == -1)
//    {
//        return a.weight * path;
//    }
//    return cal(hf[a.lch], path + 1) + cal(hf[a.rch], path + 1);
//}
//int main() {
//
//
//    
//    int path = 0;
//    while (cin >> n)
//    {
//        priority_queue<heap>a;
//        for (int i = 0; i < n; i++)
//        {
//            int m;
//            cin >> m;
//            a.push(heap(m, i));
//            hf[i] = node(m);
//        }
//        for (int i = n; i < 2 * n - 1; i++)
//        {
//            heap m1 = a.top(); a.pop();
//            heap m2 = a.top(); a.pop();
//            hf[i].weight = hf[m1.i].weight + hf[m2.i].weight;
//            hf[m1.i].p = i;
//            hf[i].lch = m1.i;
//            hf[m1.i].flag = true;
//            hf[m2.i].p = i;
//            hf[i].rch = m2.i;
//            hf[m1.i].flag = false;
//            //        hf[i].deep++;
//            a.push(heap(hf[i].weight, i));
//        }
//       
//       cout<<cal(hf[2*n-2], path)<<"\n";
//    }
//
//    return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//const int INF = 0x3f3f3f3f;
//int length[50] = { 0 };
//class matgraph
//{
//public:
//	int edges[50][50];
//	int n, e;
//	string vexs[50];
//	void creat(int a[][50], int n, int e);
//};
//void matgraph::creat(int a[][50], int n, int e)
//{
//	this->n = n; this->e = e;
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//		{
//			this->edges[i][j] = a[i][j];
//			if (i != j && this->edges[i][j] == 0)
//				this->edges[i][j] = INF;
//		}
//			
//}
//void prim(matgraph g, int v)
//{
//	int lowcost[50];
//	int closest[50];
//	for (int i = 0; i < g.n; i++)
//	{
//		lowcost[i] = g.edges[v][i];
//		closest[i] = v;
//	}
//	for (int i = 1; i < g.n; i++)
//	{
//		int min = INF;
//		int k = -1;
//		for (int j = 0; j < g.n; j++)
//		{
//			if (lowcost[j] != 0 && lowcost[j] < min)
//			{
//				min = lowcost[j];
//				k = j;
//			}
//		}
//		for (int q = 0; q < 50; q++)
//		{
//			if (length[q] == 0)
//			{
//				length[q] = min;
//				break;
//			}
//		}
//		
//		lowcost[k] = 0;
//		for (int j = 0; j < g.n; j++)
//		{
//			if (lowcost[j] != 0 && g.edges[k][j] < lowcost[j])
//			{
//				lowcost[j] = g.edges[k][j];
//				closest[j] = k;
//			}
//		}
//	}
//}
//int main()
//{
//	int a[50][50] = { 0 };
//	matgraph m;
//	int n, e=0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> a[i][j];
//			if (a[i][j] != 0)
//				e++;
//		}		
//	}
//	m.creat(a, n, e);
//	prim(m, 0);
//	int sum = 0;
//	for (int i = 0; i < 50; i++)
//		sum += length[i];
//	cout << sum<<"\n";
//	return 0;
//}
#include<iostream>
#include<string>
#include<vector>
using namespace std;
const int MAXV = 105;
const int INF = 0x3f3f3f3f;
int ap[MAXV][MAXV] = { 0 };
class matgraph {
public:
	int edges[MAXV][MAXV];
	int n, e;
	string vexs[MAXV];
	void create(int a[][MAXV], int n, int e);
};
void matgraph::create(int a[][MAXV], int n, int e)
{
	this->n = n; this->e = e;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			this->edges[i][j] = a[i][j];
			if (i != j && a[i][j] == 0)
			{
				this->edges[i][j] = INF;
			}
		}
	}
	
}

void dijkstra(matgraph& g, int v,int end)
{
	int dist[MAXV] = {0};
	int path[MAXV];
	int s[MAXV];
	for (int i = 1; i <= g.n; i++)
	{
		dist[i] = g.edges[v][i];
		s[i] = { 0 };
		if (g.edges[v][i] != 0&&g.edges[v][i]<INF)
			path[i] = v;
		else
			path[i] = -1;
	}
	s[v] = 1;
	int mindis, u = -1;
	for (int i = 0; i < g.n - 1; i++)
	{
		mindis = INF;
		for (int j = 1; j <= g.n; j++)
		{
			if (s[j] == 0 && dist[j] < mindis)
			{
				u = j;
				mindis = dist[j];
			}
		}
		s[u] = 1;
		for (int j = 1; j <= g.n; j++)
		{
			if (s[j] == 0)
			{
				if (dist[u] + g.edges[u][j] < dist[j]&&g.edges[u][j]<INF)
				{
					dist[j] = dist[u] + g.edges[u][j];
					path[j] = u;
				}
			}
		}
	}
	if (s[end] == 1 && end != v) {
		cout << dist[end];
	}
	else cout << "STOP";
	
//	disp(dist, path, s, v, g.n, end);
}
int main()
{
	
	matgraph a;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int a1, b1, c1;
		cin >> a1>>b1>> c1;
		ap[a1][b1] = c1;
	}
	a.create(ap, n, m);
	int start, end;
	cin >> start >> end;
	dijkstra(a,start,end);
	return 0;
}