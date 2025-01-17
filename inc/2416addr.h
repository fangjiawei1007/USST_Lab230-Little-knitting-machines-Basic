//=============================================================================
// File Name : 2450addr.h
// Function  : S3C2450 Define Address Register
// History
//   0.0 : Programming start (September 15,2005)
//=============================================================================

#ifndef __2450ADDR_H__
#define __2450ADDR_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "option.h"

// chapter2 SYSEM CONTROLLER - jcs
#define rLOCKCON0    (*(volatile unsigned *)0x4C000000)  		//MPLL lock time conut
#define rLOCKCON1    (*(volatile unsigned *)0x4C000004)  		//EPLL lock time count
#define rOSCSET      (*(volatile unsigned *)0x4C000008)  		//OSC stabilization control
#define rMPLLCON     (*(volatile unsigned *)0x4C000010)  		//MPLL configuration
#define rEPLLCON     (*(volatile unsigned *)0x4C000018)  		//EPLL configuration
#define rCLKSRC      (*(volatile unsigned *)0x4C000020)  		//Clock source control
#define rCLKDIV0     (*(volatile unsigned *)0x4C000024)  		//Clock divider ratio control
#define rCLKDIV1     (*(volatile unsigned *)0x4C000028)  		//Clock divider ratio control
#define rHCLKCON     (*(volatile unsigned *)0x4C000030)  		//HCLK enable
#define rPCLKCON     (*(volatile unsigned *)0x4C000034)  		//PCLK enable
#define rSCLKCON     (*(volatile unsigned *)0x4C000038)  		//Special clock enable
#define rPWRMODE     (*(volatile unsigned *)0x4C000040)  		//Power mode control
#define rSWIRST      (*(volatile unsigned *)0x4C000044)  		//Software reset control
#define rBUSPRI0     (*(volatile unsigned *)0x4C000050)  		//Bus priority control
#define rBUSMISC     (*(volatile unsigned *)0x4C000058)  		//Bus miscellaneous bus control
#define rSYSID       (*(volatile unsigned *)0x4C00005C)  		//System ID control
#define rPWRCFG      (*(volatile unsigned *)0x4C000060)  		//Power management configuration control
#define rRSTCON      (*(volatile unsigned *)0x4C000064)  		//Reset control 
#define rRSTSTAT     (*(volatile unsigned *)0x4C000068)  		//Reset status
#define rWKUPSTAT    (*(volatile unsigned *)0x4C00006c)  		//Wakeup status
#define rINFORM0     (*(volatile unsigned *)0x4C000070)  		//Sleep mode information 0
#define rINFORM1     (*(volatile unsigned *)0x4C000074)  		//Sleep mode information 1
#define rINFORM2     (*(volatile unsigned *)0x4C000078)  		//Sleep mode information 2
#define rINFORM3     (*(volatile unsigned *)0x4C00007C)  		//Sleep mode information 3
#define rUSB_PHYCTRL (*(volatile unsigned *)0x4C000080)  		//USB phy control
#define rUSB_PHYPWR  (*(volatile unsigned *)0x4C000084)  		//USB phy power control
#define rUSB_RSTCON  (*(volatile unsigned *)0x4C000088)  		//USB phy reset control
#define rUSB_CLKCON  (*(volatile unsigned *)0x4C00008C)  		//USB phy clock control
#define rUSB_TESTTI  (*(volatile unsigned *)0x4C000090)  		//USB phy test in
#define rUSB_TESTTO  (*(volatile unsigned *)0x4C000094)  		//USB phy test out


// chapter3 EBI - oh
#define rBPRIORITY0	 (*(volatile unsigned *)0x4E800000)	//Matrix core 0 priority decision - edited by junon
#define rBPRIORITY1	 (*(volatile unsigned *)0x4E800004)	//Matrix core 1 priority decision - added by junon
#define rEBICON   	 (*(volatile unsigned *)0x4E800008)	//Bank Configuration - edited by junon


// chapter5 SSMC - junon
#define rSMBIDCYR0   (*(volatile unsigned *)0x4F000000)	//Bank0 idle cycle control 
#define rSMBIDCYR1   (*(volatile unsigned *)0x4F000020)	//Bank1 idle cycle control 
#define rSMBIDCYR2   (*(volatile unsigned *)0x4F000040)	//Bank2 idle cycle control 
#define rSMBIDCYR3   (*(volatile unsigned *)0x4F000060)	//Bank3 idle cycle control 
#define rSMBIDCYR4   (*(volatile unsigned *)0x4F000080)	//Bank0 idle cycle control 
#define rSMBIDCYR5   (*(volatile unsigned *)0x4F0000A0)	//Bank5 idle cycle control 
#define rSMBWSTRDR0  (*(volatile unsigned *)0x4F000004)	//Bank0 read wait state control 
#define rSMBWSTRDR1  (*(volatile unsigned *)0x4F000024)	//Bank1 read wait state control
#define rSMBWSTRDR2  (*(volatile unsigned *)0x4F000044)	//Bank2 read wait state control
#define rSMBWSTRDR3  (*(volatile unsigned *)0x4F000064)	//Bank3 read wait state control 
#define rSMBWSTRDR4  (*(volatile unsigned *)0x4F000084)	//Bank4 read wait state control 
#define rSMBWSTRDR5  (*(volatile unsigned *)0x4F0000A4)	//Bank5 read wait state control 
#define rSMBWSTWRR0  (*(volatile unsigned *)0x4F000008)	//Bank0 write wait state control 
#define rSMBWSTWRR1  (*(volatile unsigned *)0x4F000028)	//Bank1 write wait state control 
#define rSMBWSTWRR2  (*(volatile unsigned *)0x4F000048)	//Bank2 write wait state control 
#define rSMBWSTWRR3  (*(volatile unsigned *)0x4F000068)	//Bank3 write wait state control 
#define rSMBWSTWRR4  (*(volatile unsigned *)0x4F000088)	//Bank4 write wait state control 
#define rSMBWSTWRR5  (*(volatile unsigned *)0x4F0000A8)	//Bank5 write wait state control 
#define rSMBWSTOENR0 (*(volatile unsigned *)0x4F00000C)	//Bank0 output enable assertion delay control 
#define rSMBWSTOENR1 (*(volatile unsigned *)0x4F00002C)	//Bank1 output enable assertion delay control 
#define rSMBWSTOENR2 (*(volatile unsigned *)0x4F00004C)	//Bank2 output enable assertion delay control
#define rSMBWSTOENR3 (*(volatile unsigned *)0x4F00006C)	//Bank3 output enable assertion delay control 
#define rSMBWSTOENR4 (*(volatile unsigned *)0x4F00008C)	//Bank4 output enable assertion delay control
#define rSMBWSTOENR5 (*(volatile unsigned *)0x4F0000AC)	//Bank5 output enable assertion delay control 
#define rSMBWSTWENR0 (*(volatile unsigned *)0x4F000010)	//Bank0 write enable assertion delay control 
#define rSMBWSTWENR1 (*(volatile unsigned *)0x4F000030)	//Bank1 write enable assertion delay control 
#define rSMBWSTWENR2 (*(volatile unsigned *)0x4F000050)	//Bank2 write enable assertion delay control 
#define rSMBWSTWENR3 (*(volatile unsigned *)0x4F000070)	//Bank3 write enable assertion delay control 
#define rSMBWSTWENR4 (*(volatile unsigned *)0x4F000090)	//Bank4 write enable assertion delay control 
#define rSMBWSTWENR5 (*(volatile unsigned *)0x4F0000B0)	//Bank5 write enable assertion delay control 
#define rSMBCR0      (*(volatile unsigned *)0x4F000014)	//Bank0 control 
#define rSMBCR1      (*(volatile unsigned *)0x4F000034)	//Bank1 control 
#define rSMBCR2      (*(volatile unsigned *)0x4F000054)	//Bank2 control 
#define rSMBCR3      (*(volatile unsigned *)0x4F000074)	//Bank3 control 
#define rSMBCR4      (*(volatile unsigned *)0x4F000094)	//Bank4 control 
#define rSMBCR5      (*(volatile unsigned *)0x4F0000B4)	//Bank5 control 
#define rSMBSR0      (*(volatile unsigned *)0x4F000018)	//Bank0 status 
#define rSMBSR1      (*(volatile unsigned *)0x4F000038)	//Bank1 status 
#define rSMBSR2      (*(volatile unsigned *)0x4F000058)	//Bank2 status 
#define rSMBSR3      (*(volatile unsigned *)0x4F000078)	//Bank3 status 
#define rSMBSR4      (*(volatile unsigned *)0x4F000098)	//Bank4 status 
#define rSMBSR5      (*(volatile unsigned *)0x4F0000B8)	//Bank5 status 
#define rSMBWSTBRDR0 (*(volatile unsigned *)0x4F00001C)	//Bank0 burst read wait delay control 
#define rSMBWSTBRDR1 (*(volatile unsigned *)0x4F00003C)	//Bank1 burst read wait delay control 
#define rSMBWSTBRDR2 (*(volatile unsigned *)0x4F00005C)	//Bank2 burst read wait delay control 
#define rSMBWSTBRDR3 (*(volatile unsigned *)0x4F00007C)	//Bank3 burst read wait delay control 
#define rSMBWSTBRDR4 (*(volatile unsigned *)0x4F00009C)	//Bank4 burst read wait delay control 
#define rSMBWSTBRDR5 (*(volatile unsigned *)0x4F0000BC)	//Bank5 burst read wait delay control 
#define rSMBONETYPER (*(volatile unsigned *)0x4F000100)	//OneNAND type selection - added by junon
#define rSMCSR		 (*(volatile unsigned *)0x4F000200)	//SROMC status - edited by junon
#define rSMCCR       (*(volatile unsigned *)0x4F000204)	//SROMC control - edited by junon

#define SMC_REG_BASE 	0x4F000000	// added by junon
#define SMC_REG_OFFSET 	0x20
typedef struct tag_SMC_REGS
{
	unsigned int rSmbIdCyr;
	unsigned int rSmbWstRdr;
	unsigned int rSmbWstWrr;
	unsigned int rSmbWstOenr;
	unsigned int rSmbWstWenr;
	unsigned int rSmbCr;
	unsigned int rSmbSr;
	unsigned int rSmbWstBrdr;
} SMC_REGS;


// chapter6 MOBILE DRAM CONTROLLER - oh
#define rBANKCFG    (*(volatile unsigned *)0x48000000)	//Mobile DRAM configuration
#define rBANKCON1   (*(volatile unsigned *)0x48000004)	//Mobile DRAM control 
#define rBANKCON2   (*(volatile unsigned *)0x48000008)	//Mobile DRAM timing control 
#define rBANKCON3   (*(volatile unsigned *)0x4800000C)	//Mobile DRAM (E)MRS 
#define rREFRESH    (*(volatile unsigned *)0x48000010)	//Mobile DRAM refresh control
#define rTIMEOUT    (*(volatile unsigned *)0x48000014)	//Write Buffer Time out control 


// chapter7 Nand Flash - jcs
#define rNFCONF		(*(volatile unsigned *)0x4E000000)		  //NAND Flash configuration
#define rNFCONT		(*(volatile unsigned *)0x4E000004)      //NAND Flash control
#define rNFCMD		(*(volatile unsigned *)0x4E000008)      //NAND Flash command 
#define rNFADDR		(*(volatile unsigned *)0x4E00000C)      //NAND Flash address
#define rNFDATA		(*(volatile unsigned *)0x4E000010)      //NAND Flash data                   
#define rNFDATA8	(*(volatile unsigned char *)0x4E000010)	  // NAND Flash data
#define rNFDATA32	(*(volatile unsigned *)0x4E000010)            //NAND Flash data
#define NFDATA		0x4E000010                        
#define rNFMECCD0	(*(volatile unsigned *)0x4E000014)      //NAND Flash ECC for Main 
#define rNFMECCD1	(*(volatile unsigned *)0x4E000018)      //NAND Flash ECC for Main 
#define rNFSECCD	(*(volatile unsigned *)0x4E00001C)	  	//NAND Flash ECC for Spare Area
#define rNFSBLK 	(*(volatile unsigned *)0x4E000020)		  //NAND Flash programmable start block address
#define rNFEBLK 	(*(volatile unsigned *)0x4E000024) 	    //NAND Flash programmable end block address     
#define rNFSTAT 	(*(volatile unsigned *)0x4E000028)      //NAND Flash operation status 
#define rNFECCERR0	(*(volatile unsigned *)0x4E00002C)      //NAND Flash ECC Error Status for I/O [7:0]
#define rNFECCERR1	(*(volatile unsigned *)0x4E000030)      //NAND Flash ECC Error Status for I/O [15:8]
#define rNFMECC0	(*(volatile unsigned *)0x4E000034)      //SLC or MLC NAND Flash ECC status
#define rNFMECC1	(*(volatile unsigned *)0x4E000038)	    //SLC or MLC NAND Flash ECC status	
#define rNFSECC 	(*(volatile unsigned *)0x4E00003C)  		//NAND Flash ECC for I/O[15:0]
#define rNFMLCBITPT	(*(volatile unsigned *)0x4E000040)  		//NAND Flash 4-bit ECC Error Pattern for data[7:0]


//chapter8 CF Interface 
#define rMUX_REG             (*(volatile unsigned *)0x4B801800) //Top level control & configuration register
#define rPCCARD_CNF_STATUS   (*(volatile unsigned *)0x4B801820) //PC card configuration & status register
#define rPCCARD_INTMSK_SRC   (*(volatile unsigned *)0x4B801824) //PC card interrupt mask & source regiseter
#define rPCCARD_ATTR         (*(volatile unsigned *)0x4B801828) //PC card attribute memory area operation timing config regiseter
#define rPCCARD_IO           (*(volatile unsigned *)0x4B80182C) //PC card I/O area operation timing config regiseter
#define rPCCARD_COMM         (*(volatile unsigned *)0x4B801830) //PC card common memory area operation timing config regiseter
#define rATA_CON             (*(volatile unsigned *)0x4B801900) //ATA_CONTROL register
#define rATA_STAT            (*(volatile unsigned *)0x4B801904) //ATA_STATUS register
#define rATA_CMD             (*(volatile unsigned *)0x4B801908) //ATA transfer command
#define rATA_SWRST           (*(volatile unsigned *)0x4B80190C) //Software reset for the ATAPI host
#define rATA_IRQ             (*(volatile unsigned *)0x4B801910) //ATA_IRQ register
#define rATA_IRQ_MASK        (*(volatile unsigned *)0x4B801914) //ATA_IRQ Mask register
#define rATA_CFG             (*(volatile unsigned *)0x4B801918) //ATA_CFG register
#define rATA_PIO_TIME        (*(volatile unsigned *)0x4B80192C) //ATA_PIO_TIME register
#define rATA_UDMA_TIME       (*(volatile unsigned *)0x4B801930) //ATA_UDMA_TIME register
#define rATA_XFR_NUM         (*(volatile unsigned *)0x4B801934) //Data transfer number register
#define rATA_XFR_CNT         (*(volatile unsigned *)0x4B801938) //Current remaining transfer counter
#define rATA_TBUF_START      (*(volatile unsigned *)0x4B80193C) //Start address of track buffer 
#define rATA_TBUF_SIZE       (*(volatile unsigned *)0x4B801940) //Size of track buffer 
#define rATA_SBUF_START      (*(volatile unsigned *)0x4B801944) //Start address of source buffer
#define rATA_SBUF_SIZE       (*(volatile unsigned *)0x4B801948) //Size of source buffer
#define rATA_CADDR_TBUR      (*(volatile unsigned *)0x4B80194C) //Current address of track buffer
#define rATA_CADDR_SBUF      (*(volatile unsigned *)0x4B801950) //Current address of source buffer
#define rATA_PIO_DTR         (*(volatile unsigned *)0x4B801954) //16-bit PIO data register
#define rATA_PIO_FED         (*(volatile unsigned *)0x4B801958) //8-bit PIO device feature/error (command block) register
#define rATA_PIO_SCR         (*(volatile unsigned *)0x4B80195C) //8-bit PIO device sector count (command block) register
#define rATA_PIO_LLR         (*(volatile unsigned *)0x4B801960) //8-bit PIO device LBA low (command block) register
#define rATA_PIO_LMR         (*(volatile unsigned *)0x4B801964) //8-bit PIO device LBA middle (command block) register
#define rATA_PIO_LHR         (*(volatile unsigned *)0x4B801968) //8-bit PIO LBA high (command block) register
#define rATA_PIO_DVR         (*(volatile unsigned *)0x4B80196C) //8-bit PIO device (command block) register
#define rATA_PIO_CSD         (*(volatile unsigned *)0x4B801970) //8-bit PIO device command/status (command block) register
#define rATA_PIO_DAD         (*(volatile unsigned *)0x4B801974) //8-bit PIO device control/alternate status (control block) register
#define rATA_PIO_READY       (*(volatile unsigned *)0x4B801978) //ATA_PIO_READY register
#define rATA_PIO_RDATA       (*(volatile unsigned *)0x4B80197C) //PIO read data register while HOST read from ATA device register
#define rBUS_FIFO_STATUS     (*(volatile unsigned *)0x4B801990) //BUS_FIFO_STATUS  register
#define rATA_FIFO_STATUS     (*(volatile unsigned *)0x4B801994) //ATA_FIFO_STATUS  register


// chapter9 DMA - jcs
#define rDISRC0     (*(volatile unsigned *)0x4b000000)	//DMA 0 Initial source
#define rDISRCC0    (*(volatile unsigned *)0x4b000004)	//DMA 0 Initial source control
#define rDIDST0     (*(volatile unsigned *)0x4b000008)	//DMA 0 Initial Destination
#define rDIDSTC0    (*(volatile unsigned *)0x4b00000c)	//DMA 0 Initial Destination control
#define rDCON0      (*(volatile unsigned *)0x4b000010)	//DMA 0 Control
#define rDSTAT0     (*(volatile unsigned *)0x4b000014)	//DMA 0 Status (Read Only)
#define rDCSRC0     (*(volatile unsigned *)0x4b000018)	//DMA 0 Current source (Read Only)
#define rDCDST0     (*(volatile unsigned *)0x4b00001c)	//DMA 0 Current destination (Read Only)
#define rDMASKTRIG0 (*(volatile unsigned *)0x4b000020)	//DMA 0 Mask trigger
#define rDMAREQSEL0 (*(volatile unsigned *)0x4b000024)	//DMA 0 Request Selection register
#define rDISRC1     (*(volatile unsigned *)0x4b000100)	//DMA 1 Initial source
#define rDISRCC1    (*(volatile unsigned *)0x4b000104)	//DMA 1 Initial source control
#define rDIDST1     (*(volatile unsigned *)0x4b000108)	//DMA 1 Initial Destination
#define rDIDSTC1    (*(volatile unsigned *)0x4b00010c)	//DMA 1 Initial Destination control
#define rDCON1      (*(volatile unsigned *)0x4b000110)	//DMA 1 Control
#define rDSTAT1     (*(volatile unsigned *)0x4b000114)	//DMA 1 Status (Read Only)
#define rDCSRC1     (*(volatile unsigned *)0x4b000118)	//DMA 1 Current source (Read Only)
#define rDCDST1     (*(volatile unsigned *)0x4b00011c)	//DMA 1 Current destination (Read Only)
#define rDMASKTRIG1 (*(volatile unsigned *)0x4b000120)	//DMA 1 Mask trigger
#define rDMAREQSEL1 (*(volatile unsigned *)0x4b000124)	//DMA 1 Request Selection register
#define rDISRC2     (*(volatile unsigned *)0x4b000200)	//DMA 2 Initial source
#define rDISRCC2    (*(volatile unsigned *)0x4b000204)	//DMA 2 Initial source control
#define rDIDST2     (*(volatile unsigned *)0x4b000208)	//DMA 2 Initial Destination
#define rDIDSTC2    (*(volatile unsigned *)0x4b00020c)	//DMA 2 Initial Destination control
#define rDCON2      (*(volatile unsigned *)0x4b000210)	//DMA 2 Control
#define rDSTAT2     (*(volatile unsigned *)0x4b000214)	//DMA 2 Status (Read Only)
#define rDCSRC2     (*(volatile unsigned *)0x4b000218)	//DMA 2 Current source (Read Only)
#define rDCDST2     (*(volatile unsigned *)0x4b00021c)	//DMA 2 Current destination (Read Only)
#define rDMASKTRIG2 (*(volatile unsigned *)0x4b000220)	//DMA 2 Mask trigger
#define rDMAREQSEL2 (*(volatile unsigned *)0x4b000224)	//DMA 2 Request Selection register
#define rDISRC3     (*(volatile unsigned *)0x4b000300)	//DMA 3 Initial source
#define rDISRCC3    (*(volatile unsigned *)0x4b000304)	//DMA 3 Initial source control
#define rDIDST3     (*(volatile unsigned *)0x4b000308)	//DMA 3 Initial Destination
#define rDIDSTC3    (*(volatile unsigned *)0x4b00030c)	//DMA 3 Initial Destination control
#define rDCON3      (*(volatile unsigned *)0x4b000310)	//DMA 3 Control
#define rDSTAT3     (*(volatile unsigned *)0x4b000314)	//DMA 3 Status (Read Only)
#define rDCSRC3     (*(volatile unsigned *)0x4b000318)	//DMA 3 Current source (Read Only)
#define rDCDST3     (*(volatile unsigned *)0x4b00031c)	//DMA 3 Current destination (Read Only)
#define rDMASKTRIG3 (*(volatile unsigned *)0x4b000320)	//DMA 3 Mask trigger
#define rDMAREQSEL3 (*(volatile unsigned *)0x4b000324)	//DMA 3 Request Selection register
#define rDISRC4     (*(volatile unsigned *)0x4b000400)	//DMA 3 Initial source
#define rDISRCC4    (*(volatile unsigned *)0x4b000404)	//DMA 3 Initial source control
#define rDIDST4     (*(volatile unsigned *)0x4b000408)	//DMA 3 Initial Destination
#define rDIDSTC4    (*(volatile unsigned *)0x4b00040c)	//DMA 3 Initial Destination control
#define rDCON4      (*(volatile unsigned *)0x4b000410)	//DMA 3 Control
#define rDSTAT4     (*(volatile unsigned *)0x4b000414)	//DMA 3 Status (Read Only)
#define rDCSRC4     (*(volatile unsigned *)0x4b000418)	//DMA 3 Current source (Read Only)
#define rDCDST4     (*(volatile unsigned *)0x4b00041c)	//DMA 3 Current destination (Read Only)
#define rDMASKTRIG4 (*(volatile unsigned *)0x4b000420)	//DMA 3 Mask trigger
#define rDMAREQSEL4 (*(volatile unsigned *)0x4b000424)	//DMA 3 Request Selection register
#define rDISRC5     (*(volatile unsigned *)0x4b000500)	//DMA 3 Initial source
#define rDISRCC5    (*(volatile unsigned *)0x4b000504)	//DMA 3 Initial source control
#define rDIDST5     (*(volatile unsigned *)0x4b000508)	//DMA 3 Initial Destination
#define rDIDSTC5    (*(volatile unsigned *)0x4b00050c)	//DMA 3 Initial Destination control
#define rDCON5      (*(volatile unsigned *)0x4b000510)	//DMA 3 Control
#define rDSTAT5     (*(volatile unsigned *)0x4b000514)	//DMA 3 Status (Read Only)
#define rDCSRC5     (*(volatile unsigned *)0x4b000518)	//DMA 3 Current source (Read Only)
#define rDCDST5     (*(volatile unsigned *)0x4b00051c)	//DMA 3 Current destination (Read Only)
#define rDMASKTRIG5 (*(volatile unsigned *)0x4b000520)	//DMA 3 Mask trigger
#define rDMAREQSEL5 (*(volatile unsigned *)0x4b000524)	//DMA 3 Request Selection register 

