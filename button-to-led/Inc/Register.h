#pragma once

#include <cstdint>

namespace Register{
	inline volatile std::uint32_t& getRegister(std::uintptr_t address){
		return *reinterpret_cast<volatile std::uint32_t*>(address);
	}
}


