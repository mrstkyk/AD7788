
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


#ifndef      _AD7788_Registers_H
#define      _AD7788_Registers_H



/*
   @Brief         Special Function Registers For  AD7788_CommunicationReg
   @Description   Usage like that
                  AD7788_CommunicationReg8bits.CH0 = 1;
                                or
                  AD7788_CommunicationReg = 0x02;
                  DEFAULT Value = 0x00
 */
 volatile union
{
        unsigned short AD7788_CommunicationReg;
        union
        {
                struct
                 {
                   unsigned short CH:2;
                   unsigned short CREAD:1;
                   unsigned short R:1;
                   unsigned short RS:2;
                   unsigned short :1;
                   unsigned short WEN:1;
                 };
                struct
                 {
                   unsigned short CH0:1;
                   unsigned short CH1:1;
                   unsigned short :2;
                   unsigned short RS0:1;
                   unsigned short RS1:1;
                   unsigned short :2;
                 };
        }AD7788_CommunicationReg8bits;
} @ 0x00;

/*
   @Brief         Special Function Registers For  AD7788_StatusReg
   @Description   Usage like that
                  AD7788_StatusReg8bits.CH0 = 1;
                                or
                  AD7788_StatusReg = 0x02;
                  DEFAULT Value = 0x88
 */
 volatile union
{
        unsigned short AD7788_StatusReg;
        union
        {
                struct
                {
                   unsigned short CH:2;
                   unsigned short WL:1;
                   unsigned short :3;
                   unsigned short ERR:1;
                   unsigned short RDY:1;
                 };
                struct
                 {
                   unsigned short CH0:1;
                   unsigned short CH1:1;
                   unsigned short :6;
                 };
        }AD7788_StatusReg8bits;
} @ 0x88;

/*
   @Brief         Special Function Registers For  AD7788_ModeReg
   @Description   Usage like that
                  AD7788_ModeReg8bits.MD0 = 1;
                                or
                  AD7788_ModeReg = 0x02;
                  DEFAULT Value = 0x02
 */
 volatile union
{
        unsigned short AD7788_ModeReg;
        union
        {
                struct
                {
                   unsigned short :2;
                   unsigned short P:1;
                   unsigned short :3;
                   unsigned short MD:2;
                 };
                struct
                 {
                   unsigned short :6;
                   unsigned short MD0:1;
                   unsigned short MD1:1;
                 };
        }AD7788_ModeReg8bits;
} @ 0x02;


/*
   @Brief         Special Function Registers For  AD7788_DataReg
   @Description   Usage like that
                  AD7788_DataReg = 0x02;
                  DEFAULT Value = 0x0000
 */
volatile union
{
unsigned int AD7788_DataReg;

unsigned int :32;

} @ 0x0000 ;

#endif