#define DMA_REG_BASE 	0x4B000000	// added by junon
#define DMA_REG_OFFSET 	0x100
typedef struct tag_DMA_REGS
{
	unsigned int rDiSrc;
	unsigned int rDiSrcc;
	unsigned int rDiDst;
	unsigned int rDiDstc;
	unsigned int rDCon;
	unsigned int rDStat;
	unsigned int rDcSrc;
	unsigned int rDcDst;
	unsigned int rDMaskTrig;
	unsigned int rDmaReqSel;
} DMA_REGS;


// chapter10 INTERRUPT - gom
/*
#define rSRCPND		(*(volatile unsigned *)0x4a000000)	//Interrupt request status
#define rINTMOD		(*(volatile unsigned *)0x4a000004)	//Interrupt mode control
#define rINTMSK		(*(volatile unsigned *)0x4a000008)	//Interrupt mask control
#define rPRIORITY	(*(volatile unsigned *)0x4a00000c)	//IRQ priority control
#define rINTPND		(*(volatile unsigned *)0x4a000010)	//Interrupt request status
#define rINTOFFSET	(*(volatile unsigned *)0x4a000014)	//Interruot request source offset
#define rSUBSRCPND	(*(volatile unsigned *)0x4a000018)	//Sub source pending
#define rINTSUBMSK	(*(volatile unsigned *)0x4a00001c)	//Interrupt sub mask
*/
#define rSRCPND1		(*(volatile unsigned *)0x4a000000)	//Interrupt request status
#define rINTMOD1		(*(volatile unsigned *)0x4a000004)	//Interrupt mode control
#define rINTMSK1		(*(volatile unsigned *)0x4a000008)	//Interrupt mask control
#define rPRIORITY	(*(volatile unsigned *)0x4a00000c)	//IRQ priority control
#define rINTPND1		(*(volatile unsigned *)0x4a000010)	//Interrupt request status
#define rINTOFFSET1	(*(volatile unsigned *)0x4a000014)	//Interruot request source offset
#define rSUBSRCPND	(*(volatile unsigned *)0x4a000018)	//Sub source pending
#define rINTSUBMSK	(*(volatile unsigned *)0x4a00001c)	//Interrupt sub mask
#define rPRIORITY_MODE1	(*(volatile unsigned *)0x4a000030)	//IRQ priority mode register
#define rPRIORITY_UPDATE1	(*(volatile unsigned *)0x4a000034)	//IRQ priority update register
#define rSRCPND2		(*(volatile unsigned *)0x4a000040)	//Indicate the interrupt request status for group 2...
#define rINTMOD2		(*(volatile unsigned *)0x4a000044)	//Interrupt mode regiseter for group 2 ...
#define rINTMSK2		(*(volatile unsigned *)0x4a000048)	//Interrupt mask control
#define rINTPND2		(*(volatile unsigned *)0x4a000050)	//Interrupt request status
#define rINTOFFSET2	(*(volatile unsigned *)0x4a000054)	//Interruot request source offset
#define rPRIOPRITY_MODE2	(*(volatile unsigned *)0x4a000070)	//IRQ priority mode register
#define rPRIOPRITY_UPDATE2	(*(volatile unsigned *)0x4a000074)	//IRQ priority update register


// chapter11 I/O PORT - oh
#define rGPACON   	(*(volatile unsigned *)0x56000000)	//Configure the pins of port A
#define rGPADAT   	(*(volatile unsigned *)0x56000004)	//The data for port A
#define rGPBCON  	(*(volatile unsigned *)0x56000010)	//Configure the pins of port B
#define rGPBDAT   	(*(volatile unsigned *)0x56000014)	//The data for port B
#define rGPBUDP    	(*(volatile unsigned *)0x56000018)	//Pull-down disable for port
#define rGPBSEL 	(*(volatile unsigned *)0x5600001c)	//select the founction port B
#define rGPCCON   	(*(volatile unsigned *)0x56000020)	//Configure the pins of port C
#define rGPCDAT   	(*(volatile unsigned *)0x56000024)	//The data for port C
#define rGPCUDP    	(*(volatile unsigned *)0x56000028)	//Pull-down disable for port C
#define rGPDCON   	(*(volatile unsigned *)0x56000030)	//Configure the pins of port D
#define rGPDDAT   	(*(volatile unsigned *)0x56000034)	//The data for port D
#define rGPDUDP    	(*(volatile unsigned *)0x56000038)	//Pull-down disable for port D
#define rGPECON   	(*(volatile unsigned *)0x56000040)	//Configure the pins of port E
#define rGPEDAT   	(*(volatile unsigned *)0x56000044)	//The data for port E
#define rGPEUDP    	(*(volatile unsigned *)0x56000048)	//Pull-down disable for port E
#define rGPESEL    	(*(volatile unsigned *)0x5600004c)	//select the function of port E
#define rGPFCON   	(*(volatile unsigned *)0x56000050)	//Configure the pins of port F
#define rGPFDAT   	(*(volatile unsigned *)0x56000054)	//The data for port F
#define rGPFUDP    	(*(volatile unsigned *)0x56000058)	//Pull-down disable for port F
#define rGPGCON   	(*(volatile unsigned *)0x56000060)	//Configure the pins of portt G 
#define rGPGDAT   	(*(volatile unsigned *)0x56000064)	//The data for port G 
#define rGPGUDP    	(*(volatile unsigned *)0x56000068)	//Pull-down disable for port G
#define rGPHCON		(*(volatile unsigned *)0x56000070)	//Configure the pins of porttt H 
#define rGPHDAT		(*(volatile unsigned *)0x56000074)	//The data for port H 
#define rGPHUDP		(*(volatile unsigned *)0x56000078)	//Pull-down disable for port H
//#define rGPJCON		(*(volatile unsigned *)0x560000D0)	//Configure the pins of portttt J
//#define rGPJDAT		(*(volatile unsigned *)0x560000D4)	//The data for port J 
//#define rGPJUDP		(*(volatile unsigned *)0x560000D8)	//Pull-down disable for porl J
#define rGPKCON		(*(volatile unsigned *)0x560000E0)	//Configure the pins of portttt K
#define rGPKDAT		(*(volatile unsigned *)0x560000E4)	//The data for port K 
#define rGPKUDP		(*(volatile unsigned *)0x560000E8)	//Pull-down disable for porl K
#define rGPLCON		(*(volatile unsigned *)0x560000F0)	//Configure the pins of portttt F
#define rGPLDAT		(*(volatile unsigned *)0x560000F4)	//The data for port F 
#define rGPLUDP		(*(volatile unsigned *)0x560000F8)	//Pull-down disable for porl F
#define rGPMCON		(*(volatile unsigned *)0x56000100)	//Configure the pins of portttt M
#define rGPMDAT		(*(volatile unsigned *)0x56000104)	//The data for port M 
#define rGPMUDP		(*(volatile unsigned *)0x56000108)	//Pull-down disable for porl M
#define rMISCCR		(*(volatile unsigned *)0x56000080)	//Miscellaneous control
#define rDCLKCON	(*(volatile unsigned *)0x56000084)	//DCLK0/1 control
#define rEXTINT0	(*(volatile unsigned *)0x56000088)	//External interrupt control register 0
#define rEXTINT1	(*(volatile unsigned *)0x5600008C)	//External interrupt control register 1
#define rEXTINT2	(*(volatile unsigned *)0x56000090)	//External interrupt control register 2
#define rEINTFLT0	(*(volatile unsigned *)0x56000094)	//Reserved
#define rEINTFLT1	(*(volatile unsigned *)0x56000098)	//Reserved
#define rEINTFLT2	(*(volatile unsigned *)0x5600009c)	//External interrupt filter control register 2
#define rEINTFLT3	(*(volatile unsigned *)0x560000A0)	//External interrupt filter control register 3
#define rEINTMASK	(*(volatile unsigned *)0x560000A4)	//External interrupt mask
#define rEINTPEND	(*(volatile unsigned *)0x560000A8)	//External interrupt pending
#define rGSTATUS0	(*(volatile unsigned *)0x560000AC)	//External pin status
#define rGSTATUS1	(*(volatile unsigned *)0x560000B0)	//Chip ID(0x32443000)
#define rGSTATUS2	(*(volatile unsigned *)0x560000B4)	//Infrom
#define rGSTATUS3	(*(volatile unsigned *)0x560000B8)	//Infrom
#define rGSTATUS4	(*(volatile unsigned *)0x560000BC)	//Infrom
#define rMSLCON		(*(volatile unsigned *)0x560000CC)	//memory stop control register
#define rPDDMCON	(*(volatile unsigned *)0x56000114)
#define rPDSMCON	(*(volatile unsigned *)0x56000118)

