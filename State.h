#pragma once
#include <string>

using namespace std;
class FState
{
public:
	FState(); // 무조건 같은거 만들어 줘야함 = 디폴트 생성자

	FState(int NewID, string NewName);

	int ID;
	string Name;
};

