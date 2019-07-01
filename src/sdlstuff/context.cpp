#include "context.hpp"

#include "nice_error.hpp"

#include <string>

namespace sdlstuff
{
	context::context()
	{
		if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER) < 0)
		{
			throw sdlstuff::nice_error("SDL_Init");
		}

		sdl_event_type = SDL_RegisterEvents(1);
	}

	context::~context()
	{
		SDL_Quit();
	}

	Uint32 context::sdl_event_type;
}
