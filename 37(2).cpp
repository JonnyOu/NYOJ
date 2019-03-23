#include <iostream>
#include <string>
using namespace std;

int num = 100000;
string str;

void dfs(int l, int r, int len) {
    if (l >= r)
        num = (num < len ? num : len);
    else {
        if (str[l] == str[r])
            dfs(l + 1, r - 1, len);
        else {
            dfs(l + 1, r, len + 1);
            dfs(l, r - 1, len + 1);
        }
    }
    return ;
}


int main() {

	int n;
	cin >> n;
	while (n--) {
	    cin >> str;

	    dfs(0, str.size() - 1, 0);

	    cout << num << endl;
	}
    return 0;
}
