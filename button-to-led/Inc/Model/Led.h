#pragma once

#include <Helper/GPIOClockEnablementHelper.h>
#include "Register.h"
#include "Helper/GPIOModerHelper.h"

template <std::uintptr_t Port, std::uint8_t Pin>
class Led {
public:
	//Provides clock and sets the mode to output
	static void init(){
		GPIOClockEnablement::GPIOClock<Port>::enable();
		GPIOModer::setOutput(Port, Pin);
	}

	static void on(){
		Register::getRegister(Port + Board::GPIOX_BSRR_OFFSET) = (1U<<Pin);
	}

	static void off(){
		Register::getRegister(Port + Board::GPIOX_BSRR_OFFSET) = (1U<<(Pin + 16));
	}
};

