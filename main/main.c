/* Hello World Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"
#include "lvgl.h"
#include "ssd1306.h"
#include "ssd1306_default_if.h"
struct SSD1306_Device DeviceHandle;
static const int I2CDisplayAddress = 0x3C;
static const int I2CResetPin = -1;
void app_main(void)
{
    printf("lvgl %s \n", lv_version_info());
    SSD1306_I2CMasterInitDefault();//init esp32 i2c
    bool ret = SSD1306_I2CMasterAttachDisplayDefault(&DeviceHandle, 128, 64, I2CDisplayAddress, I2CResetPin);
    printf("SSD1306_I2CMasterAttachDisplayDefault %d \n", ret);
    // SSD1306_WriteRawData
}
