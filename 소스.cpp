#include <iostream>
#include "State.h"
#include "Transition.h"

// STL -> container : �ڷ� �����ϴ� ����
#include <vector>
#include <list>

using namespace std;

//int main()
//{
//	
//	FState* State[4];
//	FTransition* Transition[5];
//
//	State[0] = new FState(1, "��ȸ");
//	/*State[0]->ID = 1;
//	State[0]->Name = "��ȸ";*/
//	State[1] = new FState(2, "�߰�");
//	/*State[1]->ID = 2;
//	State[1]->Name = "�߰�";*/
//	State[2] = new FState(3, "����");
//	/*State[2]->ID = 3;
//	State[2]->Name = "����";*/
//	State[3] = new FState(4, "����");
//	/*State[3]->ID = 4;
//	State[3]->Name = "����";*/
//
//	Transition[0] = new FTransition(1, "���߰�", 2);
//	/*Transition[0]->CurrentState = 1;
//	Transition[0]->Condition = "���߰�";
//	Transition[0]->NextState = 2;*/
//	Transition[1] = new FTransition(2, "����ħ", 1);
//	/*Transition[1]->CurrentState = 2;
//	Transition[1]->Condition = "����ħ";
//	Transition[1]->NextState = 1;*/
//	Transition[2] = new FTransition(2, "�����Ÿ�����", 3);
//	/*Transition[2]->CurrentState = 2;
//	Transition[2]->Condition = "�����Ÿ�����";
//	Transition[2]->NextState = 3;*/
//	Transition[3] = new FTransition(3, "�����Ÿ���Ż", 2);
//	/*Transition[3]->CurrentState = 3;
//	Transition[3]->Condition = "�����Ÿ���Ż";
//	Transition[3]->NextState = 2;*/
//	Transition[4] = new FTransition(3, "HP����", 4);
//	/*Transition[4]->CurrentState = 3;
//	Transition[4]->Condition = "HP����";
//	Transition[4]->NextState = 4;*/
//
//	int MonsterCurrentState = 1;
//	string MonsterCondition = "���߰�";
//	int MonsterNextState = 2;
//
//	for (int i = 0; i < 5; i++)
//	{
//		if (Transition[i]->CurrentState == MonsterCurrentState && Transition[i]->Condition == MonsterCondition)
//		{
//			MonsterNextState = Transition[i]->NextState;
//		}
//	}
//
//	cout << "���� ������ ���´� " << State[MonsterCurrentState - 1]->Name;
//	cout << "�̰� ������ " << MonsterCondition << "�� �ؼ� ��������";
//	cout << "���Ͱ� �������� " << State[MonsterNextState - 1]->Name;
//	cout << "�ൿ�� �մϴ�. ";
//
//	return 0;
//}

int main()
{
	vector<FState*> States;
	//list<FState*> States;

	States.push_back(new FState(1, "��ȸ"));
	States.push_back(new FState(2, "�߰�"));
	States.push_back(new FState(3, "����"));
	States.push_back(new FState(4, "����"));

	for (int i = 0; i < States.size(); ++i)
	{
		cout << States[i]->Name << endl;
	}

	for (auto iter = States.begin(); iter != States.end(); ++iter)
	{
		cout << (*iter)->Name << endl;
	}

	for (auto iter : States)
	{
		cout << iter->Name << endl;
	}

	vector<FTransition*> Transitions;
	//list< FTransition*> Transitions;

	Transitions.push_back(new FTransition(1, "���߰�", 2));
	Transitions.push_back(new FTransition(2, "����ħ", 1));
	Transitions.push_back(new FTransition(2, "�����Ÿ�����", 3));
	Transitions.push_back(new FTransition(3, "�����Ÿ���Ż", 2));
	Transitions.push_back(new FTransition(3, "HP����", 4));

	for (int i = 0; i < Transitions.size(); ++i)
	{
		cout << Transitions[i]->Condition << endl;
	}

	for (auto iter = Transitions.begin(); iter != Transitions.end(); ++iter)
	{
		cout << (*iter)->Condition << endl;
	}

	for (auto iter : Transitions)
	{
		cout << iter->Condition << endl;
	}
}