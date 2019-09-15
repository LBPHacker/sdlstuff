#pragma once

#include <SDL.h>

namespace sdlstuff
{
	template<class types>
	class enum_event
	{
	public:
		using event_types = types;

	private:
		Uint32 sdl_event;

	public:
		enum_event()
		{
			sdl_event = SDL_RegisterEvents(1);
		}

		Uint32 sdl_event_type() const
		{
			return sdl_event;
		}
	};
}
