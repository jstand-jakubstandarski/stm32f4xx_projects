/*
 * Project: Drivers development tutorial
 * Target MCU: STM32F401XE
 * Author: Jakub Standarski 
 *
 */

#include "stm32f401xe_driver_gpio.h"

#include "stm32f401xe.h"



/*****************************************************************************/
/* GPIO API definitions */
/*****************************************************************************/

void gpio_clock_enable(gpio_registers_t *gpio_port)
{
    if(gpio_port == GPIOA) {
        GPIOA_CLOCK_ENABLE();
    } else if(gpio_port == GPIOB) {
        GPIOB_CLOCK_ENABLE();
    } else if(gpio_port == GPIOC) {
        GPIOC_CLOCK_ENABLE();
    } else if(gpio_port == GPIOD) {
        GPIOD_CLOCK_ENABLE();
    } else if(gpio_port == GPIOE) {
        GPIOE_CLOCK_ENABLE();
    } else if(gpio_port == GPIOH) {
        GPIOH_CLOCK_ENABLE();
    } else {
        /* TODO */
    }
}



void gpio_clock_disable(gpio_registers_t *gpio_port)
{
    if(gpio_port == GPIOA) {
        GPIOA_CLOCK_DISABLE();
    } else if(gpio_port == GPIOB) {
        GPIOB_CLOCK_DISABLE();
    } else if(gpio_port == GPIOC) {
        GPIOC_CLOCK_DISABLE();
    } else if(gpio_port == GPIOD) {
        GPIOD_CLOCK_DISABLE();
    } else if(gpio_port == GPIOE) {
        GPIOE_CLOCK_DISABLE();
    } else if(gpio_port == GPIOH) {
        GPIOH_CLOCK_DISABLE();
    } else {
        /* TODO */
    }
}



void gpio_pin_init_config(gpio_handle_t *gpio_handle)
{
    uint32_t settings = 0;

    settings |= gpio_handle->gpio_pin_config.pin_mode <<
        (2 * gpio_handle->gpio_pin_config.pin_number);

    settings |= gpio_handle->gpio_pin_config.pin_output_type <<
        gpio_handle->gpio_pin_config.pin_number;

    settings |= gpio_handle->gpio_pin_config.pin_speed <<
        (2* gpio_handle->gpio_pin_config.pin_number);

    settings |= gpio_handle->gpio_pin_config.pin_pullup_pulldown_control <<
        (2 * gpio_handle->gpio_pin_config.pin_number);

    gpio_handle->gpio_port |= settings;
}

