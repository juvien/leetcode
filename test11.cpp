#include <iostream>
#include <vector>
#include <string>
#include <bitset>
#include<stack>
#include<queue>
using namespace std;
/*int main(){
	string s;
	cin >> s;
	cout << s << endl;
	system("pause");
	return 0;
}*/

/*int  main(){
	string line;
	while (getline(cin, line))
		cout << line << endl;
	system("pause");
	return 0;
}*/

/*int main(){
	string st("the expense of spirit\n");
	cout << st.size() << endl;
	system("pause");
	return 0;
}*/

/*int main(){
	string s1("hello");
	string s2("world");
	string s3 = s1 +","+ "world";
	cout << s3 << endl;
	system("pause");
	return 0;
} */

/*int main(){
	string str("some string");
	for (int  ix = 0; ix != str.size(); ix++)
		cout << str[ix] <<endl ;
	system("pause");
	return 0;
};*/

/*
int main(){
	string s("hello,world!!!");
	int punct_cnt = 0;
	for (int index = 0; index != s.size(); index++)
		s[index] = toupper(s[index]);
		if (ispunct(s[index]))
			++punct_cnt;
	cout << s  << endl;
	system("pause");
	return 0;
} 
*/

/*int main(){
	int base, exponent;
	long result = 1;
	cout << "enter base and exponent:" << endl;
	cin >> base >> exponent;
	if (exponent < 0){
		cout << "exponent can't be smaller than 0" << endl;
		return -1;
	}
	if (exponent > 0){
		for (int cnt = 1; cnt < exponent; cnt++)
			result  *base;
	}
	cout << base << "raised to the power of " << exponent << ":" << result << endl;
	system("pause");
	return  0;
} */

/*int main()
{
	string result = "";
	string str;
	cout << "entre strings:" << endl;
	while (cin >> str)
		result = result + str;
	cout << "strigs is " << result << endl;
	system("pause");
	return 0;
}*/

/*int main()
{
	string word;
	vector<string> text;
	while (cin >> word){
		text.push_back(word);
	}
	for (auto i = text.begin(); i != text.end(); i++)
	{
		cout << *i << " ";
	}
	system("pause");
	return 0;
}*/

/*int main()
{
	vector<int> ivec;
	int ival;
	cout << "Enter numbers:" << endl;
	while (cin >> ival)
		ivec.push_back(ival);
	if (ivec.size() == 0)
	{
		cout << "No element !" << endl;
		return -1;
	}
	cout << "Sum of each pair of in ten vector:" << endl;
	for (int ix = 0; ix < ivec.size() - 1; ix = ix + 2)
	{
		cout << ivec[ix] + ivec[ix + 1] << endl;

	}
	if (ivec.size() % 2 != 0)
	{
		cout << endl << "the last ele has not been summed"
			<< "and its vaule is" << ivec[ivec.size() - 1] << endl;

	}
	system("pause");
	return 0;
}*/

/*int main()
{
	vector<string> text;
	string word;
	while (cin >> word)
		text.push_back(word);
	if (text.size() == 0)
	{
		cout << "No string!" << endl;
		return -1;
	}
	cout << "transform the element in the vector:" << endl;
	int cnt = 0;
	for (auto i = text.begin(); i != text.end(); i++)
	{
		for (auto inx = 0; inx != (*i).size(); inx++)
			if (islower((*i)[inx]))
				(*i)[inx] = toupper((*i)[inx]);
		cout << *i << " ";
		cnt++;
		if (cnt % 8 == 0)
			cout << endl;
	}
	system("pause");
	return 0;
}*/

/*int main()
{
	vector<int>::iterator iter;
	vector<int> ivec;
	for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix)
		ivec[ix] = 0;
	system("pause");
	return 0;
}*/

/*int main()
{
	vector <int> ivec;
	int ival;
	cout << "enter numbers:" << endl;
	while (cin >> ival)
	ivec.push_back(ival);
	if (ivec.size() == 0){
		cout << "No element" << endl;
		return -1;
	}
	cout << "sum of each pair of elements in the vector:" << endl;
	vector<int>::size_type cnt = 0;
	for (vector<int>::iterator iter = ivec.begin(); iter < ivec.end() - 1; iter = iter + 2)
	{
		cout << *iter + *(iter + 1) << endl;
		++cnt;
		if (cnt % 6 == 0)
			cout << endl;
		if (ivec.size() % 2 != 0)
			cout << endl << "the last ele has not been summed" << "and its value is" << *(ivec.end() - 1) << endl;
		system("pause");
		return 0;
	}
}*/

