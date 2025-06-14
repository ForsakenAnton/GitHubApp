#pragma once
#include <string>

struct StringExtension
{
	std::string minus(const std::string& l, const std::string& r)
	{
		if (l.size() > r.size())
		{
			std::string result = l.substr(l.size() - r.size());
			return result;
		}

		return "";
	}
};