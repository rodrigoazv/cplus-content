
#include <bits/stdc++.h>

using namespace std;

int atoi(const char *S){
	long num = 0;

	int i = 0;

	while (S[i] && (S[i] >= '0' && S[i] <= '9')){
		num = num * 10 +(S[i] - '0');
		i++;
	}

	return num;

}

int main(){
	char S[] = "12345";

	cout << atoi(S);
	return 0;
}

