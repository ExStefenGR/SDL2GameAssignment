#include "Input.h"

Input* Input::Instance()
{
	static Input* inputObject = new Input();
	return inputObject;
}
void Input::Update()
{
	SDL_Event events;
	while (SDL_PollEvent(&events))
	{
		if (events.type == SDL_KEYDOWN)
		{
		  if (keyboard_state_array[SDL_SCANCODE_ESCAPE])
			{
				m_keyUp = false;
				m_isKeyPressed = true;
				m_isWindowClosed = true;
				m_keyDown = events.key.keysym.sym;
			}
		  if (keyboard_state_array[SDL_SCANCODE_RETURN])
		  {
			  m_keyUp = false;
			  m_isKeyPressed = true;
			  m_keyDown = events.key.keysym.sym;
		  }
		  if (keyboard_state_array[SDL_SCANCODE_W])
		  {
			  m_keyUp = false;
			  m_isKeyPressed = true;
			  m_keyDown = events.key.keysym.sym;
		  }
		  if (keyboard_state_array[SDL_SCANCODE_D])
		  {
			  m_keyUp = false;
			  m_isKeyPressed = true;
			  m_keyDown = events.key.keysym.sym;
		  }
		  if (keyboard_state_array[SDL_SCANCODE_A])
		  {
			  m_keyUp = false;
			  m_isKeyPressed = true;
			  m_keyDown = events.key.keysym.sym;
		  }
		  if (keyboard_state_array[SDL_SCANCODE_S])
		  {
			  m_keyUp = false;
			  m_isKeyPressed = true;
			  m_keyDown = events.key.keysym.sym;
		  }
		}
		else if (events.type == SDL_KEYUP)
		{
			m_isKeyPressed = false;
			m_keyDown = NULL;
			m_keyUp = true;
		}
	}
}
char Input::getKeyUp()
{
	return m_keyUp;
}
char Input::getKeyDown()
{
	return m_keyDown;
}
bool Input::isKeyPressed()
{
	return m_isKeyPressed;
}
bool Input::IsWindowClosed()
{
	return m_isWindowClosed;
}