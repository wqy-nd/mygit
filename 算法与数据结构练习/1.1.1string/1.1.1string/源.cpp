//�ַ�������
#include<iostream>
#include<string>
#define N 100
using namespace std;
void function(char s[N]) {
	char * head = s, *tail;
	char temp;
	int len;
	len = strlen(s);
	tail = head + len - 1;
	//������ָ�����м��ƶ�ֱ�������򽻴����
	while (head <= tail) {
		temp = *head;
		*head = *tail;
		*tail = temp;
		head++;tail--;
	}
	cout << s << endl;
}
int main() {
	char s[N];
	cin >> s;
	function(s);
	return 0;
}