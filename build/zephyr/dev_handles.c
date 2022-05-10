#include <device.h>
#include <toolchain.h>

/* 1 : /soc/rcc@40021000:
 * Direct Dependencies:
 *   - (/soc)
 *   - (/clocks/pll)
 * Supported:
 *   - (/soc/adc@50040000)
 *   - (/soc/adc@50040100)
 *   - (/soc/adc@50040200)
 *   - (/soc/can@40006400)
 *   - (/soc/dac@40007400)
 *   - (/soc/dma@40020000)
 *   - (/soc/dma@40020400)
 *   - (/soc/flash-controller@40022000)
 *   - (/soc/i2c@40005400)
 *   - (/soc/i2c@40005800)
 *   - (/soc/i2c@40005c00)
 *   - (/soc/otgfs@50000000)
 *   - (/soc/quadspi@a0001000)
 *   - /soc/rng@50060800
 *   - (/soc/rtc@40002800)
 *   - (/soc/sdmmc@40012800)
 *   - (/soc/serial@40004400)
 *   - (/soc/serial@40004800)
 *   - /soc/serial@40004c00
 *   - (/soc/serial@40005000)
 *   - (/soc/serial@40008000)
 *   - /soc/serial@40013800
 *   - (/soc/spi@40003800)
 *   - /soc/spi@40003c00
 *   - /soc/spi@40013000
 *   - (/soc/timers@40000000)
 *   - (/soc/timers@40000400)
 *   - (/soc/timers@40000800)
 *   - (/soc/timers@40000c00)
 *   - (/soc/timers@40001000)
 *   - (/soc/timers@40001400)
 *   - (/soc/timers@40007c00)
 *   - (/soc/timers@40012c00)
 *   - (/soc/timers@40013400)
 *   - (/soc/timers@40014000)
 *   - (/soc/timers@40014400)
 *   - (/soc/timers@40014800)
 *   - (/soc/watchdog@40002c00)
 *   - /soc/pin-controller@48000000/gpio@48000000
 *   - /soc/pin-controller@48000000/gpio@48000400
 *   - /soc/pin-controller@48000000/gpio@48000800
 *   - /soc/pin-controller@48000000/gpio@48000c00
 *   - /soc/pin-controller@48000000/gpio@48001000
 *   - /soc/pin-controller@48000000/gpio@48001400
 *   - /soc/pin-controller@48000000/gpio@48001800
 *   - /soc/pin-controller@48000000/gpio@48001c00
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_rcc_40021000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 3, 4, 13, 5, 12, 14, 6, 2, 7, 8, 15, 9, 11, DEVICE_HANDLE_ENDS };

/* 2 : /soc/pin-controller@48000000/gpio@48001c00:
 * Direct Dependencies:
 *   - (/soc/pin-controller@48000000)
 *   - /soc/rcc@40021000
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_pin_controller_48000000_S_gpio_48001c00[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 3 : /soc/pin-controller@48000000/gpio@48001800:
 * Direct Dependencies:
 *   - (/soc/pin-controller@48000000)
 *   - /soc/rcc@40021000
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_pin_controller_48000000_S_gpio_48001800[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 4 : /soc/pin-controller@48000000/gpio@48001400:
 * Direct Dependencies:
 *   - (/soc/pin-controller@48000000)
 *   - /soc/rcc@40021000
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_pin_controller_48000000_S_gpio_48001400[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 5 : /soc/pin-controller@48000000/gpio@48001000:
 * Direct Dependencies:
 *   - (/soc/pin-controller@48000000)
 *   - /soc/rcc@40021000
 * Supported:
 *   - /soc/spi@40003c00
 *   - /soc/spi@40003c00/ism43362@1
 *   - (/soc/spi@40003c00/spbtle-rf@0)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_pin_controller_48000000_S_gpio_48001000[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 16, 14, DEVICE_HANDLE_ENDS };

/* 6 : /soc/pin-controller@48000000/gpio@48000c00:
 * Direct Dependencies:
 *   - (/soc/pin-controller@48000000)
 *   - /soc/rcc@40021000
 * Supported:
 *   - /soc/spi@40003c00
 *   - (/soc/i2c@40005800/lsm6dsl@6a)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_pin_controller_48000000_S_gpio_48000c00[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 14, DEVICE_HANDLE_ENDS };

/* 7 : /soc/pin-controller@48000000/gpio@48000800:
 * Direct Dependencies:
 *   - (/soc/pin-controller@48000000)
 *   - /soc/rcc@40021000
 * Supported:
 *   - (/gpio_keys/button_0)
 *   - (/soc/i2c@40005800/vl53l0x@29)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_pin_controller_48000000_S_gpio_48000800[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 8 : /soc/pin-controller@48000000/gpio@48000400:
 * Direct Dependencies:
 *   - (/soc/pin-controller@48000000)
 *   - /soc/rcc@40021000
 * Supported:
 *   - (/leds/led_2)
 *   - /soc/spi@40003c00/ism43362@1
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_pin_controller_48000000_S_gpio_48000400[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 16, DEVICE_HANDLE_ENDS };

/* 9 : /soc/pin-controller@48000000/gpio@48000000:
 * Direct Dependencies:
 *   - (/soc/pin-controller@48000000)
 *   - /soc/rcc@40021000
 * Supported:
 *   - (/leds/led_1)
 *   - /soc/spi@40013000
 *   - (/soc/spi@40003c00/spbtle-rf@0)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_pin_controller_48000000_S_gpio_48000000[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 15, DEVICE_HANDLE_ENDS };

/* 10 : /soc/interrupt-controller@40010400:
 * Direct Dependencies:
 *   - (/soc)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_interrupt_controller_40010400[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 11 : /soc/rng@50060800:
 * Direct Dependencies:
 *   - (/soc)
 *   - (/soc/interrupt-controller@e000e100)
 *   - /soc/rcc@40021000
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_rng_50060800[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 12 : /soc/serial@40004c00:
 * Direct Dependencies:
 *   - (/soc)
 *   - (/soc/interrupt-controller@e000e100)
 *   - /soc/rcc@40021000
 *   - (/soc/pin-controller@48000000/uart4_rx_pa1)
 *   - (/soc/pin-controller@48000000/uart4_tx_pa0)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_serial_40004c00[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 13 : /soc/serial@40013800:
 * Direct Dependencies:
 *   - (/soc)
 *   - (/soc/interrupt-controller@e000e100)
 *   - /soc/rcc@40021000
 *   - (/soc/pin-controller@48000000/usart1_rx_pb7)
 *   - (/soc/pin-controller@48000000/usart1_tx_pb6)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_serial_40013800[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 14 : /soc/spi@40003c00:
 * Direct Dependencies:
 *   - (/soc)
 *   - (/soc/interrupt-controller@e000e100)
 *   - /soc/rcc@40021000
 *   - /soc/pin-controller@48000000/gpio@48000c00
 *   - /soc/pin-controller@48000000/gpio@48001000
 *   - (/soc/pin-controller@48000000/spi3_miso_pc11)
 *   - (/soc/pin-controller@48000000/spi3_mosi_pc12)
 *   - (/soc/pin-controller@48000000/spi3_sck_pc10)
 * Supported:
 *   - /soc/spi@40003c00/ism43362@1
 *   - (/soc/spi@40003c00/spbtle-rf@0)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_spi_40003c00[] = { 5, 1, 6, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 16, DEVICE_HANDLE_ENDS };

/* 15 : /soc/spi@40013000:
 * Direct Dependencies:
 *   - (/soc)
 *   - (/soc/interrupt-controller@e000e100)
 *   - /soc/rcc@40021000
 *   - /soc/pin-controller@48000000/gpio@48000000
 *   - (/soc/pin-controller@48000000/spi1_miso_pa6)
 *   - (/soc/pin-controller@48000000/spi1_mosi_pa7)
 *   - (/soc/pin-controller@48000000/spi1_sck_pa5)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_spi_40013000[] = { 1, 9, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 16 : /soc/spi@40003c00/ism43362@1:
 * Direct Dependencies:
 *   - /soc/spi@40003c00
 *   - /soc/pin-controller@48000000/gpio@48000400
 *   - /soc/pin-controller@48000000/gpio@48001000
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_spi_40003c00_S_ism43362_1[] = { 5, 14, 8, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };
