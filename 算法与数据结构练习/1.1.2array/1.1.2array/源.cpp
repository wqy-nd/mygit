//��Ч��ĸ��λ��
#include<iostream>
#include<string>
using namespace std;
bool zero(int a[26]) {//�ж�������Ԫ���Ƿ��Ϊ�㣬Ӧ���и��õķ����ɣ���ʱû�뵽
	for (int i = 0;i < 26;i++) {
		if (a[i] == 0) continue;
		else return false;
	}
	return true;
}
bool judge(string s, string t) {
	int len1 = s.length(), len2 = t.length(), a[26];
	for (int i = 0;i < 26;i++)
		a[i] = 0;
	if (len1 != len2)
		return false;
	else {
		for (int i = 0;i < len1;i++) {
			a[s[i] - 97] += 1;
			a[t[i] - 97] -= 1;
		}
		if (zero(a)) return true;
		else return false;
	}
}
int main() {
	string s, t;
	cin >> s;
	cin >> t;
	if (judge(s,t))
		cout << "����λ��" << endl;
	else
		cout << "������λ��" << endl;
}