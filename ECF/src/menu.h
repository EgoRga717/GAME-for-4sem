#pragma once

void LKM(void);
void PKM(void);

int mainMenuStart(int ScrSizeX, int ScrSizeY)
{
	sf::RenderWindow window(sf::VideoMode(ScrSizeX, ScrSizeY), "ECF");
	while (window.isOpen())
	{
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
			LKM();
		if (sf::Mouse::isButtonPressed(sf::Mouse::Right))
			PKM();

		//Заклинание, чтобы окно на крест закрывалось
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
				return 1; //Значит закрыли
			}
		}

		window.display();
	}
	return 0;
}

void LKM(void)
{
	printf("L");
}

void PKM(void)
{
	printf("R");
}