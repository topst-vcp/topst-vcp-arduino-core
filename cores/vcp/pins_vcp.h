/*
* hsj 20240603 test 
 */
#ifndef _PINS_VCP_H_
#define _PINS_VCP_H_

#define TCC7045

#ifdef TCC7045

#ifdef TOPST_VCP_G
/* Arduino pin name and GPIO pin name mapping 
   D0: GPIO_B[26] -> GPIO_GPB(26UL)

D0  GPIO_B[26]
D1  GPIO_B[25]
D2  GPIO_B[28]
D3  GPIO_B[11]
D4  GPIO_B[27]
D5  GPIO_B[10]
D6  GPIO_A[13]
D7  GPIO_B[01]
D8  GPIO_B[00]
D9  GPIO_A[12]
D10 GPIO_C[13]
D11 GPIO_C[14]
D12 GPIO_C[15]
D13 GPIO_C[12]
D14 GPIO_C[00]
D15 GPIO_C[01]
D16 GPIO_A[06]
D17 GPIO_A[07]
D18 GPIO_A[28]
D19 GPIO_A[29]
D20 GPIO_B[03]
D21 GPIO_B[02]
D22 GPIO_B[24]
D23 GPIO_B[23]
D24 GPIO_B[22]
D25 GPIO_B[21]
D26 GPIO_B[20]
D27 GPIO_B[19]
D28 GPIO_A[30]
D29 GPIO_A[27]
D30 GPIO_A[26]
D31 GPIO_A[24]
D32 GPIO_A[25]
D33 GPIO_A[23]
D34 GPIO_A[22]
D35 GPIO_A[21]
D36 GPIO_A[20]
D37 GPIO_A[19]
D38 GPIO_K[13]
D39 GPIO_K[12]
D40 GPIO_K[11]
D41 GPIO_A[18]
D42 GPIO_A[17]
D43 GPIO_A[16]
D44 GPIO_A[11]
D45 GPIO_A[10]
D46 GPIO_A[09]
D47 GPIO_A[08]
D48 GPIO_A[05]
D49 GPIO_A[04]
D50 GPIO_A[03]
D51 GPIO_A[02]
D52 GPIO_A[01]
D53 GPIO_A[00]
D54 GPIO_K[14]
D55 GPIO_K[15]
D56 GPIO_K[01]
D57 GPIO_K[08]

*/
#define D0 GPIO_GPB(26UL)
#define D1 GPIO_GPB(25UL)
#define D2 GPIO_GPB(28UL)
#define D3 GPIO_GPB(11UL)
#define D4 GPIO_GPB(27UL)
#define D5 GPIO_GPB(10UL)
#define D6 GPIO_GPB(01UL)
#define D7 GPIO_GPB(13UL)

#define D8 GPIO_GPB(00UL)
#define D9 GPIO_GPA(12UL)
#define D10 GPIO_GPC(13UL)
#define D11 GPIO_GPC(14UL)
#define D12 GPIO_GPC(15UL)
#define D13 GPIO_GPC(12UL)
#define D14 GPIO_GPC(00UL)
#define D15 GPIO_GPC(01UL)

#define D16 GPIO_GPA(06UL)
#define D17 GPIO_GPA(07UL)
#define D18 GPIO_GPA(28UL)
#define D19 GPIO_GPA(29UL)
#define D20 GPIO_GPB(03UL)
#define D21 GPIO_GPB(02UL)
#define D22 GPIO_GPB(24UL)
#define D23 GPIO_GPB(23UL)
#define D24 GPIO_GPB(22UL)
#define D25 GPIO_GPB(21UL)
#define D26 GPIO_GPB(20UL)
#define D27 GPIO_GPB(19UL)
#define D28 GPIO_GPA(30UL)
#define D29 GPIO_GPA(27UL)
#define D30 GPIO_GPA(26UL)
#define D31 GPIO_GPA(24UL)
#define D32 GPIO_GPA(25UL)
#define D33 GPIO_GPA(23UL)
#define D34 GPIO_GPA(22UL)
#define D35 GPIO_GPA(21UL)
#define D36 GPIO_GPA(20UL)
#define D37 GPIO_GPA(19UL)
#define D38 GPIO_GPK(13UL)
#define D39 GPIO_GPK(12UL)
#define D40 GPIO_GPK(11UL)
#define D41 GPIO_GPA(18UL)
#define D42 GPIO_GPA(17UL)
#define D43 GPIO_GPA(16UL)
#define D44 GPIO_GPA(11UL)
#define D45 GPIO_GPA(10UL)
#define D46 GPIO_GPA(09UL)
#define D47 GPIO_GPA(08UL)
#define D48 GPIO_GPA(05UL)
#define D49 GPIO_GPA(04UL)
#define D50 GPIO_GPA(03UL)
#define D51 GPIO_GPA(02UL)
#define D52 GPIO_GPA(01UL)
#define D53 GPIO_GPA(00UL)
#define D54 GPIO_GPK(14UL)
#define D55 GPIO_GPK(15UL)
#define D56 GPIO_GPK(01UL)
#define D57 GPIO_GPK(08UL)
#endif

