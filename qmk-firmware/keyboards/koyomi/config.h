// Copyright 2022 Stefan Kerkmann
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

#define PS2_DATA_PIN GP14
#define PS2_CLOCK_PIN GP15

#define LED_CAPS_LOCK_PIN GP16
#define LED_NUM_LOCK_PIN GP13
#define LED_SCROLL_LOCK_PIN GP12
#define LED_PIN_ON_STATE 1