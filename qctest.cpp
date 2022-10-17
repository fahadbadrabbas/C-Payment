#include<bits/stdc++.h>
using namespace std;

string extract_digits(string str, int i) {  // this function is used for finding the digits after Q or p or d
	string ans = "";
	for (i = i+1; i < str.size(); ++i) {
		if (str[i] > 57 || str[i] < 48) break;  // checking if the character is a numeric value or not
		ans += str[i];
	}
	return ans;
}

bool isValidQC(string results) {
	regex r("((Q[0-9]+p[0-9]+d[0-9]+)|(Q[0-9]+d[0-9]+p[0-9]+))*");  // this regex is for checking if the string starts with Q and contains p,d or d,p
																// and are followed by some numbers
	if (!regex_match(results, r)) return false;

	int c = 0;  // this is used for keeping track that, if we have still come across Q,p,d or not
	string q_num, p_num, d_num; // this is used for storing the digits which come after Q,p,d

	for (int i = 0; i < results.size(); ++i) {
		if (results[i] == 'Q') {
			q_num = extract_digits(results, i);  // extracting the digits after Q
			if (q_num[0] == '0') return false;
			++c;
		}

		if (results[i] == 'p') {
			p_num = extract_digits(results, i);  // extracting the digits after p
			if (p_num.size() > 1 && p_num[0] == '0') return false;  // checking if it has any leading zeroes or not
			++c;
		}

		if (results[i] == 'd') {
			d_num = extract_digits(results, i);  // extracting the digits after d
			if (d_num.size() > 1 && d_num[0] == '0') return false;  // checking if it has any leading zeroes or not
			++c;
		}

		if (c == 3) {  // this means that we have seen characters Q,p,d
			if (stoi(p_num) + stoi(d_num) != stoi(q_num)) return false;  // checking if Q = p+d or not
			c = 0;  // resetting the value as we might find another batch
		}

	}

	return true;
}

int passQC(string results) {
	if (!isValidQC(results)) return -1;
	int ans = 0;
	for (int i = 0; i < results.size(); ++i) {
		if (results[i] == 'p') {
			string digits = extract_digits(results, i);
			ans += stoi(digits); // summing up the numbers which come after p in every batch
		}
	}
	return ans;
}

int defectQC(string results) {
	if (!isValidQC(results)) return -1;
	int ans = 0;
	for (int i = 0; i < results.size(); ++i) {
		if (results[i] == 'd') {
			string digits = extract_digits(results, i);
			ans += stoi(digits);  // summing up the numbers which come after d in every batch
		}
	}
	return ans;
}

int totalQC(string results) {
	if (!isValidQC(results)) return -1;
	int ans = 0;
	for (int i = 0; i < results.size(); ++i) {
		if (results[i] == 'Q') {
			string digits = extract_digits(results, i);
			ans += stoi(digits);   // summing up the numbers which come after Q in every batch
		}
	}
	return ans;
}

int batches(string results) {
	if (!isValidQC(results)) return -1;
	int ans = 0;
	for (int i = 0; i < results.size(); ++i) {
		if (results[i] == 'Q') {
			ans ++;  // calculating the number of time we are coming across char Q
		}
	}
	return ans;
}

int main() {
	cout.setf(ios::boolalpha);

	assert(passQC("Q2p1d1Q4d2p2Q5d2p3") == 6);
	assert(defectQC("Q1p1d0Q4d2p2") == 2);
	assert(totalQC("Q1p0d1Q4d2p2Q55d20p35") == 60);
	assert(batches("Q1p0d1Q4d2p2Q5d2p3Q10d6p4") == 4);
	assert(passQC("Q1p0d1Q4d02p2Q5d02p3") == -1);
	assert(isValidQC("Q1p0d1Q4dp2Q5d2p3") == false);

	cout << "All test cases succeeded" << endl;
}



