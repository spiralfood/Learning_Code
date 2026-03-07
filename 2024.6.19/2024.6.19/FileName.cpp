//#include<iostream>
//#include<vector>
//using namespace std;
//struct tree {
//	char data;
//	vector<tree*>sons;
//	tree()
//	{
//
//	}
//	tree(char a)
//	{
//		data = a;
//	}
//};
//int main()
//{
//	tree*t;
//	char a, b;
//	while (cin >> a >> b)
//	{
//		tree* t2 = new tree(b);
//		t =new tree(a);
//		t->sons.push_back(t2);
//	}
//	
//	return 0;
//}
//#include <iostream>
//#include <vector>
//#include <map>
//
//using namespace std;
//
//// 定义树的节点结构
//struct TreeNode {
//    char value;
//    vector<TreeNode*> children;
//    
//    TreeNode(char val) : value(val) {}
//};
//
//// 构建树
//TreeNode* buildTree(const vector<pair<char, char>>& edges) {
//    map<char, TreeNode*> nodeMap;
//
//    // 创建所有节点
//    for (const auto& edge : edges) {
//        if (nodeMap.find(edge.first) == nodeMap.end()) {
//            nodeMap[edge.first] = new TreeNode(edge.first);
//        }
//        if (nodeMap.find(edge.second) == nodeMap.end()) {
//            nodeMap[edge.second] = new TreeNode(edge.second);
//        }
//    }
//
//    // 添加子节点到父节点
//    for (const auto& edge : edges) {
//        nodeMap[edge.first]->children.push_back(nodeMap[edge.second]);
//    }
//
//    return nodeMap['A']; // 假设'A'是根节点
//}
//
//// 先根遍历函数
//void preOrderTraversal(TreeNode* node) {
//    if (node == nullptr) return;
//
//    cout << node->value << ' ';
//    for (TreeNode* child : node->children) {
//        preOrderTraversal(child);
//    }
//}
//
//int main() {
//    vector<pair<char, char>> edges;
//    char parent, child;
//
//    // 读取输入并存储边
//    while (cin >> parent >> child) {
//        if (cin.get() == '0')
//            break;
//        edges.push_back({ parent, child });
//    }
//
//    TreeNode* root = buildTree(edges);
//    preOrderTraversal(root);
//
//    return 0;
//}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct node {
	int data;
	vector<int>sons;
	int p = -1;
};
node tree[30];
bool flag[30];//判断放在哪
void check(int n) {
	char now = n + 'A';
	cout << now << " ";
	sort(tree[n].sons.begin(), tree[n].sons.end());
	for (int i = 0; i < tree[n].sons.size(); i++) {
		check(tree[n].sons[i]);
	}

}
int main() {
	ios::sync_with_stdio(false);
	int x=0;
	cin.tie(0); cout.tie(0);
	for (int i = 0; i < 25; i++) tree[i].data = i;
	char p, c;
	while (cin >> p >> c) {
		if (x==4)
			break;
		x++;
		tree[p - 'A'].sons.push_back(c - 'A');
		flag[p - 'A'] = 1;
		flag[c - 'A'] = 1;
		tree[c - 'A'].p = p - 'A';
	}
	int root = 0;
	for (int i = 0; i <= 25; i++) {
		if (tree[i].p == -1 && flag[i]) {
			root = i;
			//break;
		}
	}
	check(root);
	return 0;
}
