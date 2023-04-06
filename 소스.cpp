#include <iostream>
#include "State.h"
#include "Transition.h"
using namespace std;

int main()
{
	FState* State[4];
	FTransition* Transition[5];

	State[0] = new FState(1, "배회");
	/*State[0]->ID = 1;
	State[0]->Name = "배회";*/
	State[1] = new FState(2, "추격");
	/*State[1]->ID = 2;
	State[1]->Name = "추격";*/
	State[2] = new FState(3, "공격");
	/*State[2]->ID = 3;
	State[2]->Name = "공격";*/
	State[3] = new FState(4, "죽음");
	/*State[3]->ID = 4;
	State[3]->Name = "죽음";*/

	Transition[0] = new FTransition(1, "적발견", 2);
	/*Transition[0]->CurrentState = 1;
	Transition[0]->Condition = "적발견";
	Transition[0]->NextState = 2;*/
	Transition[1] = new FTransition(2, "적놓침", 1);
	/*Transition[1]->CurrentState = 2;
	Transition[1]->Condition = "적놓침";
	Transition[1]->NextState = 1;*/
	Transition[2] = new FTransition(2, "사정거리접근", 3);
	/*Transition[2]->CurrentState = 2;
	Transition[2]->Condition = "사정거리접근";
	Transition[2]->NextState = 3;*/
	Transition[3] = new FTransition(3, "사정거리이탈", 2);
	/*Transition[3]->CurrentState = 3;
	Transition[3]->Condition = "사정거리이탈";
	Transition[3]->NextState = 2;*/
	Transition[4] = new FTransition(3, "HP없음", 4);
	/*Transition[4]->CurrentState = 3;
	Transition[4]->Condition = "HP없음";
	Transition[4]->NextState = 4;*/

	int MonsterCurrentState = 1;
	string MonsterCondition = "적발견";
	int MonsterNextState = 2;

	for (int i = 0; i < 5; i++)
	{
		if (Transition[i]->CurrentState == MonsterCurrentState && Transition[i]->Condition == MonsterCondition)
		{
			MonsterNextState = Transition[i]->NextState;
		}
	}

	cout << "현재 몬스터의 상태는 " << State[MonsterCurrentState - 1]->Name;
	cout << "이고 조건은 " << MonsterCondition << "을 해서 다음에는";
	cout << "몬스터가 다음에는 " << State[MonsterNextState - 1]->Name;
	cout << "행동을 합니다. ";

	return 0;
}