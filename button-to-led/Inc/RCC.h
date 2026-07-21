#pragma once

#include <cstdint>

#include <Register.h>
#include <Model/Board.h>

enum class AHB2Ports : uint32_t {
	GPIOA = (1U<<0),
	GPIOB = (1U<<1),
	GPIOC = (1U<<2)
};

namespace RCC {
	inline void enable(AHB2Ports port){
			Register::getRegister(Board::RCC_AHB2ENR) |= static_cast<std::uint32_t>(port);
	}
}
