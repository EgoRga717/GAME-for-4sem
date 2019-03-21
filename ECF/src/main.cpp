#include <SFML\Graphics.hpp>
#include <SFML\Audio.hpp>
#include "menu.h"

#define ScrSizeX 1280
#define ScrSizeY 1024


int main()
{
	
	int errCode = mainMenuStart(ScrSizeX, ScrSizeY);
	if (errCode == 1)//Проверка, закрыли ли меню?
	{
		printf("Main menu has been closed\n");
		return 0;
	}
	return 0;
}
