#include "MyThread.h"

MyThread::MyThread()
{
	Runing = true;
}

MyThread::~MyThread()
{
}

void MyThread::Update()
{
	while (Runing)
	{
		cout << "Runing . . ." << endl;
		this_thread::sleep_for(chrono::milliseconds(1000)); // Run delay
	}
}

void MyThread::Stop()
{
	cout << "Thread process Exit" << endl;
	Runing = false;
}
