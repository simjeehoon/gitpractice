// FirstStdout.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "division.h"

int main()
{
	std::cout << "Hello, Git world!" << std::endl;
	std::cout << "input a, b" << std::endl;
	int a = 0, b = 0;
	std::cin >> a >> b;
	MyComputer my;
	std::cout << my.MyDivision(a, b);
    return 0;
}

