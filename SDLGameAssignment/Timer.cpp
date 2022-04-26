#include "Timer.h"

Timer::Timer()
{
	m_line.Load("Assets/Fonts/Pixeled.ttf", 400);
	m_line.SetColor(49, 211, 243, 255);
	m_line.SetDimension(150, 100);
}
Timer::~Timer()
{
	m_line.Unload();
}
void Timer::CountDown()
{
	m_start = clock();
	auto secondsNeeded = (m_timeSet * CLOCKS_PER_SEC);	
	auto timeText = secondsNeeded - m_start;
	auto result = static_cast<int>((timeText) / 1000);
	m_line.SetText("Time " + std::to_string(result));
	m_timeGet = result;
}
void Timer::SetText(std::string text)
{
	m_line.SetText(text);
}
void Timer::SetDimension(const int width, const int height)
{
	m_line.SetDimension(width, height);
}
void Timer::SetPosition(int x, int y)
{
	m_positionX = x;
	m_positionY = y;
}
int Timer::GetTime()
{
	return m_timeGet;
}
int Timer::SetTime(int time)
{
	m_timeGet = time;
	m_timeSet = time;
	return m_timeSet;
}
void Timer::Render()
{
	m_line.Render(m_positionX, m_positionY);
}