/*int main()
{
	vector<int> ivec;
	int ital;
	cout << "enter numbers:" << endl;
	while (cin >> ital)
	{
		ivec.push_back(ital);
		if (ivec.size() == 0)
			cout << "No element" << endl;
			
	}
	cout << "multiply 2 for each number" << endl;
	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
	{
		*iter = (*iter) * 2;
		cout << *iter << endl;   
		
	}
	system("pause");
	return 0;
}*/

/*int main()
{
	vector<int> ivec1(10, 20);
	vector<int> ivec2;
	for (vector <int>::iterator iter = ivec1.begin(); iter != ivec1.end(); ++iter)
		ivec2.push_back(*iter);
	for (auto i = ivec2.begin(); i != ivec2.end(); i++)
		cout << *i << endl;
	system("pause");
	return 0;
}*/

/*int main()
{
	const int arr_size = 6;
	int ia[arr_size];
	for (int ix = 0; ix != arr_size; ++ix)
	{
		ia[ix] = ix + 1;
		cout << ia[ix] << endl;
	}
	system("pause");
	return 0;
}*/

/*int main()
{
	string s("hello,world");
	string s2("C++");
	string *sp = &s;
	cout << *sp << endl;
	cout << sp << endl;
	*sp = "goodbye";
	cout << sp << endl;
	sp = &s2;
	cout << *sp << endl;
	cout << sp << endl;
	system("pause");
	return 0;

}*/

/*int main()
{
	int ival = 1024, ival2 = 2048;
	int *pi = &ival, *pi2 = &ival2;
	int **ppi = &pi;
	cout << **ppi << endl;
	cout << pi << endl;
	cout << *pi << endl;
	cout << pi2 << endl;
	cout << *pi2 << endl;
	pi = pi2;
	cout << pi << endl;
	cout << *pi << endl;
	system("pause");
	return 0;
}*/

/*int main()
{
	int ia[] = { 0, 2, 4, 6, 8 };
	int *ip = ia;
	int *ip2 = ip + 4;
	cout << *ip2 << endl;
	system("pause");
	return 0;
}*/

/*int main()
{
	const size_t arr_size = 5;
	int arr[arr_size] = { 1, 2, 3, 4, 5 };
	int *p = arr;
	int *p2 = p + arr_size;
	cout << arr << endl;
	cout << *p2 << endl;
	system("pause");
	return 0;
}*/

/*int main()
{
	const size_t arr_size = 5;
	int int_arr[arr_size] = { 1, 2, 3, 4, 5 };
	for (int *pi = int_arr, *pi2 = int_arr + arr_size; pi != pi2;)
	{
		*pi = 0;
		cout << int_arr[*pi] << endl;
		*pi++;
	}
	system("pause");
	return 0;
}*/

/*double Power(double base, int exponent)
{
	    auto p = 1;
		for (int i = 0; i <exponent; i++)
			p = base * p;
		return p;
	}
int main()
{
	auto result = Power(2, 3);
	cout << result << endl;
	system("pause");
	return 0;
}*/

/*double Power(double base, int exponent)
{
	long long p = abs((long long)exponent);
	double r = 1.0;
	for (int i = 0; i < p; i++)
	{
		r *= base;
	}
	return (exponent > 0) ? r : 1 / r;
}
int main()
{
	double result = Power(1.5, 10);
	cout << result << endl;
	system("pause");
	return 0;
}*/

/*int main()
{
	const char *noerr = "success";
	const char *err189 = "Error:something bad happend！";
	const char *errorTxt;
	if (errorFound)
		errorTxt = err189;
	else
		errorTxt = noerr;
	int dimension = strlen(errorTxt) + 1;
	char *errMsg = new char[dimension];
	strncpy(errMsg, errorTxt, dimension);

}*/

/*int main()
{
	cout << (1 < 2 < 1.5) << endl;
	system("pause");
	return 0;
}*/
/*5.6*/
/*int main(){
	char*cp = "hello,world";
	while (cp && *cp)
		
		cout << *cp << endl;
	system("pause");
	return 0;
}*/

