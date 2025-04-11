# STM32 GPIO and SysTick Timer Project

This project demonstrates how to configure and use GPIO and SysTick timer interrupts on an STM32F103C8T6 microcontroller (Blue Pill). It includes:

- GPIO initialization
- GPIO read/write/toggle
- SysTick timer initialization
- Timer-based LED blinking
- Button-controlled output pin

---

## 📁 Project Structure

- `main.c` – Main application logic
- `gpio_driver.h / gpio_driver.c` – GPIO driver functions
- `systick_timer.h / systick_timer.c` – SysTick timer setup and delay functions

---

## 🔧 Features

### ✅ GPIO

- **Input** pin setup with pull-up configuration
- **Output** pin configuration with various speed and output types
- Read digital input (e.g., button)
- Control digital output (e.g., LEDs)
- Toggle output pin

### ⏱️ SysTick Timer

- Timer interrupt every 1ms
- Interrupt handler updates a `signal` variable
- LED toggles every 1000ms (1 second)

---

## 📌 Pin Mapping

| Pin         | Function                        |
|-------------|---------------------------------|
| `PA0`       | Input Button                    |
| `PC13`      | Output LED (blinks every 1s)    |
| `PA12`      | Output LED (based on button)    |

---

## 🔁 Behavior

- `PC13` LED toggles every 1 second using SysTick timer interrupt.
- `PA12` LED turns ON when button on `PA0` is pressed, OFF otherwise.

---

## 🔩 Setup

Ensure your system uses a system clock of **108 MHz**.

```c
#define SYSTEM_CLOCK_HZ 108000000
