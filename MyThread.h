#pragma once

#include <iostream>

#include <thread> 

#include <conio.h> // _getch()

using namespace std;

class MyThread
{
public:
	MyThread();
	~MyThread();

public:
	void Update();
	void Stop();

private:
	bool Runing;
	
};