// chapter12 WATCH DOG TIMER - junon
#define rWTCON		(*(volatile unsigned *)0x53000000)	//Watch-dog timer mode
#define rWTDAT		(*(volatile unsigned *)0x53000004)	//Watch-dog timer data
#define rWTCNT		(*(volatile unsigned *)0x53000008)	//Watch-dog timer count


// chapter13 PWM TIMER - jcs
#define rTCFG0  	(*(volatile unsigned *)0x51000000)	//Configures the two 8-bit presclers
#define rTCFG1  	(*(volatile unsigned *)0x51000004)	//5-MUX & DMA mode selecton
#define rTCON   	(*(volatile unsigned *)0x51000008)	//Timer control
#define rTCNTB0 	(*(volatile unsigned *)0x5100000c)	//Timer 0 count buffer 
#define rTCMPB0 	(*(volatile unsigned *)0x51000010)	//Timer 0 compare buffer 
#define rTCNTO0 	(*(volatile unsigned *)0x51000014)	//Timer 0 count observation 
#define rTCNTB1 	(*(volatile unsigned *)0x51000018)	//Timer 1 count buffer 
#define rTCMPB1 	(*(volatile unsigned *)0x5100001c)	//Timer 1 compare buffer 
#define rTCNTO1 	(*(volatile unsigned *)0x51000020)	//Timer 1 count observation 
#define rTCNTB2 	(*(volatile unsigned *)0x51000024)	//Timer 2 count buffer 
#define rTCMPB2 	(*(volatile unsigned *)0x51000028)	//Timer 2 compare buffer 
#define rTCNTO2 	(*(volatile unsigned *)0x5100002c)	//Timer 2 count observation 
#define rTCNTB3 	(*(volatile unsigned *)0x51000030)	//Timer 3 count buffer 
#define rTCMPB3 	(*(volatile unsigned *)0x51000034)	//Timer 3 compare buffer 
#define rTCNTO3 	(*(volatile unsigned *)0x51000038)	//Timer 3 count observation 
#define rTCNTB4 	(*(volatile unsigned *)0x5100003c)	//Timer 4 count buffer 
#define rTCNTO4 	(*(volatile unsigned *)0x51000040)	//Timer 4 count observation


// chapter14 RTC - oh
#ifdef __BIG_ENDIAN
#define rRTCCON		(*(volatile unsigned char *)0x57000043)	//RTC control
#define rTICNT0		(*(volatile unsigned char *)0x57000047)	//Tick time count register 0
#define rTICNT1		(*(volatile unsigned char *)0x5700004F)	//Tick time count register 1
#define rRTCALM		(*(volatile unsigned char *)0x57000053)	//RTC alarm control
#define rALMSEC		(*(volatile unsigned char *)0x57000057)	//Alarm second
#define rALMMIN		(*(volatile unsigned char *)0x5700005b)	//Alarm minute
#define rALMHOUR	(*(volatile unsigned char *)0x5700005f)	//Alarm Hour
#define rALMDATE	(*(volatile unsigned char *)0x57000063)	//Alarm date   //edited by junon
#define rALMMON		(*(volatile unsigned char *)0x57000067)	//Alarm month
#define rALMYEAR	(*(volatile unsigned char *)0x5700006b)	//Alarm year
#define rRTCRST		(*(volatile unsigned char *)0x5700006f)	//RTC round reset
#define rBCDSEC		(*(volatile unsigned char *)0x57000073)	//BCD second
#define rBCDMIN		(*(volatile unsigned char *)0x57000077)	//BCD minute
#define rBCDHOUR	(*(volatile unsigned char *)0x5700007b)	//BCD hour
#define rBCDDATE	(*(volatile unsigned char *)0x5700007f)	//BCD date  //edited by junon
#define rBCDDAY		(*(volatile unsigned char *)0x57000083)	//BCD day   //edited by junon
#define rBCDMON		(*(volatile unsigned char *)0x57000087)	//BCD month
#define rBCDYEAR	(*(volatile unsigned char *)0x5700008b)	//BCD year
#define rRTCLBAT	(*(volatile unsigned char *)0x57000097)	//RTC LOW BATTERY CHECK

#else //Little Endian
#define rRTCCON		(*(volatile unsigned char *)0x57000040)	//RTC control
#define rTICNT0		(*(volatile unsigned char *)0x57000044)	//Tick time count register 0
#define rTICNT1		(*(volatile unsigned char *)0x5700004c)	//Tick time count register 1
#define rRTCALM		(*(volatile unsigned char *)0x57000050)	//RTC alarm control
#define rALMSEC		(*(volatile unsigned char *)0x57000054)	//Alarm second
#define rALMMIN		(*(volatile unsigned char *)0x57000058)	//Alarm minute
#define rALMHOUR	(*(volatile unsigned char *)0x5700005c)	//Alarm Hour
#define rALMDATE	(*(volatile unsigned char *)0x57000060)	//Alarm date  // edited by junon
#define rALMMON		(*(volatile unsigned char *)0x57000064)	//Alarm month
#define rALMYEAR	(*(volatile unsigned char *)0x57000068)	//Alarm year
#define rRTCRST		(*(volatile unsigned char *)0x5700006c)	//RTC round reset
#define rBCDSEC		(*(volatile unsigned char *)0x57000070)	//BCD second
#define rBCDMIN		(*(volatile unsigned char *)0x57000074)	//BCD minute
#define rBCDHOUR	(*(volatile unsigned char *)0x57000078)	//BCD hour
#define rBCDDATE	(*(volatile unsigned char *)0x5700007c)	//BCD date  //edited by junon
#define rBCDDAY		(*(volatile unsigned char *)0x57000080)	//BCD day   //edited by junon
#define rBCDMON		(*(volatile unsigned char *)0x57000084)	//BCD month
#define rBCDYEAR	(*(volatile unsigned char *)0x57000088)	//BCD year
#define rRTCLBAT	(*(volatile unsigned char *)0x57000094)	//RTC LOW BATTERY CHECK
#endif  //RTC


// chapter15 UART - gom
#define rULCON0     (*(volatile unsigned *)0x50000000)	//UART 0 Line control
#define rUCON0      (*(volatile unsigned *)0x50000004)	//UART 0 Control
#define rUFCON0     (*(volatile unsigned *)0x50000008)	//UART 0 FIFO control
#define rUMCON0     (*(volatile unsigned *)0x5000000c)	//UART 0 Modem control
#define rUTRSTAT0   (*(volatile unsigned *)0x50000010)	//UART 0 Tx/Rx status
#define rUERSTAT0   (*(volatile unsigned *)0x50000014)	//UART 0 Rx error status
#define rUFSTAT0    (*(volatile unsigned *)0x50000018)	//UART 0 FIFO status
#define rUMSTAT0    (*(volatile unsigned *)0x5000001c)	//UART 0 Modem status
#define rUBRDIV0    (*(volatile unsigned *)0x50000028)	//UART 0 Baud rate divisor
#define rUDIVSLOT0  (*(volatile unsigned *)0x5000002C)	//UART 0 Baud rate divisor
#define rULCON1     (*(volatile unsigned *)0x50004000)	//UART 1 Line control
#define rUCON1      (*(volatile unsigned *)0x50004004)	//UART 1 Control
#define rUFCON1     (*(volatile unsigned *)0x50004008)	//UART 1 FIFO control
#define rUMCON1     (*(volatile unsigned *)0x5000400c)	//UART 1 Modem control
#define rUTRSTAT1   (*(volatile unsigned *)0x50004010)	//UART 1 Tx/Rx status
#define rUERSTAT1   (*(volatile unsigned *)0x50004014)	//UART 1 Rx error status
#define rUFSTAT1    (*(volatile unsigned *)0x50004018)	//UART 1 FIFO status
#define rUMSTAT1    (*(volatile unsigned *)0x5000401c)	//UART 1 Modem status
#define rUBRDIV1    (*(volatile unsigned *)0x50004028)	//UART 1 Baud rate divisor
#define rUDIVSLOT1  (*(volatile unsigned *)0x5000402C)	//UART 1 Baud rate divisor
#define rULCON2     (*(volatile unsigned *)0x50008000)	//UART 2 Line control
#define rUCON2      (*(volatile unsigned *)0x50008004)	//UART 2 Control
#define rUFCON2     (*(volatile unsigned *)0x50008008)	//UART 2 FIFO control
#define rUMCON2     (*(volatile unsigned *)0x5000800c)	//UART 2 Modem control
#define rUTRSTAT2   (*(volatile unsigned *)0x50008010)	//UART 2 Tx/Rx status
#define rUERSTAT2   (*(volatile unsigned *)0x50008014)	//UART 2 Rx error status
#define rUFSTAT2    (*(volatile unsigned *)0x50008018)	//UART 2 FIFO status
#define rUMSTAT2    (*(volatile unsigned *)0x5000801c)	//UART 2 Modem status
#define rUBRDIV2    (*(volatile unsigned *)0x50008028)	//UART 2 Baud rate divisor
#define rUDIVSLOT2  (*(volatile unsigned *)0x5000802C)	//UART 2 Baud rate divisor
#define rULCON3     (*(volatile unsigned *)0x5000C000)	//UART 2 Line control
#define rUCON3      (*(volatile unsigned *)0x5000C004)	//UART 3 Control
#define rUFCON3     (*(volatile unsigned *)0x5000C008)	//UART 3 FIFO control
#define rUMCON3     (*(volatile unsigned *)0x5000C00c)	//UART 3 Modem control
#define rUTRSTAT3   (*(volatile unsigned *)0x5000C010)	//UART 3 Tx/Rx status
#define rUERSTAT3   (*(volatile unsigned *)0x5000C014)	//UART 3 Rx error status
#define rUFSTAT3    (*(volatile unsigned *)0x5000C018)	//UART 3 FIFO status
#define rUMSTAT3    (*(volatile unsigned *)0x5000C01c)	//UART 3 Modem status
#define rUBRDIV3    (*(volatile unsigned *)0x5000C028)	//UART 3 Baud rate divisor
#define rUDIVSLOT3  (*(volatile unsigned *)0x5000C02C)	//UART 3 Baud rate divisor

