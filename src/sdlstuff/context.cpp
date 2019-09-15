#include "context.hpp"

#include "nice_error.hpp"

#include <string>

namespace sdlstuff
{
	context::context()
	{
		if (SDL_WasInit(0))
		{
			throw sdlstuff::runtime_error("SDL_Init has already been called");
		}

		if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
		{
			throw sdlstuff::nice_error("SDL_Init");
		}
	}

	context::~context()
	{
		SDL_Quit();
	}
}
