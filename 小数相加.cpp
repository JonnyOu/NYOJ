//获取某个字符的下标str.find('xxx')； 
#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cstring>
#include<math.h> 
using namespace std;

struct BigInteger {
	static const int BASE = 100000000;
	static const int WIDTH = 8;
	vector<int> s;
	
	BigInteger operator = (const string& str) {
		s.clear();
		int x, len = (str.length()-1) / WIDTH + 1;
		for (int i = 0; i < len; i++) {
			int end = str.length() - i*WIDTH;
			int start = max(0, end-WIDTH);
			sscanf(str.substr(start, end-start).c_str(), "%d", &x);
			s.push_back(x);
		}
		return *this;
	}
	
	BigInteger operator + (const BigInteger& b) const {
		BigInteger c;
		c.s.clear();
		for (int i = 0, g = 0; ;i++) {
			if (g == 0 && i >= s.size() && i >= b.s.size()) break;
				int x = g;
				if (i < s.size()) x += s[i];
				if (i < b.s.size()) x += b.s[i];
				c.s.push_back(x % BASE);
				g = x / BASE;
		}
		return c;
	}
	
	//获取大整数长度 
	int len() { 
		int len = 0, sum = s[s.size()-1];
		for (int i = 0; i < s.size()-1; i++) len += WIDTH;
		while (sum > 0) { len++; sum /= 10; }
		return len;
	}
	
	//减去最高位
	BigInteger Jian(BigInteger b) {
		BigInteger c;
		for (int i = 0; i < b.s.size()-1; i++)
			c.s.push_back(b.s[i]);
		int n = b.s[b.s.size()-1];
		int sum = 0, t = n;
		while (t > 0) {
			sum++;
			t /= 10;
		}
		t = pow(10, sum-1);
		n = n % t;
		if (n > 1) c.s.push_back(n);
		return c;
	} 
};

ostream& operator << (ostream &out, const BigInteger& x) {
	out << x.s.back(); //输出最后的元素，即s[s.size()-1] 
	for (int i = x.s.size()-2; i >= 0; i--) {
		char buf[20];
		sprintf(buf, "%08d", x.s[i]);//把x.s[i]写到buf中，每个x.s[i]长度小于等于8 
		for (int j = 0; j < strlen(buf); j++) out << buf[j];
	}
	return out;
}

int main() {
	string x, x1, x2, y, y1, y2;
	cin >> x >> y;
	int note_x = x.find('.'), note_y = y.find('.'); //获取某个字符的下标 
	x1 = x.substr(0, note_x); x2 = x.substr(note_x+1, x.length()-note_x-1); 
	y1 = y.substr(0, note_y); y2 = y.substr(note_y+1, y.length()-note_y-1);
	//小数部分长度处理
	int t = x.length() - note_x - y.length() + note_y;
	if (t > 0) 
		for (int i = 0; i < t; i++)
			y2 += "0";
	else 
		for (int i = 0; i < -t; i++)
			x2 += "0";
	BigInteger a, b, c, d;
	a = x1; b = x2; c = y1; d = y2;
//	cout << a << "\n" << b << "\n" << c << "\n" << d << "\n";
//	cout << (b+d).len() << "\n" << b.len() << "\n";
//	BigInteger f;
//	f = b+d;
//	cout << f << "\n" << f.Jian(f);
	if ((b+d).len() > b.len()) {
		BigInteger f, e;
		f = "1";
		e = b+d;
		cout << a+c+f << "." << e.Jian(e);
	}
	else {
		cout << a+c << "." << b+d;
	}
	return 0;
}

/*
123.45
12.345

99.99
999.999

*/

