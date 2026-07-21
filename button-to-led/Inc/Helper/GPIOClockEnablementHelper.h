#pragma once

#include <cstdint>

#include <Register.h>
#include <Model/Board.h>
#include <RCC.h>

namespace GPIOClockEnablement{

	template<std::uintptr_t Port>
	struct GPIOClock;

	template<>
	struct GPIOClock<Board::GPIOA_BASE>{
		static void enable(){
			RCC::enable(AHB2Ports::GPIOA);
		}
	};

	template<>
	struct GPIOClock<Board::GPIOC_BASE> {
		static void enable(){
			RCC::enable(AHB2Ports::GPIOC);
		}
	};
}
