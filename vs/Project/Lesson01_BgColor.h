#ifndef LESSON01_BGCOLOR_H
#define LESSON01_BGCOLOR_H

#include "Game.h"
#include "Setting.h"

namespace Engine {
	class Lesson01_BgColor :public Engine::Game
	{
	public:
		Lesson01_BgColor(Setting* setting);
		~Lesson01_BgColor();
		virtual void Init();
		virtual void Update();
		virtual void Render();
	private:
		float color_duration;
		int r, g, b;
		int mul;
	};
}

#endif