#ifdef __BIG_ENDIAN
#define rUTXH0      (*(volatile unsigned char *)0x50000023)	//UART 0 Transmission Hold
#define rURXH0      (*(volatile unsigned char *)0x50000027)	//UART 0 Receive buffer
#define rUTXH1      (*(volatile unsigned char *)0x50004023)	//UART 1 Transmission Hold
#define rURXH1      (*(volatile unsigned char *)0x50004027)	//UART 1 Receive buffer
#define rUTXH2      (*(volatile unsigned char *)0x50008023)	//UART 2 Transmission Hold
#define rURXH2      (*(volatile unsigned char *)0x50008027)	//UART 2 Receive buffer
#define rUTXH3      (*(volatile unsigned char *)0x5000C023)	//UART 3 Transmission Hold
#define rURXH3      (*(volatile unsigned char *)0x5000C027)	//UART 3 Receive buffer
#define WrUTXH0(ch) (*(volatile unsigned char *)0x50000023)=(unsigned char)(ch)
#define RdURXH0()   (*(volatile unsigned char *)0x50000027)
#define WrUTXH1(ch) (*(volatile unsigned char *)0x50004023)=(unsigned char)(ch)
#define RdURXH1()   (*(volatile unsigned char *)0x50004027)
#define WrUTXH2(ch) (*(volatile unsigned char *)0x50008023)=(unsigned char)(ch)
#define RdURXH2()   (*(volatile unsigned char *)0x50008027)
#define WrUTXH3(ch) (*(volatile unsigned char *)0x5000C023)=(unsigned char)(ch)
#define RdURXH3()   (*(volatile unsigned char *)0x5000C027)
#define UTXH0       (0x50000020+3)  //Byte_access address by DMA
#define URXH0       (0x50000024+3)
#define UTXH1       (0x50004020+3)
#define URXH1       (0x50004024+3)
#define UTXH2       (0x50008020+3)
#define URXH2       (0x50008024+3)
#define UTXH3       (0x5000C020+3)
#define URXH3       (0x5000C024+3)

#else //Little Endian
#define rUTXH0		(*(volatile unsigned char *)0x50000020)	//UART 0 Transmission Hold
#define rURXH0		(*(volatile unsigned char *)0x50000024)	//UART 0 Receive buffer
#define rUTXH1		(*(volatile unsigned char *)0x50004020)	//UART 1 Transmission Hold
#define rURXH1		(*(volatile unsigned char *)0x50004024)	//UART 1 Receive buffer
#define rUTXH2		(*(volatile unsigned char *)0x50008020)	//UART 2 Transmission Hold
#define rURXH2		(*(volatile unsigned char *)0x50008024)	//UART 2 Receive buffer
#define rUTXH3		(*(volatile unsigned char *)0x5000C020)	//UART 3 Transmission Hold
#define rURXH3		(*(volatile unsigned char *)0x5000C024)	//UART 3 Receive buffer
#define WrUTXH0(ch) (*(volatile unsigned char *)0x50000020)=(unsigned char)(ch)
#define RdURXH0()   (*(volatile unsigned char *)0x50000024)
#define WrUTXH1(ch) (*(volatile unsigned char *)0x50004020)=(unsigned char)(ch)
#define RdURXH1()   (*(volatile unsigned char *)0x50004024)
#define WrUTXH2(ch) (*(volatile unsigned char *)0x50008020)=(unsigned char)(ch)
#define RdURXH2()   (*(volatile unsigned char *)0x50008024)
#define WrUTXH3(ch) (*(volatile unsigned char *)0x5000C020)=(unsigned char)(ch)
#define RdURXH3()   (*(volatile unsigned char *)0x5000C024)
#define UTXH0       (0x50000020)    //Byte_access address by DMA
#define URXH0       (0x50000024)
#define UTXH1       (0x50004020)
#define URXH1       (0x50004024)
#define UTXH2       (0x50008020)
#define URXH2       (0x50008024)
#define UTXH3       (0x5000C020)
#define URXH3       (0x5000C024)
#endif

#define UART_REG_BASE 	0x50000000	// added by junon
#define UART_REG_OFFSET 	0x4000
typedef struct tag_UART_REGS
{
	unsigned int rUlCon;
	unsigned int rUCon;
	unsigned int rUfCon;
	unsigned int rUmCon;
	unsigned int rUtrStat;
	unsigned int rUerStat;
	unsigned int rUfStat;
	unsigned int rUmStat;
	unsigned int rUtxh;
	unsigned int rUrxh;
	unsigned int rUbrDiv;
	unsigned int rUdivSlot;
} UART_REGS;


// chapter16 USB HOST 1.1 - cha
#define rHcRevision            (*(volatile unsigned *)0x49000000)	//Control and status group
#define rHcControl             (*(volatile unsigned *)0x49000004)	//Control and status group
#define rHcCommonStatus        (*(volatile unsigned *)0x49000008)	//Control and status group
#define rHcInterruptStatus     (*(volatile unsigned *)0x4900000C)	//Control and status group
#define rHcInterruptEnable     (*(volatile unsigned *)0x49000010)	//Control and status group
#define rHcInterruptDisable    (*(volatile unsigned *)0x49000014)	//Control and status group
#define rHcHCCA                (*(volatile unsigned *)0x49000018)	//Memory pointer group
#define rHcPeridCuttentED      (*(volatile unsigned *)0x4900001C)	//Memory pointer group
#define rHcControlHeadED       (*(volatile unsigned *)0x49000020)	//Memory pointer group
#define rHcControlCurrentED    (*(volatile unsigned *)0x49000024)	//Memory pointer group
#define rHcBulkHeadED          (*(volatile unsigned *)0x49000028)	//Memory pointer group
#define rHcBulkCurrentED       (*(volatile unsigned *)0x4900002C)	//Memory pointer group
#define rHcDoneHead            (*(volatile unsigned *)0x49000030)	//Memory pointer group
#define rHcRmlnterval          (*(volatile unsigned *)0x49000034)	//frame counter group
#define rHcFmRemaining         (*(volatile unsigned *)0x49000038)	//frame counter group
#define rHcFmNumber            (*(volatile unsigned *)0x4900003C)	//frame counter group
#define rHcPeridicStart        (*(volatile unsigned *)0x49000040)	//frame counter group
#define rHcLSThreshold         (*(volatile unsigned *)0x49000044)	//frame counter group
#define rHcRhDescriptorA       (*(volatile unsigned *)0x49000048)	//Root hub group
#define rHcRhDescriptorB       (*(volatile unsigned *)0x4900004C)	//Root hub group
#define rHcRStatus             (*(volatile unsigned *)0x49000050)	//Root hub group
#define rHcRhPortStatus1       (*(volatile unsigned *)0x49000054)	//Root hub group
#define rHcRhPortStatus2       (*(volatile unsigned *)0x49000058)	//Root hub group


// chapter17 USB DEVICE 2.0 - cha
#define rIR     	(*(volatile unsigned char *)0x49800000)	//Index Register
#define rEIR        (*(volatile unsigned char *)0x49800004)	//Endpoint Interrupt Register
#define rEIER       (*(volatile unsigned char *)0x49800008)	//Endpoint Interrupt Enable Register
#define rFAR        (*(volatile unsigned char *)0x4980000C)	//Function Address Register 
#define rFNR        (*(volatile unsigned char *)0x49800010)	//Frame Number Register
#define rEDR    	(*(volatile unsigned char *)0x49800014) //Endpoint Direction Register
#define rTR    		(*(volatile unsigned char *)0x49800018)	//Test Register
#define rSSR    	(*(volatile unsigned char *)0x4980001C)	//System Status Register
#define rSCR        (*(volatile unsigned char *)0x49800020)	//System Control Register
#define rEP0SR      (*(volatile unsigned char *)0x49800024)	//EP0 Status Register
#define rEP0CR      (*(volatile unsigned char *)0x49800028)	//EP0 Control Register
#define rEP0BR      (*(volatile unsigned char *)0x49800060)	//EP0 Buffer Register
#define rEP1BR      (*(volatile unsigned char *)0x49800064)	//EP1 Buffer Register
#define rEP2BR      (*(volatile unsigned char *)0x49800068)	//EP2 Buffer Register
#define rEP3BR      (*(volatile unsigned char *)0x4980006C)	//EP3 Buffer Register
#define rEP4BR      (*(volatile unsigned char *)0x49800070)	//EP4 Buffer Register
#define rEP5BR      (*(volatile unsigned char *)0x49800074)	//EP5 Buffer Register
#define rEP6BR      (*(volatile unsigned char *)0x49800078)	//EP6 Buffer Register
#define rEP7BR      (*(volatile unsigned char *)0x4980007C)	//EP7 Buffer Register
#define rEP8BR      (*(volatile unsigned char *)0x49800080)	//EP8 Buffer Register
#define rFCON       (*(volatile unsigned char *)0x49800100) //Burst FIFO-DMA Control
#define rFSTAT      (*(volatile unsigned char *)0x49800104)	//Burst FIFO status
#define rESR  	    (*(volatile unsigned char *)0x4980002C)	//Endpoints Status Register
#define rECR 		(*(volatile unsigned char *)0x49800030)	//Endpoints Control Register
#define rBRCR 		(*(volatile unsigned char *)0x49800034)	//Byte Read Count Register
#define rBWCR       (*(volatile unsigned char *)0x49800038)	//Byte Write Count Register
#define rMPR        (*(volatile unsigned char *)0x4980003C)	//Max Packet Register
#define rDCR        (*(volatile unsigned char *)0x49800040)	//DMA Control Register
#define rDTCR       (*(volatile unsigned char *)0x49800044)	//DMA Transfer Counter Register
#define rDFCR       (*(volatile unsigned char *)0x49800048)	//DMA FIFO Counter Register
#define rDTTCR1     (*(volatile unsigned char *)0x4980004C)	//DMA Total Transfer Counter1 Register
#define rDTTCR2     (*(volatile unsigned char *)0x49800050)	//DMA Total Transfer Counter2 Register
#define rMICR      	(*(volatile unsigned char *)0x49800054)	//Master Interface Control Register
#define rMBAR     	(*(volatile unsigned char *)0x49800088)	//Memory Base Address Register
#define rMCAR     	(*(volatile unsigned char *)0x4980008C)  //Memory Current Address Register


// chapter18 IIC - cha
#define rIICCON		(*(volatile unsigned *)0x54000000)	//IIC control
#define rIICSTAT	(*(volatile unsigned *)0x54000004)	//IIC control/status
#define rIICADD		(*(volatile unsigned *)0x54000008)	//IIC address
#define rIICDS		(*(volatile unsigned *)0x5400000c)	//IIC transmit/receive data shift
#define rIICLC		(*(volatile unsigned *)0x54000010)	//IIC-Bus multi-master line control register


