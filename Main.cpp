#include <iostream>
#include <windows.h>
#include <conio.h>





int main()
{
	bool run = false;


	while (true)
	{
		if (GetAsyncKeyState(VK_F8))
		{
			run = true;
			Sleep(100);
			std::cout << "Start" << std::endl;

			while (run == true)
			{
				//Sleep(100);
				//SetCursorPos(270, 372);
				mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
				mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

				if (GetAsyncKeyState(VK_F9))
				{
					std::cout << "Stopping" << std::endl;
					run = false;
				}
			}
		}
		Sleep(1);
	}

	return 0;



}

