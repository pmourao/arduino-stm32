/*
  wiring_private.h - Internal header file.
  Part of Arduino - http://www.arduino.cc/

  Copyright (c) 2005-2006 David A. Mellis

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General
  Public License along with this library; if not, write to the
  Free Software Foundation, Inc., 59 Temple Place, Suite 330,
  Boston, MA  02111-1307  USA

  $Id: wiring.h 239 2007-01-12 17:58:39Z mellis $
*/

#ifndef WiringPrivate_h
#define WiringPrivate_h

/* Chiptype and standard defines */
#define STM32F10X_HD
#include <stm32f10x.h>

#define ADC_SampleTime_28Cycles5                   ((u8)0x03)

#define SPI_BaudRatePrescaler_64           ((u16)0x0028)

#define TIM_CCMR_OCMode_PWM1                   ((u16)0x0060)
#define TIM_CCMR_OCPreload_Enable              ((u16)0x0008)

#if 0
#include <stm32f10x_map.h>
#include <stm32f10x_nvic.h>
#include <stm32f10x_gpio.h>
#include <stm32f10x_systick.h>
#endif
#include <stdio.h>
#include <stdarg.h>

#include "wiring.h"

// PLL frequency
#define MCK 72000000UL
// Use Cortex-M3 systick for basic timekeeping.
// Systick is configured for 1kHz
#define TCK	1000


#ifdef __cplusplus
extern "C"{
#endif

#ifndef cbi
#define cbi(sfr, bit) (_SFR_BYTE(sfr) &= ~_BV(bit))
#endif
#ifndef sbi
#define sbi(sfr, bit) (_SFR_BYTE(sfr) |= _BV(bit))
#endif

#define EXTERNAL_INT_0 0
#define EXTERNAL_INT_1 1

#define EXTERNAL_NUM_INTERRUPTS 2

typedef void (*voidFuncPtr)(void);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
