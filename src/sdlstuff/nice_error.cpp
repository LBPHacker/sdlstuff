#include "nice_error.hpp"

#include <SDL.h>

namespace sdlstuff
{
	nice_error::nice_error(std::string origin) :
		runtime_error(origin + ": " + SDL_GetError())
	{
	}
}
