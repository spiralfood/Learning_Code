#define _CRT_SECURE_NO_WARNINGS 0
//#include<iostream>
//using namespace std;
//
//class btnode {
//	char data;
//	btnode* lchild;
//	btnode* rchild;
//	btnode()
//	{
//		lchild = NULL;
//		rchild = NULL;
//	}
//	btnode(char d)
//	{
//		data = d;
//		lchild = rchild = NULL;
//	}
//};
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//// 二叉树节点结构体
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//// 从前序和后序遍历序列构建二叉树的辅助函数
//TreeNode* buildTreeHelper(vector<int>& preorder, int preStart, int preEnd, vector<int>& postorder, int postStart, int postEnd) {
//    if (preStart > preEnd || postStart > postEnd) {
//        return NULL;
//    }
//
//    TreeNode* root = new TreeNode(preorder[preStart]);
//
//    if (preStart == preEnd) {
//        return root;
//    }
//
//    int leftChildVal = preorder[preStart + 1];
//    int leftChildPostIndex;
//    for (leftChildPostIndex = postStart; leftChildPostIndex <= postEnd; leftChildPostIndex++) {
//        if (postorder[leftChildPostIndex] == leftChildVal) {
//            break;
//        }
//    }
//
//    int leftSubtreeSize = leftChildPostIndex - postStart + 1;
//
//    root->left = buildTreeHelper(preorder, preStart + 1, preStart + leftSubtreeSize, postorder, postStart, leftChildPostIndex);
//    root->right = buildTreeHelper(preorder, preStart + leftSubtreeSize + 1, preEnd, postorder, leftChildPostIndex + 1, postEnd - 1);
//
//    return root;
//}
//
//// 从前序和后序遍历序列构建二叉树
//TreeNode* buildTree(vector<int>& preorder, vector<int>& postorder) {
//    return buildTreeHelper(preorder, 0, preorder.size() - 1, postorder, 0, postorder.size() - 1);
//}
//
//// 中序遍历二叉树并存储结果
//void inorderTraversal(TreeNode* root, vector<int>& result) {
//    if (root == NULL) {
//        return;
//    }
//
//    inorderTraversal(root->left, result);
//    result.push_back(root->val);
//    inorderTraversal(root->right, result);
//}
//
//int main() {
//    int n;
//    cin >> n;
//
//    vector<int> preorder(n);
//    vector<int> postorder(n);
//
//    for (int i = 0; i < n; i++) {
//        cin >> preorder[i];
//    }
//
//    for (int i = 0; i < n; i++) {
//        cin >> postorder[i];
//    }
//
//    TreeNode* root = buildTree(preorder, postorder);
//
//    vector<int> inorder;
//    inorderTraversal(root, inorder);
//
//    // 输出结果
//    if (inorder.size() == n) {
//        cout << "Yes" << endl;
//    }
//    else {
//        cout << "No" << endl;
//    }
//
//    for (int i = 0; i < inorder.size(); i++) {
//        cout << inorder[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
//#include<iostream>
//using namespace std;
//void cal(int m)
//{
//	int ans = m;
//	for (int i = 2; i * i <= m; i++)
//	{
//		if (m % i == 0)
//		{
//			ans = ans * (i - 1) / i;
//			while (m % i==0) {
//				m = m / i;
//			}
//
//		}
//	}
//	if(m>1)
//		ans = ans * (m - 1) / m;
//	
//	cout << ans<<"\n";
//}
//int main()
//{
//	int n;
//	
//	while (cin >> n&&n!=0)
//	{
//		
//		cal(n);
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//// 计算欧拉函数φ(n)的值
//int eulerTotientFunction(int n) {
//	int result = n;
//	for (int i = 2; i * i <= n; i++)
//	{
//		if (n % i == 0)
//			result = result / i * (i - 1);
//		while (n % i == 0)
//		{
//			n /= i;
//		}
//	}
//	if (n > 1)result = result / n * (n - 1);
//	return result;
//}
//
//int main() {
//	int n;
//	while (cin >> n && n != 0) {
//		cout << eulerTotientFunction(n) << endl;
//	}
//	return 0;
//}
#include <iostream>
#include <vector>
using namespace std;
vector<int> in, pre, post;
bool unique = true;
void getIn(int preLeft, int preRight, int postLeft, int postRight) {
	if (preLeft == preRight) {
		in.push_back(pre[preLeft]);
		return;
	}
	if (pre[preLeft] == post[postRight]) {
		int i = preLeft + 1;
		while (i <= preRight && pre[i] != post[postRight - 1]) i++;
		if (i - preLeft > 1)
			getIn(preLeft + 1, i - 1, postLeft, postLeft + (i - preLeft - 1) - 1);
		else
			unique = false;

		in.push_back(post[postRight]);
		getIn(i, preRight, postLeft + (i - preLeft - 1), postRight - 1);

	}
}
int main() {
	int n;
	scanf("%d", &n);
	pre.resize(n), post.resize(n);
	for (int i = 0; i < n; i++)
		scanf("%d", &pre[i]);
	for (int i = 0; i < n; i++)
		scanf("%d", &post[i]);
	getIn(0, n - 1, 0, n - 1);
	printf("%s\n%d", unique == true ? "Yes" : "No", in[0]);
	for (int i = 1; i < in.size(); i++)
		printf(" %d", in[i]);
	printf("\n");
	return 0;
}