#pragma once

#include "runtime_error.hpp"

namespace sdlstuff
{
	class nice_error : public runtime_error
	{
	public:
		nice_error(std::string origin);
	};
}
