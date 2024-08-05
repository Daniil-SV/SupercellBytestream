#pragma once

#include <string>

#include "core/preprocessor/api.h"

namespace sc
{
	class SUPERCELL_API Base64
	{
	public:
		static std::string encode(const std::string& data, bool url_safe = false);
		static std::string decode(const std::string& data);
	};
}
