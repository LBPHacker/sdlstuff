#pragma once

#include <stdexcept>

namespace sdlstuff
{
	class runtime_error : public std::runtime_error
	{
	public:
		using std::runtime_error::runtime_error;
	};
}