// chapter19 SPI - cha   
#define rSPCON0    (*(volatile unsigned *)0x52000000)	//SPI0 control
#define rSPSTA0    (*(volatile unsigned *)0x52000004)	//SPI0 status
#define rSPPIN0    (*(volatile unsigned *)0x52000008)	//SPI0 pin control
#define rSPPRE0    (*(volatile unsigned *)0x5200000c)	//SPI0 baud rate prescaler
#define rSPTDAT0   (*(volatile unsigned *)0x52000010)	//SPI0 Tx data
#define rSPRDAT0   (*(volatile unsigned *)0x52000014)	//SPI0 Rx data
#define rSPCON1    (*(volatile unsigned *)0x59000000)	//SPI1 control
#define rSPSTA1    (*(volatile unsigned *)0x59000004)	//SPI1 status
#define rSPPIN1    (*(volatile unsigned *)0x59000008)	//SPI1 pin control
#define rSPPRE1    (*(volatile unsigned *)0x5900000c)	//SPI1 baud rate prescaler
#define rSPTDAT1   (*(volatile unsigned *)0x59000000)	//SPI1 Tx data
#define rSPRDAT1   (*(volatile unsigned *)0x59000004)	//SPI1 Rx data// chapter20 HS_SPI Interface - gom


// chapter20 HS_SPI - gom
#define rCH_CFG  		(*(volatile unsigned *)0x52000000)	//SPI configuration
#define rCLK_CFG  		(*(volatile unsigned *)0x52000004)	//Clock configuration
#define rMODE_CFG  		(*(volatile unsigned *)0x52000008)	//SPI FIFO control
#define rSLAVE_SEL  	(*(volatile unsigned *)0x5200000C)	//Slave selection
#define rSPI_INT_EN  	(*(volatile unsigned *)0x52000010)	//SPI interrupt enable
#define rSPI_STATUS  	(*(volatile unsigned *)0x52000014)	//SPI status
#define rSPI_TX_DATA  	(*(volatile unsigned *)0x52000018)	//SPI TX data
#define rSPI_RX_DATA  	(*(volatile unsigned *)0x5200001C)	//SPI RX data
#define rPACKET_CNT  	(*(volatile unsigned *)0x52000020)	//count how many data master gets
#define rPENDING_CLR  	(*(volatile unsigned *)0x52000024)	//Pending clear


// chapter21 TFT LCD CONTROLLER - oh
#define rVIDCON0		(*(volatile unsigned *)0x4c800000)	//VIDEO CONTROL REGTISTER 0
#define rVIDCON1		(*(volatile unsigned *)0x4c800004)	//VIDEO CONTROL REGTISTER 1
#define rVIDTCON0		(*(volatile unsigned *)0x4c800008)	//VIDEO CONTROL REGTISTER 0
#define rVIDTCON1		(*(volatile unsigned *)0x4c80000C)	//VIDEO TIME CONTROL REGTISTER 1
#define rVIDTCON2		(*(volatile unsigned *)0x4c800010)	//VIDEO TIME CONTROL REGTISTER 2
#define rWINCON0		(*(volatile unsigned *)0x4c800014)	//WINDOW CONTROL REGTISTER 0
#define rWINCON1		(*(volatile unsigned *)0x4c800018)	//WINDOW CONTROL REGTISTER 1
#define rVIDOSD0A		(*(volatile unsigned *)0x4c800028)	//VIDEO WIDOW 0'S POSITION CONTROL REGTISTER 
#define rVIDOSD0B		(*(volatile unsigned *)0x4c80002C)	//VIDEO WIDOW 0'S POSITION CONTROL REGTISTER 
#define rVIDOSD0C		(*(volatile unsigned *)0x4c800030)	//VIDEO WIDOW 0'S POSITION CONTROL REGTISTER 
#define rVIDOSD1A		(*(volatile unsigned *)0x4c800034)	//VIDEO WIDOW 1'S POSITION CONTROL REGTISTER 
#define rVIDOSD1B		(*(volatile unsigned *)0x4c800038)	//VIDEO WIDOW 1'S POSITION CONTROL REGTISTER 
#define rVIDOSD1C		(*(volatile unsigned *)0x4c80003C)	//VIDEO WIDOW 1'S POSITION CONTROL REGTISTER 
#define rVIDW00ADD0B0	(*(volatile unsigned *)0x4c800064)	//WIDOW 0'S BUFFER START ADDR,
#define rVIDW00ADD0B1	(*(volatile unsigned *)0x4c800068)	//WIDOW 0'S BUFFER START ADDR,
#define rVIDW01ADD0		(*(volatile unsigned *)0x4c80006C)	//WIDOW 1'S BUFFER START ADDR,
#define rVIDW00ADD1B0	(*(volatile unsigned *)0x4c80007C)	//WIDOW 0'S BUFFER START ADDR,
#define rVIDW00ADD1B1	(*(volatile unsigned *)0x4c800080)	//WIDOW 0'S BUFFER START ADDR,
#define rVIDW01ADD1		(*(volatile unsigned *)0x4c800084)	//WIDOW 1'S BUFFER START ADDR,
#define rVIDW00ADD2B0	(*(volatile unsigned *)0x4c800094)	//WIDOW 0'S BUFFER START ADDR,
#define rVIDW00ADD2B1	(*(volatile unsigned *)0x4c800098)	//WIDOW 0'S BUFFER START ADDR,
#define rVIDW01ADD2		(*(volatile unsigned *)0x4c80009C)	//WIDOW 1'S BUFFER START ADDR,
#define rVIDINTCON		(*(volatile unsigned *)0x4c8000AC)	//INDICATE THE VIDEO INTER. CONTROL
#define rW1KEYCON0		(*(volatile unsigned *)0x4c8000B0)	//COLOR KEY CONTROL REG.
#define rW1KEYCON1		(*(volatile unsigned *)0x4c8000B4)	//COLOR KEY CONTROL REG.
#define rW2KEYCON0		(*(volatile unsigned *)0x4c8000B8)	//COLOR KEY CONTROL REG.
#define rW2KEYCON1		(*(volatile unsigned *)0x4c8000BC)	//COLOR KEY CONTROL REG.
#define rW3KEYCON0		(*(volatile unsigned *)0x4c8000C0)	//COLOR KEY CONTROL REG.
#define rW3KEYCON1		(*(volatile unsigned *)0x4c8000C4)	//COLOR KEY CONTROL REG.
#define rW4KEYCON0		(*(volatile unsigned *)0x4c8000C8)	//COLOR KEY CONTROL REG.
#define rW4KEYCON1		(*(volatile unsigned *)0x4c8000CC)	//COLOR KEY CONTROL REG.
#define rWIN0MAP		(*(volatile unsigned *)0x4c8000D0)	//WINDOW COLOR CONTROL
#define rWIN1MAP		(*(volatile unsigned *)0x4c8000D4)	//WINDOW COLOR CONTROL
#define rWPALCON		(*(volatile unsigned *)0x4c8000E4)	//WINDOW PALLETTE CONTROL
#define rSYSIFCON0		(*(volatile unsigned *)0x4c800130)	//SYSTEM INTERFACE MAIN LDI
#define rSYSIFCON1		(*(volatile unsigned *)0x4c800134)	//SYSTEM INTERFACE SUB LDI
#define rDITHMODE1		(*(volatile unsigned *)0x4c800138)	//DITHERING MODE
#define rSIFCCON0		(*(volatile unsigned *)0x4c80013C)	//SYSTEM INTERFACE COMMAND CONTROL
#define rSIFCCON1		(*(volatile unsigned *)0x4c800140)	//SYSTEM IF COMMAND DATA WRITE CONTROL
#define rSIFCCON2		(*(volatile unsigned *)0x4c800144)	//SYSTEM IF COMMAND DATA READ CONTROL
#define rCPUTRIGCON1	(*(volatile unsigned *)0x4c80015C)	//CPU TRIGGER SOURCE MASK
#define rCPUTRIGCON2	(*(volatile unsigned *)0x4c800160)	//SOFTWARE BSED TRIGGER CONTROL
#define rVIDW00ADD0B1	(*(volatile unsigned *)0x4c800068)	//WIDOW 0'S BUFFER START ADDR,
#define rVIDW01ADD0		(*(volatile unsigned *)0x4c80006C)	//WIDOW 1'S BUFFER START ADDR,

#define WIN0_PALETTE_START		(0x4c800400)
#define WIN1_PALETTE_START		(0x4c800800)


// chapter22 CSTN CONTROLLER - oh
#define rLCDCON1    (*(volatile unsigned *)0x4d000000)	//LCD control 1
#define rLCDCON2    (*(volatile unsigned *)0x4d000004)	//LCD control 2
#define rLCDCON3    (*(volatile unsigned *)0x4d000008)	//LCD control 3
#define rLCDCON4    (*(volatile unsigned *)0x4d00000c)	//LCD control 4
#define rLCDCON5    (*(volatile unsigned *)0x4d000010)	//LCD control 5
#define rLCDCON6    (*(volatile unsigned *)0x4d000034)	//LCD control 6
#define rLCDCON7    (*(volatile unsigned *)0x4d000038)	//LCD control 7
#define rLCDCON8    (*(volatile unsigned *)0x4d00003C)	//LCD control 8
#define rLCDCON9    (*(volatile unsigned *)0x4d000040)	//LCD control 9
#define rLCDSADDR1  (*(volatile unsigned *)0x4d000014)	//STN/TFT Frame buffer start address 1
#define rLCDSADDR2  (*(volatile unsigned *)0x4d000018)	//STN/TFT Frame buffer start address 2
#define rLCDSADDR3  (*(volatile unsigned *)0x4d00001c)	//STN/TFT Virtual screen address set
#define rREDLUT     (*(volatile unsigned *)0x4d000020)	//STN : RED LOOKUP TABLE REGISTER
#define rGREENLUT   (*(volatile unsigned *)0x4d000024)	//STN Green lookup table 
#define rBLUELUT    (*(volatile unsigned *)0x4d000028)	//STN Blue lookup table
#define rDITHMODE   (*(volatile unsigned *)0x4d00004c)	//STN Dithering mode
//#define rTPAL      (*(volatile unsigned *)0x4d000050)	//TFT Temporary palette
#define rLCDINTPND  (*(volatile unsigned *)0x4d000024)	//LCD Interrupt pending
#define rLCDSRCPND  (*(volatile unsigned *)0x4d000028)	//LCD Interrupt source
#define rLCDINTMSK  (*(volatile unsigned *)0x4d00002c)	//LCD Interrupt mask


