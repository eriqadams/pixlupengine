#include "Lesson01_BgColor.h"

Engine::Lesson01_BgColor::Lesson01_BgColor(Setting* setting) :Engine::Game(setting)
{
	setting->windowTitle = "Change Background Color";
}

Engine::Lesson01_BgColor::~Lesson01_BgColor()
{
}

void Engine::Lesson01_BgColor::Init()
{
	r = 255;
	mul = 1;
}

void Engine::Lesson01_BgColor::Update()
{
	if (color_duration >= 50) {
		/*if (r <= 0 || r >= 255) {
			mul *= -1;
		}*/
		//mul *= (r <= 0 || r >= 255) ? -1 : 1;
		//r += mul * 5;
		r += (mul *= (r <= 0 || r >= 255) ? -1 : 1) * 5;
		SetBackgroundColor(r, g, b);
		color_duration = 0;
	}
	color_duration += GetGameTime();
}

void Engine::Lesson01_BgColor::Render()
{

}