/*5.7*/
/*int main()
{
	int ival;
	cin >> ival;
	while (ival != 42)
	{
		cin >> ival;
		
	}
	
	system("pause");
	return 0;
}*/

/*5.9*/
/*int main()
{
	unsigned long u1 = 3, u2 = 7;
	cout << (u1 & u2) << endl;
	cout << (u1 && u2) << endl;
	cout << (u1 | u2) << endl;
	cout << (u1 || u2) << endl;
	system("pause");
	return 0;
}*/

/*int main()
{
	bitset<30> bitset_quizl;
	bitset_quizl[27] = 1;
	bitset_quizl[27] = 0;
	system("pause");
	return 0;
}*/

/*int main()
{
	int i;
	double b;
	b = i = 3.5;
	cout << b << endl;
	cout << i << endl;
	i = b = 3.5;
	cout << b << endl;
	cout << i << endl;
	system("pause");
	return 0;
}*/

/*int main()
{
	vector <int> ivec;
	int cnt = 10;
	while (cnt > 0)
		ivec.push_back(cnt--);
	vector <int> ::iterator  iter = ivec.begin();
	while (iter != ivec.end())
		cout << *iter++ << endl;
	system("pause");
	return 0;
}*/

/*int main()
{
	vector<string*> ivec;
	string  str;
	cout << "enter some strings" << endl;
	while (cin >> str)
	{
		string *p = new string;
		*p = str;
		ivec.push_back(p);
	}
	vector<string*>::iterator iter = ivec.begin();
	while (iter != ivec.end())
	{
		cout << **iter << (**iter).size() << endl;
		iter++;
	}
	iter = ivec.begin();
	while (iter != ivec.end())
	{
		delete *iter;
		iter++;
	}
	system("pause");
	return 0;
	
}*/

/*int main()
{
	cout << "type\t\t\t" << "size" << endl;
	cout << "bool\t\t\t" << sizeof(bool) << endl;
	cout << "char\t\t\t" << sizeof(char) << endl;
	cout << "signed char\t\t" << sizeof(signed char) << endl;
	system("pause");
	return 0;

}*/

/*int main()
{
	vector<int> ivec;
	int numbers;
	cout << "give some numbers" << endl;
	while (cin >> numbers)
	{
		ivec.push_back(numbers);
		}
	int cnt = ivec.size();
	for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, cnt--)
	{
		ivec[ix] = cnt;
		cout << ivec[ix] << endl;
	}
	system("pause");
	return 0;
}*/

/*int multi(int v1, int v2){
	return pow(v1,v2);
}
int main(){
	int result = multi(2, 3);
	cout << result << endl;
	system("pause");
	return 0;
}*/

/*int gcd(int v1, int v2)
{
	while (v2){
		int temp = v2;
		v2 = v1 % v2;
		v1 = temp;
	}
	return v1;
}
int main()
{
	int result = gcd(2, 4);
	cout << result << endl;
	system("pause");
	return 0;
}*/

/*void swap(int &v1, int &v2)
{
	int temp = v2;
	v2 = v1;
	v1 = temp;
}
int main()
{
	int i = 20;
	int j = 30;
	cout << "befor swap():\ti:" << i << "\tj" << j << endl;
	swap(i, j);
	cout << "after swap():\ti:" << i << "\tj" << j << endl;
	system("pause");
	return 0;
}*/

/*void ptrswap(int *&v1, int *&v2)
{
	int *temp = v2;
	v2 = v1;
	v1 = temp;
}
int main()
{
	int i = 20;
	int j = 10;
	int *pi = &i; //指针pi指向了 i
	int *pj = &j;//指针pj 指向了j
	cout << "before ptrswap():\t*pi:" << *pi << "\t*pj:" << *pj << endl;
	ptrswap(pi, pj);
	cout << "after ptrswap():\t*pi:" << *pi << "\t*pj:" << *pj << endl;
	system("pause");
	return 0;

}*/

