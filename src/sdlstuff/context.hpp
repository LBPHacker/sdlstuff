#pragma once

#include <SDL.h>

namespace sdlstuff
{
	class context
	{
	public:
		context();
		~context();

		static Uint32 sdl_event_type;
	};
}
