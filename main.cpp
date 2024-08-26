
#include "MyThread.h"

int main()
{
    MyThread* mythread = new MyThread();

    cout << "Start \"Enter\" Key" << endl;

    cout << "Stop \"Esc\" Key" << endl;

    while (_getch() != 13); // Enter key

    thread loopThread([&mythread] {
        mythread->Update();
        });

    while (_getch() != 27); // ESC key

    mythread->Stop();

    loopThread.join();

    delete mythread;

    cout << "main process Exit" << endl;
    return 0;
}