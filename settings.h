#pragma once
const float WINDOW_WIDTH = 1600.f;
const float WINDOW_HEIGHT = 800.f;
const std::string WINDOW_TITLE = "Arcanoid";

//�����
const float BAT_WIDTH = 150.f;
const float BAT_HEIGHT = 20.f;
const float BAT_OFFSET = 50.f;
const sf::Color BAT_COLOR{ sf::Color::White };
const sf::Vector2f BAT_SIZE(BAT_WIDTH, BAT_HEIGHT);
const sf::Vector2f BAT_START_POS{(WINDOW_WIDTH - BAT_WIDTH)/2, WINDOW_HEIGHT - BAT_OFFSET - BAT_HEIGHT};
const float BAT_SPEED = 5.f;

//�����
const float ballRadius = 25.f;