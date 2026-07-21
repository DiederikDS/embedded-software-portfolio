#pragma once

#include <cstdint>

namespace Board {
	//Peripheral Port addresses
	constexpr std::uintptr_t GPIOA_BASE = 0x48000000;
	constexpr std::uintptr_t GPIOC_BASE = 0x48000800;

	//RCC port addresses
	constexpr std::uintptr_t RCC_BASE = 0x40021000;
	constexpr std::uintptr_t RCC_AHB2ENR_OFFSET = 0x4C;
	constexpr std::uintptr_t RCC_AHB2ENR = RCC_BASE +  RCC_AHB2ENR_OFFSET;

	//GPIOX offsets
	constexpr std::uintptr_t GPIOX_MODER_OFFSET = 0x00;
	constexpr std::uintptr_t GPIOx_ODR_OFFSET = 0x14;
	constexpr std::uintptr_t GPIOX_BSRR_OFFSET = 0x18;
	constexpr std::uintptr_t GPIOX_IDR_OFFSET = 0x10;
}
