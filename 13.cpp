#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int fact(int);

int main()
{
	int T;
	cin >> T;
	cin.ignore();
	while (T--) {
		vector<string> words;
		string s, tmp;
		int word_start_flag = 0;

		getline(cin, s);

		for (auto c : s) {
			if (c != ' ') {
				tmp.push_back(c);
				word_start_flag = 1;
			}
			else if (word_start_flag) {
				words.push_back(tmp);
				tmp.clear();
				word_start_flag = 0;
			}
		}
		if (tmp != "") words.push_back(tmp);

		unordered_map<string, int> mp;
		for (auto word : words) mp[word]++;

		int p = fact(words.size());
		for (auto key : mp) {
			if (key.second > 1) p /= fact(key.second);
		}
		cout << "1/" << p << endl;
	}
	return 0;
}

int fact(int n) {
	if (n == 0) return 1;
	return n * fact(n - 1);
}