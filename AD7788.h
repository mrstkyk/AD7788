
/*
  @
  @   Date               :        30.01.2019 / Wednesday
  @
  @   Contact            :        Writing by Muhammet Rasit KIYAK                    @https://www.linkedin.com/in/mrstkyk/
  @
  @   License            :        GNU AFFERO GENERAL PUBLIC LICENSE v3
  @
  @   Description        :        This Library for AD7788/89 External ADC from Analog Devices
  @                               Dependency library is HAL for STM32 series (__STM32xxx_HAL_SPI_H)
  @
*/


#ifndef      _AD7788_H
#define      _AD7788_H


#include "AD7788_Registers.h"

typedef struct
{
 GPIO_TypeDef *Port;
 uint16_t Pin;
}AD7788_ChipSelect_t;

AD7788_ChipSelect_t AD7788_ChipSelect;

uint8_t AD7788_set_buf[2];
uint8_t AD7788_get_buf[2];




/*
   @Brief         Chip Select Initialization
   @Description   Initialization for selecting CS Pin
   @Parameter     GPIO_TypeDef      ->  CS Pin Port
                  uint16_t          ->  CS Pin Number
   @Return value  void
 */
void AD7788_CS_Initialization(GPIO_TypeDef *GPIOx,uint16_t GPIO_Pin);

/*
   @Brief         Chip Select @ High
   @Description   Chip Select must be high, end of spi communication
   @Parameter
   @Return value  void
 */
void AD7788_CS_High(void);

/*
   @Brief         Chip Select @ Low
   @Description   Chip Select must be low, begining of spi communication
   @Parameter
   @Return value  void
 */
void AD7788_CS_Low(void);

/*
   @Brief         Write Communication Register
   @Description   Setting Communication Register Settings
   @Parameter     SPI_HandleTypeDef ->  spi
   @Return value  void
 */
void AD7788_Set_Communication(SPI_HandleTypeDef spi);

/*
   @Brief         Read Status Register value
   @Description   Get Status Register Value
   @Parameter     SPI_HandleTypeDef ->  spi
   @Return value  uint8_t
 */
uint8_t AD7788_Get_Status(SPI_HandleTypeDef spi);

/*
   @Brief         Write Mode Register
   @Description   Setting Mode Register Settings
   @Parameter     SPI_HandleTypeDef ->  spi
   @Return value  void
 */
void AD7788_Set_Mode(SPI_HandleTypeDef spi);

/*
   @Brief         Read Mode Register value
   @Description   Get Mode Register Value
   @Parameter     SPI_HandleTypeDef ->  spi
   @Return value  uint8_t
 */
uint8_t AD7788_Get_Mode(SPI_HandleTypeDef spi);

/*
   @Brief         Read ADC Data
   @Description   Get DATA Register Value
   @Parameter     SPI_HandleTypeDef ->  spi
   @Return value  uint16_t
 */
uint16_t AD7788_Get_Data(SPI_HandleTypeDef spi);

/*
   @Brief         Initiallizaton AD778 External ADC
   @Description
   @Parameter     SPI_HandleTypeDef ->  spi
   @              GPIO_TypeDef      ->  CS Pin Port
   @              uint16_t          ->  CS Pin Number
   @Return value  void
 */
void AD7788_Initialization(SPI_HandleTypeDef spi, GPIO_TypeDef *GPIOx,uint16_t GPIO_Pin);

#endif
