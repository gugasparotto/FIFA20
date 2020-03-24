//
// keystroke.c - Pauses, then simulates a key press
// and release of the "A" key.
//
// Written by Ted Burke - last updated 17-4-2012
//
// To compile with MinGW:
//
//      gcc -o keystroke.exe keystroke.c
//
// To run the program:
//
//      keystroke.exe
//
// ...then switch to e.g. a Notepad window and wait
// 5 seconds for the A key to be magically pressed.
//

// Because the SendInput function is only supported in
// Windows 2000 and later, WINVER needs to be set as
// follows so that SendInput gets defined when windows.h
// is included below.
//#include "pch.h"
#include "headersFifa.h"

/*#define WINVER 0x0500
#include <windows.h>

void resetBin()
{
	INPUT ip;
	// Set up a generic keyboard event.
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;

	// Press the "b" key
	ip.ki.wVk = 0x42; // virtual-key code for the "p" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "b" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));

}
void aumentarBid()
{
	INPUT ip;
	// Set up a generic keyboard event.
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;

	// Press the "a" key
	ip.ki.wVk = 0x41; // virtual-key code for the "p" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "a" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
void comprar()
{
	INPUT ip;
	for (int x = 0; x < 10; x++) {
		Sleep(3);
		// Set up a generic keyboard event.
		ip.type = INPUT_KEYBOARD;
		ip.ki.wScan = 0; // hardware scan code for key
		ip.ki.time = 0;
		ip.ki.dwExtraInfo = 0;

		// Press the "M" key
		ip.ki.wVk = 0x4D; // virtual-key code for the "a" key
		ip.ki.dwFlags = 0; // 0 for key press
		SendInput(1, &ip, sizeof(INPUT));

		// Release the "M" key
		ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
		SendInput(1, &ip, sizeof(INPUT));
	}

}
void voltar() {
	INPUT ip;
	// Set up a generic keyboard event.
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;

	// Press the "C" key
	ip.ki.wVk = 0x43; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "C" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}

void aumentarBin() {
	INPUT ip;
	// Set up a generic keyboard event.
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;

	// Press the "Z" key
	ip.ki.wVk = 0x5A; // virtual-key code for the "z" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "Z" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));

}

void pesquisar() {
	INPUT ip;
	// Set up a generic keyboard event.
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;

	// Press the "X" key
	ip.ki.wVk = 0x58; // virtual-key code for the "x" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "X" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));

}
void resetBid() {
	INPUT ip;
	// Set up a generic keyboard event.
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;

	// Press the "o" key
	ip.ki.wVk = 0x4F; // virtual-key code for the "o" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "o" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}*/
int main()
{
	// This structure will be used to create the keyboard
	// input event.
	INPUT ip;
	int buyNow = 120;
	int quantidadeCiclo = 10;
	int e;
	// Pause for 5 seconds.
	Sleep(4000);


	for ( e = 0; e < quantidadeCiclo; e++)
	{
		
		std::cout << "Novo Ciclo \n \n";
		for (int i = 0; i < buyNow; i++)
		{
			std::cout << "\n Nova Pesquisa \n \n";
			aumentarBin();
			std::cout << "Aumentou bid \n";
			
			Sleep(100);

			pesquisar();

			std::cout << "Pesquisou\n";

			Sleep(530);
			
			

			comprar();

			std::cout << "Comprou\n";


			Sleep(1900);
			
			voltar();
			std::cout << "Voltou\n";

			Sleep(1000);

		}
		
		std::cout << "Fim loop\n";	
		
		resetBin();
		std::cout << "Reseta o BIN\n";
		Sleep(300);

		aumentarBin();
		std::cout << "Aumentou bid \n";
		Sleep(300);
		aumentarBid();
		std::cout << "Aumentar o bid \n";
		Sleep(300);
		for (int n = 1; n < e;n++) {
			aumentarBid();
			std::cout << "Aumentar o bid \n";
		}
		buyNow--;
		std::cout << "Diminui quantidade de ciclo em 1 \n";
		

	}

	// Exit normally
	return 0;
}