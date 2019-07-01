#pragma once

#include <stdexcept>

namespace sdlstuff
{
	class nice_error : public std::runtime_error
	{
	public:
		nice_error(std::string origin);
	};
}
