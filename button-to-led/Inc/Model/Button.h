#pragma once

#include <cstdint>

#include <Helper/GPIOClockEnablementHelper.h>
#include <cstdint>
#include "Board.h"
#include "Register.h"

template <std::uintptr_t Port, std::uint8_t Pin>
class Button{
public:
	static void init(){
		GPIOClockEnablement::GPIOClock<Port>::enable();
		Register::getRegister(Board::RCC_AHB2ENR) |= (1U<<2);
		Register::getRegister(Port + Board::GPIOX_MODER_OFFSET) &= ~(3U<<(Pin * 2));
	}

	static bool read(){
		return !(Register::getRegister(Port + Board::GPIOX_IDR_OFFSET) & (1U<<Pin));
	}
};