/*void merge(int *data, int start, int end, int *result);
//归并排序
void merge_sort(int *data, int start, int end, int  *result)
{
	if (1 == end - start)
	{
		if (data[start] > data[end])
		{
			int tmp = data[end];
			data[end] = data[start];
			data[start] = tmp;
		}
		return;
	}
	else if (0 == end - start) return;
	else {
		merge_sort(data, start, (end - start + 1) / 2 + start, result);
		merge_sort(data, (end - start + 1) / 2 + start + 1,end, result);
		merge(data, start, end, result);
		for (int i = start; i <= end; i++)
			data[i] = result[i];
	}
}
//merge 的过程函数
void merge(int *data, int start, int end, int *result)
{
	int left_length = (end - start + 1) / 2 + 1;
	int left_index = start;
	int right_index = start + left_length;
	int result_index = start;
	while (left_index < start + left_length && right_index < end + 1)
		//对排好序的左右区间合并
		if (data[left_index] <= data[right_index])
			result[result_index++] = data[left_index++];
		else
			result[result_index++] = data[right_index++];
	while (left_index < start + left_length)
		result[result_index++] = data[left_index++];
	while (right_index < end + 1)
		result[result_index++] = data[right_index++];

}
//测试
int main()
{
	int data[] = { 9, 6, 7, 22, 20, 33, 16, 20 };
	const int length = 8;
	int result[length];
	cout << "Before sorted:" << endl;
	for (int i = 0; i < length; ++i)
		cout << data[i] << "  ";
	cout << endl;
	cout << "After sorted:" << endl;
	merge_sort(data, 0, length - 1, result);
	for (int i = 0; i < length; ++i)
		cout << data[i] << "  ";
	cout << endl;
	system("pause");
	return 0;
}
*/
// 前序遍历  两种方法
/*typedef struct node
{
	int data;
	struct node* lchild;  //左孩子  
	struct node* rchild;  //右孩子  
}BTNode;
void Recursion(BTNode* root)
{
	if (root == NULL)
		return;
	BTNode *p = root;
	stack<BTNode*> s;
	while (!s.empty() || p)
		while (p)
		{
			s.push(p);
			p = p->lchild;
		}
	if (!s.empty())
	{
		p = s.top();
		s.pop;
		cout << p->data << endl;
		p = p->rchild;

	}
}*/

/*template<typename T , typename VST>
void tracPre I1(BinodePosi(T) x, VST& visit){
	stack<BinodePosi(T)> s;//辅助stack
	if (x) s.push(x);
	while (!s.empty()){
		x = s.pop(); visit(x->data);
		if (HasRchild(*x)) s.push(x->rchild);
		if (HasLchild(*x)) s.push(x->lchild);
	}
}*/

/*template <typename T,typename VST>
static void visitAlongleftBranch(BinNodePosi(T) x, VST& visit, stack<BinNodePosi(T)>& s){
	while (x)
	{
		visit(x->data); s.push(x->rchild); x = x->lchild;
	}
	void travPre I2(BinNodePosi(T) x, VST& visit){
		stack<BinNodePosi(T)> s;
		while (true){
			visitAlongLeftBranch(x, visit, s);
			if (s.empty()) break;
			x = s.pop();
		}
	}

}*/

/*template<typename T> 
static void goAlongleftBranch(BinNodePosi(T) x, stack<BinNodePosi(T)> &s)
{
	while (x) {
		s.push(x);
		x = x->lchild;
	}
}
template<typename T, typename VST>
void travIn I1(BinNodePosi(T) x, VST &visit){
	stack<BinNodePosi(T)> s;
	while (true){
		goAlongleftBranch(x, s);
		if (s.empty()) break;
		x = s.pop();
		x = x->rchild;
	}
}*/

