#include "SFML/Graphics.hpp"
#include "settings.h"
#include "functions.h"
#include "bat.h"

using namespace sf;

int main()
{
	Bat bat;
	initbat(bat);

	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "SFML Works!");

	// Главный цикл приложения. Выполняется, пока открыто окно
	while (window.isOpen())
	{
		checkEvents(window);
		updateGame(bat);
		checkCollisions();

		batControl(bat);
		batReboundAges(bat);


		drawGame(window, bat);
	}

	return 0;
}