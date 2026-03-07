#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
int n;
int sum = 0;
class node {
public:
    char data;
    int weight;
    int p, lch, rch;
    bool flag;
    //        int deep=1;
    node() {
        p = -1;
        lch = rch = -1;
    }
    node(int w1)
    {
        weight = w1;
    }
};
node hf[2000];
class heap {
public:
    int w;
    int i;
    heap(int w1, int i1)
    {
        w = w1; i = i1;
    }
    bool operator<(const heap& s)const {
        return w > s.w;
    }
};
int cal(node a, int path) {
    if (a.lch == -1)
    {
        return;
    }
    if (a.lch == NULL && a.rch == NULL)
    {
        return a.weight * path;
    }
    return cal(a.lch)
}
int main() {


    priority_queue<heap>a;
    int path = 0;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            a.push(heap(m, i));
            hf[i] = node(m);
        }
        for (int i = n; i < 2 * n - 1; i++)
        {
            heap m1 = a.top(); a.pop();
            heap m2 = a.top(); a.pop();
            hf[i].weight = hf[m1.i].weight + hf[m2.i].weight;
            hf[m1.i].p = i;
            hf[i].lch = m1.i;
            hf[m1.i].flag = true;
            hf[m2.i].p = i;
            hf[i].rch = m2.i;
            hf[m1.i].flag = false;
            //        hf[i].deep++;
            a.push(heap(hf[i].weight, i));
        }
        cal(hf, path);
    }

    return 0;
}