/*typedef int DATA_TYPE;
const DATA_TYPE NO_EDGE = 10000000;
struct AdjMatrixGraph

{
	vector<vector<DATA_TYPE> > weights;
};

vector<int> AdjMatrixBFS(AdjMatrixGraph  graph, int startNode)
{
	int vertexNum = graph.weights.size();
	vector<int> visited(vertexNum, 0);
	vector<int> visitOrder;
	queue<int> trace;
	trace.push(startNode);
	visited[startNode] = 1;
	while (!trace.empty())
	{
		int currentNode = trace.front();
		trace.pop();
		visitOrder.push_back(currentNode);
		
			for (size_t i = 0; i <vertexNum; ++i)
			{
				if (visited[i] == 0 && graph.weights[currentNode][i] < NO_EDGE)
				{
					trace.push(i);
					visited[i] = 1;
				}
			}
	}
	
	return visitOrder;
}

int main(int argc, char *argv[])
{

	
	// ===============邻接矩阵方式===============
	AdjMatrixGraph graph;
	graph.weights.push_back(vector<DATA_TYPE>{0, 8, NO_EDGE, 5, NO_EDGE});
	graph.weights.push_back(vector<DATA_TYPE>{NO_EDGE, 0, 3, NO_EDGE, NO_EDGE});
	graph.weights.push_back(vector<DATA_TYPE>{NO_EDGE, NO_EDGE, 0, NO_EDGE, 6});
	graph.weights.push_back(vector<DATA_TYPE>{NO_EDGE, NO_EDGE, 9, 0, NO_EDGE});
	graph.weights.push_back(vector<DATA_TYPE>{NO_EDGE, NO_EDGE, NO_EDGE, NO_EDGE, 0});

	// 邻接矩阵
	vector<int> visitOrder2 = AdjMatrixBFS(graph, 0);
	cout << "邻接矩阵 BFS： ";
	for (size_t i = 0; i < visitOrder2.size(); ++i)
	{
		cout << visitOrder2[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
	
}
*/

/*#include <string>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	string str;
	char x;
	int i = 0;
	while (cin >> str >> x)
	{
		int count = 0;
		while (str[i++] != '\0')
			if (x == str[i] || x == (str[i] - 32) || x == (str[i] + 32))
				count++;
		cout << count << endl;
	}
	system("pause");
	return 0;
}*/

/*#include <iostream>
#include<string>
#include <vector>
using namespace std;


int main()
{
	int rownum;
	cin >> rownum;
	int i = rownum;
	vector<vector<int>> c;
	vector<int> e;
	int b;
	while (i)
	{
		e.clear();
		cin >> b;
		e.push_back(b);
		cin >> b;
		e.push_back(b);
		c.push_back(e);
		i--;
	}
	int f[2];
	for (int j = 0; j < rownum - 1; j++)//maopao
	{
		for (int kk = 0; kk < rownum - 1 - i; kk++)
		{
			if (c[kk][0] > c[kk + 1][0])
			{
				f[0] = c[kk][0];
				f[1] = c[kk][1];
				c[kk][0] = c[kk + 1][0];
				c[kk][1] = c[kk + 1][1];
				c[kk + 1][0] = f[0];
				c[kk + 1][1] = f[1];
			}
		}

	}
	int l;
	for (int j = 0; j < rownum; j++)
	{
		l = 0;
		for (int kk = 0; kk < rownum; kk++)
		{
			if ((c[j][0] < c[kk][0]) && (c[j][1] < c[kk][1]))
				l++;

		}
		if (!l)
			cout << c[j][0] << " " << c[j][1] << endl;
	}

	return 0;

}*/

/*#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> n;
	int i;
	while (cin >> i)
		n.push_back(i);
	int sum = 0;
	int max = 0;
	for (int j = 0; j < n.size(); j++)
	{
		sum = sum + n[j];
		if (max < n[j])
			max = n[j];
	}
	system("pause");
	return max*sum;
}
*/
/*struct ListNode
{
	int key;
	ListNode *next;
};
void Printrevs(ListNode *head){
	stack<ListNode*> nodes;
	ListNode *pNode = head;
	while (!pNode)
	{
		nodes.push(pNode);
		pNode = pNode->next;

	}
	while (!nodes.empty())
	{
		pNode = nodes.top();
		cout << pNode->key << endl;
		nodes.pop();
	}

}
int main(){

}*/
int n;

/*int main(){
	cin >> n;
	if (n <= 1 || n == 2)
		return n;
	else
	{
		int f1 = 1;
		int f2 = 2;
		int f3 = 0;
		for (int i = 3; i <= n; i++)
		{
			f3= f1 + f2;
			f1 = f2;
			f2 = f3;

		}
		cout << f3 << endl;
	}
	system("pause");
	return 0;
}*/
int main(){
	int n;
	scanf("%d",&n);
	int sum;
	if (n < 0)
		sum++;
	for (; n < 1;){
		if(n % 2==1)
			sum++;
		n = n /2;
	}
	if (n == 1)
		sum++;
	printf("%d",sum);
	return 0;
}