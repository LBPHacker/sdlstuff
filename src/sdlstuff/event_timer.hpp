#pragma once

#include "timer.hpp"

namespace r3emu::sdlstuff
{
	class event_timer : public timer
	{
	public:
		event_timer(Sint32 code);
	};
}
