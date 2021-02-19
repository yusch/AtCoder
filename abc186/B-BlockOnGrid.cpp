#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
int main(){
	int h,w;
	//bool zero;
	int min = 100;
	int count = 0;

	std::cin >> h >> w;
	int a[h][w];
	
	for (int i = 0; i < h; i++){
		for (int j = 0; j < w; j++){
			std::cin >> a[i][j];
			//if (a[i][j] == 0) zero = true;
			if (a[i][j] <= min) min = a[i][j];
		}
	}
	for (int i = 0; i < h; i++){
		for (int j = 0; j < w; j++){
			if (min < a[i][j]){
				a[i][j] = a[i][j] - min;
                count = a[i][j] + count;
			}
		}
	}
	//std::cout << min << std::endl;
	std::cout << count << std::endl;
	return 0;
}
