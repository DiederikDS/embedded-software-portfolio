#pragma once

#include <cstdint>
#include "Register.h"
#include "Model/Board.h"

namespace GPIOModer{

	inline void setOutput(std::uintptr_t port, std::uint8_t pin){
		Register::getRegister(port) &= ~(3U<<(pin*2));
		Register::getRegister(port) |= (1U<<(pin*2));
	}

}
