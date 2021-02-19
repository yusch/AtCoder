#include<bits/stdc++.h>
int main(){
	int follow, follower, max, result;
	std::cin >> follower >> follow;
	max = 2 * follower + 100;
	result = max - follow;
	std::cout << result << std::endl;
	return 0;
}
