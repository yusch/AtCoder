#include<iostream>
#include<sstream>
//std::stringstream ss[];

int input;
int count = 0;
int Dec = 0;
int Oct = 0;
std::cin >> input;

for (int i = 0; i < input; i++){
	sprintf(str, "%d", Oct);
	if (NULL != strchr(str, '7')){
		count++;
	}
	Oct++;
}

//for (int i = 0; i < input; i++){
//	ss[i] << std::oct << input - i;
//}