/* VCP digital pins alias */
typedef enum{
  GPIO_A00,  
  GPIO_A01,  
  GPIO_A02,  
  GPIO_A03,  
  GPIO_A04,  
  GPIO_A05,  
  GPIO_A06,  
  GPIO_A07,  
  GPIO_A08,  
  GPIO_A09,
  GPIO_A10, 
  GPIO_A11, 
  GPIO_A12, 
  GPIO_A13, 
  GPIO_A14, 
  GPIO_A15, 
  GPIO_A16, 
  GPIO_A17, 
  GPIO_A18, 
  GPIO_A19,
  GPIO_A20, 
  GPIO_A21, 
  GPIO_A22, 
  GPIO_A23, 
  SPI3_SDO, 
  SPI3_SDI, 
  SPI3_CS, 
  SPI3_CLK,
  GPIO_A28,
  GPIO_A29, 
  GPIO_A30
} vcpDigitalPinA;

typedef enum{
  I2C0_SCL,  
  I2C0_SDA,  
  I2C1_SCL,  
  I2C1_SDA,  
  GPIO_B04,  
  GPIO_B05,  
  GPIO_B06,  
  GPIO_B07,  
  GPIO_B08,  
  GPIO_B09,
  GPIO_B10, 
  GPIO_B11, 
  GPIO_B12, 
  GPIO_B13, 
  GPIO_B14, 
  GPIO_B15, 
  GPIO_B16, 
  GPIO_B17, 
  GPIO_B18, 
  GPIO_B19,
  GPIO_B20, 
  GPIO_B21, 
  GPIO_B22, 
  GPIO_B23, 
  GPIO_B24, 
  GPIO_B25, 
  GPIO_B26, 
  GPIO_B27,
  GPIO_B28
} vcpDigitalPinB;

typedef enum{
  GPIO_C00,  
  GPIO_C01,  
  GPIO_C02,  
  GPIO_C03,  
  GPIO_AC04,  
  GPIO_AC05,  
  GPIO_C06,  
  GPIO_C07,  
  GPIO_C08,  
  GPIO_C09,
  GPIO_C10, 
  GPIO_C11, 
  SPI1_CLK, 
  SPI1_CS, 
  SPI1_DO, 
  SPI1_DI, 
  GPIO_C16, 
  GPIO_C17, 
  GPIO_C18, 
  GPIO_C19,
  GPIO_C20, 
  GPIO_C21
} vcpDigitalPinC;

typedef enum{
  GPIO_K00,  
  GPIO_K01,  
  GPIO_K02,  
  GPIO_K03,  
  GPIO_K04,  
  GPIO_K05,  
  GPIO_K06,  
  GPIO_K07,  
  GPIO_K08,  
  GPIO_K09,
  GPIO_K10, 
  GPIO_K11, 
  GPIO_K12, 
  GPIO_K13, 
  GPIO_K14, 
  GPIO_K15, 
  GPIO_K16, 
  GPIO_K17
} vcpDigitalPinK;

// typdef enum{
//   SPI3_SDO = 24, // GPIO_A24
//   SPI3_SDI,      // GPIO_A25
//   SPI3_CS,       // GPIO_A26
//   SPI3_CLK       // GPIO_A27
// } vcpCommPin;

#endif

uint8_t pinCFG(uint32_t vcpPin, uint32_t vcpPinM);
uint8_t pinSET(uint32_t vcpPin, uint32_t vcpValue);
int pinREAD(uint32_t vcpPin);

#endif /*_PINS_VCP_H_*/