// chapter23 Camera Interface - jcs
#define rCISRCFMT		(*(volatile unsigned *)0x4D800000) //Input Source Format        
#define rCIWDOFST		(*(volatile unsigned *)0x4D800004) //Window offset       
#define rCIGCTRL		(*(volatile unsigned *)0x4D800008) //Global control        
//#define rCIFCTRL1           (*(volatile unsigned *)0x4D80000C) //flash control 1
//#define rCIFCTRL2           (*(volatile unsigned *)0x4D800010) //flash control 2
#define rCIDOWSFT2		(*(volatile unsigned *)0x4D800014) //Window option 2
#define rCICOYSA1		(*(volatile unsigned *)0x4D800018) //Y1 frame start address for codec DMA      
#define rCICOYSA2		(*(volatile unsigned *)0x4D80001C) //Y2 frame start address for codec DMA       
#define rCICOYSA3		(*(volatile unsigned *)0x4D800020) //Y3 frame start address for codec DMA        
#define rCICOYSA4		(*(volatile unsigned *)0x4D800024) //Y4 frame start address for codec DMA          
#define rCICOCBSA1		(*(volatile unsigned *)0x4D800028) //Cb1 frame start address for codec DMA 
#define rCICOCBSA2		(*(volatile unsigned *)0x4D80002C) //Cb2 frame start address for codec DMA        
#define rCICOCBSA3		(*(volatile unsigned *)0x4D800030) //Cb3 frame start address for codec DMA           
#define rCICOCBSA4		(*(volatile unsigned *)0x4D800034) //Cb4 frame start address for codec DMA   
#define rCICOCRSA1		(*(volatile unsigned *)0x4D800038) //Cr1 frame start address for codec DMA
#define rCICOCRSA2		(*(volatile unsigned *)0x4D80003C) //Cr2 frame start address for codec DMA
#define rCICOCRSA3		(*(volatile unsigned *)0x4D800040) //Cr3 frame start address for codec DMA
#define rCICOCRSA4		(*(volatile unsigned *)0x4D800044) //Cr4 frame start address for codec DMA
#define rCICOTRGFMT		(*(volatile unsigned *)0x4D800048) //Target image format of codex DMA
#define rCICOCTRL		(*(volatile unsigned *)0x4D80004C) //Codec DMA comtrol        
#define rCICOSCPRERATIO	(*(volatile unsigned *)0x4D800050) //Codec pre-scaler ratio control      
#define rCICOSCPREDST	(*(volatile unsigned *)0x4D800054) //Codec pre-scaler desitination format
#define rCICOSCCTRL		(*(volatile unsigned *)0x4D800058) //Codec main-scaler control
#define rCICOTAREA		(*(volatile unsigned *)0x4D80005C) //Codec pre-scaler desination format
#define rCICOSTATUS		(*(volatile unsigned *)0x4D800064) //Codec path status
#define rCIPRCLRSA1		(*(volatile unsigned *)0x4D80006C) //RGB 1st frame start address for preview DMA
#define rCIPRCLRSA2		(*(volatile unsigned *)0x4D800070) //RGB 1st frame start address for preview DMA
#define rCIPRCLRSA3		(*(volatile unsigned *)0x4D800074) //RGB 1st frame start address for preview DMA
#define rCIPRCLRSA4		(*(volatile unsigned *)0x4D800078) //RGB 1st frame start address for preview DMA
#define rCIPRTRGFMT		(*(volatile unsigned *)0x4D80007C) //Target image format of Preview DMA
#define rCIPRCTRL		(*(volatile unsigned *)0x4D800080) //Codec DMA comtrol        
#define rCIPRSCPRERATIO	(*(volatile unsigned *)0x4D800084) //Codec pre-scaler ratio control      
#define rCIPRSCPREDST	(*(volatile unsigned *)0x4D800088) //Codec pre-scaler desitination format
#define rCIPRSCCTRL		(*(volatile unsigned *)0x4D80008C) //Codec main-scaler control
#define rCIPRTAREA		(*(volatile unsigned *)0x4D800090) //Codec pre-scaler desination format
#define rCIPRSTATUS		(*(volatile unsigned *)0x4D800098) //Codec path status
#define rCIIMGCPT		(*(volatile unsigned *)0x4D8000A0) //Imahe capture enable command
#define rCICOCPTSEQ		(*(volatile unsigned *)0x4D8000A4) //Codec dma capture sequence related
#define rCICOSCOS		(*(volatile unsigned *)0x4D8000A8) //Codec scan line offset related
#define rCIIMGEFF		(*(volatile unsigned *)0x4D8000B0) //Imahe Effects related
#define rCIMSYSA		(*(volatile unsigned *)0x4D8000B4) //MSDMA Y start address related
#define rCIMSCBSA		(*(volatile unsigned *)0x4D8000B8) //MSDMA Cb start address related
#define rCIMSCRSA		(*(volatile unsigned *)0x4D8000BC) //MSDMA Cr start address related
#define rCIMSYEND		(*(volatile unsigned *)0x4D8000C0) //MSDMA Y end address related
#define rCIMSCBEND		(*(volatile unsigned *)0x4D8000C4) //MSDMA Cb end address related
#define rCIMSCREND		(*(volatile unsigned *)0x4D8000C8) //MSDMA Cr end address related
#define rCIMSYOFF		(*(volatile unsigned *)0x4D8000CC) //MSDMA Y offset related
#define rCIMSCBOFF		(*(volatile unsigned *)0x4D8000D0) //MSDMA Cb offset related
#define rCIMSCROFF		(*(volatile unsigned *)0x4D8000D4) //MSDMA Cr offset related
#define rCIMSWIDTH		(*(volatile unsigned *)0x4D8000D8) //MSDMA source image width related
#define rCIMSCTRL		(*(volatile unsigned *)0x4D8000DC) //MSDMA cotrol


// chapter24 ADC - gom
#define rADCCON		(*(volatile unsigned *)0x58000000)	//ADC control
#define rADCTSC		(*(volatile unsigned *)0x58000004)	//ADC touch screen control
#define rADCDLY		(*(volatile unsigned *)0x58000008)	//ADC start or Interval Delay
#define rADCDAT0	(*(volatile unsigned *)0x5800000c)	//ADC conversion data 0
#define rADCDAT1	(*(volatile unsigned *)0x58000010)	//ADC conversion data 1
#define rADCUPDN	(*(volatile unsigned *)0x58000014)	//Stylus Up/Down interrupt status
#define rADCMUX		(*(volatile unsigned *)0x58000018)	//Stylus Up/Down interrupt status


// chapter25 IIS - junon
#define rIISCON  	(*(volatile unsigned *)0x55000000)	//IIS Control
#define rIISMOD  	(*(volatile unsigned *)0x55000004)	//IIS Mode
#define rIISFIC  	(*(volatile unsigned *)0x55000008)	//IIS FIFO control
#define rIISPSR  	(*(volatile unsigned *)0x5500000c)	//IIS clock divider control
#define rIISTXD  	(*(volatile unsigned *)0x55000010)	//IIS tracsmit data
#define rIISRXD  	(*(volatile unsigned *)0x55000014)	//IIS recelve data


// chpater26 AC97 - junon
#define	rAC_GLBCTRL		(*(volatile unsigned *)0x5B000000)
#define	rAC_GLBSTAT		(*(volatile unsigned *)0x5B000004)
#define	rAC_CODEC_CMD	(*(volatile unsigned *)0x5B000008)
#define	rAC_CODEC_STAT	(*(volatile unsigned *)0x5B00000C)
#define	rAC_PCMADDR		(*(volatile unsigned *)0x5B000010) // edited by junon
#define	rAC_MICADDR		(*(volatile unsigned *)0x5B000014)
#define	rAC_PCMDATA		(*(volatile unsigned *)0x5B000018)
#define	rAC_MICDATA		(*(volatile unsigned *)0x5B00001C)


// chapter27 SD Interface - gom
#define rSDICON     (*(volatile unsigned *)0x5a000000)	//SDI control
#define rSDIPRE     (*(volatile unsigned *)0x5a000004)	//SDI baud rate prescaler
#define rSDICARG    (*(volatile unsigned *)0x5a000008)	//SDI command argument
#define rSDICCON    (*(volatile unsigned *)0x5a00000c)	//SDI command control
#define rSDICSTA    (*(volatile unsigned *)0x5a000010)	//SDI command status
#define rSDIRSP0    (*(volatile unsigned *)0x5a000014)	//SDI response 0
#define rSDIRSP1    (*(volatile unsigned *)0x5a000018)	//SDI response 1
#define rSDIRSP2    (*(volatile unsigned *)0x5a00001c)	//SDI response 2
#define rSDIRSP3    (*(volatile unsigned *)0x5a000020)	//SDI response 3
#define rSDIDTIMER  (*(volatile unsigned *)0x5a000024)	//SDI data/busy timer
#define rSDIBSIZE   (*(volatile unsigned *)0x5a000028)	//SDI block size
#define rSDIDCON    (*(volatile unsigned *)0x5a00002c)	//SDI data control
#define rSDIDCNT    (*(volatile unsigned *)0x5a000030)	//SDI data remain counter
#define rSDIDSTA    (*(volatile unsigned *)0x5a000034)	//SDI data status
#define rSDIFSTA    (*(volatile unsigned *)0x5a000038)	//SDI FIFO status
#define rSDIIMSK    (*(volatile unsigned *)0x5a00003c)	//SDI interrupt mask. edited for 2442A

#ifdef __BIG_ENDIAN  /* edited for 2442A */
#define rSDIDAT		(*(volatile unsigned *)0x5a00004c)	//SDI data
#define SDIDAT		0x5a00004c  

#else  // Little Endian
#define rSDIDAT		(*(volatile unsigned *)0x5a000040)	//SDI data 
#define SDIDAT		0x5a000040  
#endif


// chapter28 HS_MMC Interface - gom
#define rHM_SYSAD      	(*(volatile unsigned *)0x4A800000)	//SDI control register
#define rHM_BLKSIZE    	(*(volatile unsigned *)0x4A800004)	//Host buffer boundary and transfer block size register
#define rHM_BLKCNT	    (*(volatile unsigned *)0x4A800006)	//Block count for current transfer
#define rHM_ARGUMENT   	(*(volatile unsigned *)0x4A800008)	//Command Argument
#define rHM_TRNMOD	    (*(volatile unsigned *)0x4A80000C)	//Transfer Mode setting register
#define rHM_CMDREG	    (*(volatile unsigned *)0x4A80000E)	//Command register
#define rHM_RSPREG0    	(*(volatile unsigned *)0x4A800010)	//Response 0
#define rHM_RSPREG1    	(*(volatile unsigned *)0x4A800014)	//Response 1
#define rHM_RSPREG2    	(*(volatile unsigned *)0x4A800018)	//Response 2
#define rHM_RSPREG3    	(*(volatile unsigned *)0x4A80001C)	//Response 3
#define rHM_BDATA      	(*(volatile unsigned *)0x4A800020)	//Buffer Data register
#define rHM_PRNSTS     	(*(volatile unsigned *)0x4A800024)	//Present state
#define rHM_HOSTCTL    	(*(volatile unsigned *)0x4A800028)	//Host control
#define rHM_PWRCON     	(*(volatile unsigned *)0x4A800029)	//Power control
#define rHM_BLKGAP     	(*(volatile unsigned *)0x4A80002A)	//Block Gap control
#define rHM_WAKCON     	(*(volatile unsigned *)0x4A80002B)	//Wakeup control
#define rHM_CLKCON     	(*(volatile unsigned *)0x4A80002C)	//Clock control
#define rHM_TIMEOUTCON  (*(volatile unsigned *)0x4A80002E)	//Time out control
#define rHM_SWRST      	(*(volatile unsigned *)0x4A80002F)	//Software reset
#define rHM_NORINTSTS  	(*(volatile unsigned *)0x4A800030)	//Normal interrupt status
#define rHM_ERRINTSTS  	(*(volatile unsigned *)0x4A800032)	//Error interrupt status
#define rHM_NORINTSTSEN (*(volatile unsigned *)0x4A800034)	//Normal interrupt status enable
#define rHM_ERRINTSTSEN (*(volatile unsigned *)0x4A800036)	//Error interrupt status enable
#define rHM_NORINTSIGEN (*(volatile unsigned *)0x4A800038)	//Normal interrupt signal enable
#define rHM_ERRINTSIGEN (*(volatile unsigned *)0x4A80003A)	//Error interrupt signal enable
#define rHM_ACMD12ERRSTS (*(volatile unsigned *)0x4A80003C)	//Auto CMD12 Error Status
#define rHM_CAPAREG  	(*(volatile unsigned *)0x4A800040)	//Capability
#define rHM_MAXCURR  	(*(volatile unsigned *)0x4A800048)	//Maximum current Capability
#define rHM_CONTROL2  	(*(volatile unsigned *)0x4A800080)	//Control 2
#define rHM_CONTROL3  	(*(volatile unsigned *)0x4A800084)	//Control 3
#define rHM_HCVER  		(*(volatile unsigned *)0x4A8000FE)	//Host controller version


