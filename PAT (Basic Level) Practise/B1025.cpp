/*The first version*/
#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
using namespace std;

//通过数组初始化读入链表，地址用数组下标表示
struct Node {
	int addr;
	int next;
	int data;
}node[100001];

//将所有节点按序保存在向量中
vector<Node>v1;
vector<Node>::iterator iter;



int main()
{
	int head, N, K;
	int count=0,c=0;
	int t_addr, t_data, t_next;
	Node n;
	cin >> head >> N >> K;
	if (head == -1) {
		cout << -1 << endl;
		return 0;
	}
	for (int i = 0; i<N; i++) {
		cin >> t_addr >> t_data >> t_next;
		node[t_addr].addr = t_addr;
		node[t_addr].data = t_data;
		node[t_addr].next = t_next;
	}
	n = node[head];

	int size;
	for (size = 1; n.next != -1; n = node[n.next]) {
	    //将节点保存在v1中，并按照每个节点连续，
		//size记录有效节点的个数，不直接用v1.size()是因为这样调用时间花费太大
		v1.push_back(n); size++;
	}
	v1.push_back(n);
	if (K != 1) {//若K!=1则开始反转
		for (int c = 0; size >= K; c++) {//c用来记录反转的次数，便于每次设置反转的位置
			reverse(v1.begin() + c*K, v1.begin() + (c + 1)*K);
			size -= K;
		}
	}

	//调整每个节点的next地址；
	for (iter = v1.begin(); iter != v1.end(); iter++) {
		if (iter + 1 == v1.end()) {
			Node &y = *iter;
			y.next = -1;
		}else{
			Node &x = *iter;
			Node &y = *(iter + 1);
			x.next = y.addr;
		}
	}
	//输出节点
	for (iter = v1.begin(); iter != v1.end(); iter++) {
		n = *iter;
		if (iter + 1 < v1.end())
			cout << setfill('0') << setw(5) << n.addr << ' ' << n.data << ' ' << setfill('0') << setw(5) << n.next << endl;
		else {
			cout << setfill('0') << setw(5) << n.addr << ' ' << n.data<< ' '<< n.next << endl;
			 
		}
	}
	return 0;
}


/*The optimized version*/
#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
using namespace std;

struct Node {
	int next;
	int data;
}node[100010];

int main()
{
	int head, N, K;
	vector<int> list;
	int t_addr, t_data, t_next;

	cin >> head >> N >> K;
	if (head == -1) {
		cout << -1 << endl;
		return 0;
	}
	for (int i = 0; i < N; i++)
	{
		cin >> t_addr >> t_data >> t_next;
		node[t_addr].data = t_data;
		node[t_addr].next = t_next;
	}
	int size = 0;
	int p = head;
	while (head != -1)
	{
		list.push_back(head);

		head = node[head].next;
	}
	size = list.size();
	int i = 0;
	while (i + K <= size)
	{
		reverse(&list[i], &list[i + K]);
		i = i + K;
	}

	for (i = 0; i < size - 1; i++)
		cout << setfill('0') << setw(5) << list[i] << ' ' << node[list[i]].data << ' ' << setfill('0') << setw(5) << list[i + 1] << endl;
	cout << setfill('0') << setw(5) << list[i] << ' ' << node[list[i]].data << ' ' << "-1" << endl;
	return 0;
}
