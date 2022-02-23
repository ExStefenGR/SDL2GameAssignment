#pragma once
#include <SDL_ttf.h>
#include <string>
#include <memory>
#include "Screen.h"

class Text
{
public:
	static bool Initialise();
	Text();
	~Text() {}	
	void SetText(const std::string text);
	void SetColor(const SDL_Color& color);
	void SetColor(Uint8 r, Uint8 g, Uint8 b, Uint8 a);
	void SetDimension(int width, int height);
	bool Load(const std::string& filename, int fontSize);
	void Render(int xPos, int yPos, Screen& screen);
	void Unload();	
private:
	SDL_Rect m_targetRect = { 0,0,0,0 };
	SDL_Color m_color {255,255,255,255};
	SDL_Point m_dimension{10,10};
	SDL_Texture* m_texture = nullptr;
	SDL_Surface* m_textData = nullptr;
	std::string m_line = {};
	TTF_Font* m_font = nullptr;
	bool m_isDirty = true;
};