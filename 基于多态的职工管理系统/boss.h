#pragma once
#include<iostream>
using namespace std;
#include"worker.h"

class Boss :public Worker {
public:
	Boss(int Id, string name, int dId);

	virtual void showInfo();

	virtual string getDeptName();
};