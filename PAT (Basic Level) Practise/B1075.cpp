#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
using namespace std;

struct Node {
	int data;
	int addr;
	int next;
}node[100005];

vector<Node>v1;
vector<Node>vk;
vector<Node>::iterator iter;



int main()
{
	int head, N, K;
	int count = 0, c = 0;
	int t_addr, t_data, t_next;
	Node n;
	cin >> head >> N >> K;
	if (head == -1) {
		cout << -1 << endl;
		return 0;
	}
	for (int i = 0; i < N; i++) {
		cin >> t_addr >> t_data >> t_next;
		node[t_addr].addr = t_addr;
		node[t_addr].data = t_data;
		node[t_addr].next = t_next;
	}
	n = node[head];
	for (; n.next != -1; n = node[n.next])
		v1.push_back(n);
	v1.push_back(n);
	for (iter = v1.begin(); iter != v1.end(); iter++) {
		if ((*iter).data < 0)
			vk.push_back((*iter));
	}
	for (iter = v1.begin(); iter != v1.end(); iter++) {
		if (((*iter).data >= 0)&&((*iter).data<=K))
			vk.push_back((*iter));
	}
	for (iter = v1.begin(); iter != v1.end(); iter++) {
		if (((*iter).data >K))
			vk.push_back((*iter));
	}
	for (iter = vk.begin(); iter != vk.end(); iter++) {
		if (iter < vk.end() - 1) {
			cout << setfill('0') << setw(5) << (*iter).addr << ' ' << (*iter).data << ' ' << setfill('0') << setw(5) << (*(iter + 1)).addr << endl;
		}
		else {
			cout << setfill('0') << setw(5) << (*iter).addr << ' ' << (*iter).data << ' ' << -1 << endl;
		}
	}
	return 0;
}