// Exception vector
#define pISR_RESET     	(*(unsigned *)(_ISR_STARTADDRESS+0x0))
#define pISR_UNDEF     	(*(unsigned *)(_ISR_STARTADDRESS+0x4))
#define pISR_SWI       	(*(unsigned *)(_ISR_STARTADDRESS+0x8))
#define pISR_PABORT    	(*(unsigned *)(_ISR_STARTADDRESS+0xc))
#define pISR_DABORT    	(*(unsigned *)(_ISR_STARTADDRESS+0x10))
#define pISR_RESERVED  	(*(unsigned *)(_ISR_STARTADDRESS+0x14))
#define pISR_IRQ       	(*(unsigned *)(_ISR_STARTADDRESS+0x18))
#define pISR_FIQ       	(*(unsigned *)(_ISR_STARTADDRESS+0x1c))


// Interrupt vector
#define pISR_EINT0		(*(unsigned *)(_ISR_STARTADDRESS+0x20))
#define pISR_EINT1		(*(unsigned *)(_ISR_STARTADDRESS+0x24))
#define pISR_EINT2		(*(unsigned *)(_ISR_STARTADDRESS+0x28))
#define pISR_EINT3		(*(unsigned *)(_ISR_STARTADDRESS+0x2c))
#define pISR_EINT4_7	(*(unsigned *)(_ISR_STARTADDRESS+0x30))
#define pISR_EINT8_23	(*(unsigned *)(_ISR_STARTADDRESS+0x34))
#define pISR_CAM		(*(unsigned *)(_ISR_STARTADDRESS+0x38))		
#define pISR_BAT_FLT	(*(unsigned *)(_ISR_STARTADDRESS+0x3c))
#define pISR_TICK		(*(unsigned *)(_ISR_STARTADDRESS+0x40))
#define pISR_WDT_AC97	(*(unsigned *)(_ISR_STARTADDRESS+0x44))   
#define pISR_TIMER0	 	(*(unsigned *)(_ISR_STARTADDRESS+0x48))
#define pISR_TIMER1	 	(*(unsigned *)(_ISR_STARTADDRESS+0x4c))
#define pISR_TIMER2		(*(unsigned *)(_ISR_STARTADDRESS+0x50))
#define pISR_TIMER3		(*(unsigned *)(_ISR_STARTADDRESS+0x54))
#define pISR_TIMER4		(*(unsigned *)(_ISR_STARTADDRESS+0x58))
#define pISR_UART2		(*(unsigned *)(_ISR_STARTADDRESS+0x5c))
#define pISR_LCD		(*(unsigned *)(_ISR_STARTADDRESS+0x60))
#define pISR_DMA		(*(unsigned *)(_ISR_STARTADDRESS+0x64))		//changed at 2450
#define pISR_UART3		(*(unsigned *)(_ISR_STARTADDRESS+0x68))		//changed at 2450
#define pISR_CFCON		(*(unsigned *)(_ISR_STARTADDRESS+0x6c))		//changed at 2450
#define pISR_SDI_1		(*(unsigned *)(_ISR_STARTADDRESS+0x70))		//changed at 2450
#define pISR_SDI_0		(*(unsigned *)(_ISR_STARTADDRESS+0x74))		//changed at 2450
#define pISR_SPI1		(*(unsigned *)(_ISR_STARTADDRESS+0x78))		//changed at 2450
#define pISR_UART1		(*(unsigned *)(_ISR_STARTADDRESS+0x7c))
#define pISR_NFCON		(*(unsigned *)(_ISR_STARTADDRESS+0x80))		
#define pISR_USBD		(*(unsigned *)(_ISR_STARTADDRESS+0x84))
#define pISR_USBH		(*(unsigned *)(_ISR_STARTADDRESS+0x88))
#define pISR_IIC		(*(unsigned *)(_ISR_STARTADDRESS+0x8c))
#define pISR_UART0		(*(unsigned *)(_ISR_STARTADDRESS+0x90))
#define pISR_SPI0		(*(unsigned *)(_ISR_STARTADDRESS+0x94))		//changed at 2450
#define pISR_RTC		(*(unsigned *)(_ISR_STARTADDRESS+0x98))
#define pISR_ADC		(*(unsigned *)(_ISR_STARTADDRESS+0x9c))


// PENDING BIT
#define BIT_EINT0		((U32)0x1L)
#define BIT_EINT1		((U32)0x1L<<1)
#define BIT_EINT2		((U32)0x1L<<2)
#define BIT_EINT3		((U32)0x1L<<3)
#define BIT_EINT4_7		((U32)0x1L<<4)
#define BIT_EINT8_23	((U32)0x1L<<5)
#define BIT_CAM			((U32)0x1L<<6)		
#define BIT_BAT_FLT		((U32)0x1L<<7)
#define BIT_TICK		((U32)0x1L<<8)
#define BIT_WDT_AC97	((U32)0x1L<<9)	
#define BIT_TIMER0		((U32)0x1L<<10)
#define BIT_TIMER1		((U32)0x1L<<11)
#define BIT_TIMER2		((U32)0x1L<<12)
#define BIT_TIMER3		((U32)0x1L<<13)
#define BIT_TIMER4		((U32)0x1L<<14)
#define BIT_UART2		((U32)0x1L<<15)
#define BIT_LCD			((U32)0x1L<<16)
#define BIT_DMA			((U32)0x1L<<17)		//changed at 2450
#define BIT_UART3		((U32)0x1L<<18)		//changed at 2450
#define BIT_CFCON		((U32)0x1L<<19)		//changed at 2450
#define BIT_SDI1		((U32)0x1L<<20)		//changed at 2450
#define BIT_SDI0		((U32)0x1L<<21)		//changed at 2450
#define BIT_SPI1		((U32)0x1L<<22)		//changed at 2450
#define BIT_UART1		((U32)0x1L<<23)
#define BIT_NFCON		((U32)0x1L<<24)		
#define BIT_USBD		((U32)0x1L<<25)
#define BIT_USBH		((U32)0x1L<<26)
#define BIT_IIC			((U32)0x1L<<27)
#define BIT_UART0		((U32)0x1L<<28)
#define BIT_SPI0		((U32)0x1L<<29)		//changed at 2450
#define BIT_RTC			((U32)0x1L<<30)
#define BIT_ADC			((U32)0x1L<<31)
#define BIT_ALLMSK		(0xffffffff)


// SUB PENDING BIT
#define BIT_SUB_ALLMSK	(0x1fffffff)		//Changed from 0x7fff to 0x1fffffff at 2450
#define BIT_SUB_AC97	(0x1L<<28)		//changed at 2450
#define BIT_SUB_WDT		(0x1L<<27)		//changed at 2450
#define BIT_SUB_ERR3	(0x1L<<26)		//changed at 2450
#define BIT_SUB_TXD3	(0x1L<<25)		//changed at 2450
#define BIT_SUB_RXD3	(0x1L<<24)		//changed at 2450
#define BIT_SUB_DMA5	(0x1L<<23)		//changed at 2450
#define BIT_SUB_DMA4	(0x1L<<22)		//changed at 2450
#define BIT_SUB_DMA3	(0x1L<<21)		//changed at 2450
#define BIT_SUB_DMA2	(0x1L<<20)		//changed at 2450
#define BIT_SUB_DMA1	(0x1L<<19)		//changed at 2450
#define BIT_SUB_DMA0	(0x1L<<18)		//changed at 2450
#define BIT_SUB_LCD4	(0x1L<<17)		//changed at 2450
#define BIT_SUB_LCD3	(0x1L<<16)		//changed at 2450
#define BIT_SUB_LCD2	(0x1L<<15)		//changed at 2450
#define BIT_SUB_LCD1	(0x1L<<14)		//changed at 2450
#define BIT_SUB_CAM_P	(0x1L<<12)		
#define BIT_SUB_CAM_C   (0x1L<<11)       
#define BIT_SUB_ADC			(0x1L<<10)
#define BIT_SUB_TC		(0x1L<<9)
#define BIT_SUB_ERR2	(0x1L<<8)
#define BIT_SUB_TXD2	(0x1L<<7)
#define BIT_SUB_RXD2	(0x1L<<6)
#define BIT_SUB_ERR1	(0x1L<<5)
#define BIT_SUB_TXD1	(0x1L<<4)
#define BIT_SUB_RXD1	(0x1L<<3)
#define BIT_SUB_ERR0	(0x1L<<2)
#define BIT_SUB_TXD0	(0x1L<<1)
#define BIT_SUB_RXD0	(0x1L<<0)


#define ClearPending(bit) {\
                rSRCPND1 = bit;\
                rINTPND1 = bit;\
                rINTPND1 = bit;}
                                                                             
//rSRCPND1 = bit;       //Clear pending bit
//rINTPND1 = bit;
//rINTPND1;                    //Prevent an double interrupt pending


// Wait until rINTPND is changed for the case that the ISR is very short.       
// The effect of reading "rINTPND;" : Waiting until rINTPND is changed.
// When you access any address, write buffer must be cleared if you want to read this address.
// Otherwise, twice interrupt request could be occured per one interrupt.
// in the case that the ISR is very short.

#ifdef __cplusplus
}
#endif

#endif 
