#define adr_base_timer 0x2098000
#define GPT_CR  ((volatile unsigned int *)(adr_base_timer+0x00))
#define GPT_PR  ((volatile unsigned int *)(adr_base_timer+0x04))
#define GPT_SR  ((volatile unsigned int *)(adr_base_timer+0x08))
#define GPT_IR  ((volatile unsigned int *)(adr_base_timer+0x0C))
#define GPT_OCR1  ((volatile unsigned int *)(adr_base_timer+0x10))
#define GPT_OCR2  ((volatile unsigned int *)(adr_base_timer+0x14))
#define GPT_OCR3  ((volatile unsigned int *)(adr_base_timer+0x18))
#define GPT_ICR1  ((volatile unsigned int *)(adr_base_timer+0x1C))
#define GPT_ICR2  ((volatile unsigned int *)(adr_base_timer+0x20))
#define GPT_CNT  ((volatile unsigned int *)(adr_base_timer+0x24))

#define adr_base_flexcan1 0x2090000
#define FLEXCAN1_MCR ((volatile unsigned int *)(adr_base_flexcan1+0x00))
#define FLEXCAN1_CTRL1  ((volatile unsigned int *)(adr_base_flexcan1+0x04))
#define FLEXCAN1_TIMER  ((volatile unsigned int *)(adr_base_flexcan1+0x08))
#define FLEXCAN1_RXMGMASK  ((volatile unsigned int *)(adr_base_flexcan1+0x10))
#define FLEXCAN1_RX14MASK  ((volatile unsigned int *)(adr_base_flexcan1+0x14))
#define FLEXCAN1_RX15MASK  ((volatile unsigned int *)(adr_base_flexcan1+0x18))
#define FLEXCAN1_ECR  ((volatile unsigned int *)(adr_base_flexcan1+0x1C))
#define FLEXCAN1_ESR1  ((volatile unsigned int *)(adr_base_flexcan1+0x20))
#define FLEXCAN1_IMASK2  ((volatile unsigned int *)(adr_base_flexcan1+0x24))
#define FLEXCAN1_IMASK1  ((volatile unsigned int *)(adr_base_flexcan1+0x28))
#define FLEXCAN1_IFLAG2  ((volatile unsigned int *)(adr_base_flexcan1+0x2C))
#define FLEXCAN1_IFLAG1  ((volatile unsigned int *)(adr_base_flexcan1+0x30))
#define FLEXCAN1_CTRL2  ((volatile unsigned int *)(adr_base_flexcan1+0x34))
#define FLEXCAN1_ESR2  ((volatile unsigned int *)(adr_base_flexcan1+0x38))
#define FLEXCAN1_CRCR  ((volatile unsigned int *)(adr_base_flexcan1+0x44))
#define FLEXCAN1_RXFGMASK  ((volatile unsigned int *)(adr_base_flexcan1+0x48))
#define FLEXCAN1_RXFIR  ((volatile unsigned int *)(adr_base_flexcan1+0x4C))
#define FLEXCAN1_RXIMR0_RXIMR63  ((volatile unsigned int *)(adr_base_flexcan1+0x0880))
#define FLEXCAN1_GFWR  ((volatile unsigned int *)(adr_base_flexcan1+0x09E0))

#define adr_base_ccm 0x20C4000
#define CCM_CSCMR2 ((volatile unsigned int *)(adr_base_ccm+0x20))
#define CCM_CCGR2 ((volatile unsigned int *)(adr_base_ccm+0x70))

#define adr_base_i2c3 0x21A8000
#define I2C3_IADR ((volatile unsigned char *)(adr_base_i2c3+0x00))
#define I2C3_IFDR ((volatile unsigned char *)(adr_base_i2c3+0x04))
#define I2C3_I2CR ((volatile unsigned char *)(adr_base_i2c3+0x08))
#define I2C3_I2SR ((volatile unsigned char *)(adr_base_i2c3+0x0C))
#define I2C3_I2DR ((volatile unsigned char *)(adr_base_i2c3+0x10))

#define adr_base_iomuxc 0x20E0000
#define IOMUXC1_I2C ((volatile unsigned int *)(adr_base_iomuxc+0x23C))
#define IOMUXC2_I2C ((volatile unsigned int *)(adr_base_iomuxc+0x248))
#define IOMUXC3_I2C ((volatile unsigned int *)(adr_base_iomuxc+0x60C))
#define IOMUXC4_I2C ((volatile unsigned int *)(adr_base_iomuxc+0x618))
#define IOMUXC5_I2C ((volatile unsigned int *)(adr_base_iomuxc+0x8A8))
#define IOMUXC6_I2C ((volatile unsigned int *)(adr_base_iomuxc+0x8AC))
#define IOMUXC1_GPIO9 ((volatile unsigned int *)(adr_base_iomuxc+0x228))
#define IOMUXC2_GPIO9 ((volatile unsigned int *)(adr_base_iomuxc+0x5F8))

#define adr_base_gpio1 0x209C000
#define GPIO1_DIR ((volatile unsigned int *)(adr_base_gpio1+0x4))
#define GPIO1_DR ((volatile unsigned int *)(adr_base_gpio1+0x0))
