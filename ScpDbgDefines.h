/****************************************************************************/
/*!   \file        ScpDbgDefines.h
\brief       Defines used in the Debug functionality
\author      
\version     
*****************************************************************************
\b Copyright : Scope Logistical Solutions, 2004 \n
\b Created   : \n
\b Revised   : \n
\b Target    : \n
*****************************************************************************
\b Description \n
*****************************************************************************/
#ifndef SCP_DBGDEFINES_H
#define SCP_DBGDEFINES_H
#ifdef DBG_NEW
#include "Common/ScpTypes.h"
#endif

/***************************************************************************
File Number Defines
****************************************************************************/
//<FILENUMBERS>
#define SCP_FILEUNDEFINED     0     /*! Undefined */
#define SCP_TWI_1WIRE         1     /*! 1 Wire */
#define SCP_MODEM             2     /*! Modem */
#define SCP_TIMERS            3     /*! Timers */
#define SCP_INIT              4     /*! Init */
#define SCP_CONFIG            5     /*! Config */
#define SCP_BUFFER            6     /*! Buffer */
#define SCP_UART              7     /*! UART */
#define SCP_UTILITIES         8     /*! Utilities */
#define SCP_VARIABLES         9     /*! Variables */
#define SCP_SPI               10    /*! SPI */
#define SCP_GSM               11    /*! GSM */
#define SCP_INPUTS            12    /*! Inputs */
#define SCP_PDU               13    /*! PDU */
#define SCP_PROT              14    /*! Protocol */
#define SCP_MAIN              15    /*! Main */
#define SCP_SOCKET            16    /*! Socket */
#define SCP_EVENT             17    /*! Events */
#define SCP_CM                18    /*! Comms Mediums */
#define SCP_VOICE             19    /*! Voice */
#define SCP_GPS               20    /*! GPS */
#define SCP_CANMCP            21    /*! CAN MCP */
#define SCP_AR                22    /*! Accident Recon */
#define SCP_TXTMSG            23    /*! Text Messaging */
#define SCP_DRIVER            24    /*! Driver */
#define SCP_GEO               25    /*! Geofence */
#define SCP_PWR               26    /*! Power */
#define SCP_SUART             27    /*! Soft Uart */
#define SCP_DRIVER905	      28    /*! Driver 905 */
#define SCP_IRIDIUM           29    /*! Iridium */
#define SCP_PERIPHERALS       30    /*! Peripherals */
#define SCP_TRIP              31    /*! Trip */
#define SCP_OUTPUTS           32    /*! Outputs */
#define SCP_SYSLOG            33    /*! System Log */
#define SCP_ATCOMMANDPARSER   34    /*! AT Command Parser */
#define SCP_CMCCONTROL        35    /*! CMC Control */
#define SCP_CMXPROTOCOL       36    /*! CMX Protocol */
#define SCP_BT                37    /*! Bluetooth */
#define SCP_SENTINEL          38    /*! Sentinel */
#define SCP_USB               39    /*! USB */
#define SCP_ACCELEROMETER     40    /*! Accelerometer */
#define SCP_OBD2              41    /*! OBD2 */
#define SCP_MPROFILER         42    /*! MProfiler Server*/
#define SCP_AUXILLIARY        43    /*! Auxilliary Server*/
#define SCP_CMCCONTROLDATA    44    /*! CMUX Prot Output */
#define SCP_TESTING           45    /*! Testing */
#define SCP_OBD2_STACK        46    /*! OBD2 Stack */
#define SCP_USB_HOST	      47    /*! USB Host */
#define SCP_J1850             48    /*! J1850 */
#define SCP_RTC               49    /*! RTC */
#define SCP_GPSAT             50    /*! GPS AT */
#define SCP_LOCATION          51    /*! Location Manager */
#define SCP_CDMA              52    /*! CDMA */
#define SCP_BLE               53    /*! BLE */
#define SCP_PDAAPI            54    /*! PDA API */
#define SCP_MSG               55    /*! Message */
#define SCP_THERMO            56    /*! Thermo */
#define SCP_DATASTREAMING     57    /*! Data Streaming */
#define SCP_FUELMODULE        58    /*! Fuel Module */
#define SCP_DDS               59    /*! DDS */
#define SCP_ENC               60    /*! Crypto */
#define SCP_VNI               61    /*! VNI Interface*/
#define SCP_ACCIDENTDETECTION 62    /*! Accident Detection */
#define SCP_IPC               63    /*! IPC */
#define SCP_BITBUFFER         64    /*! Bit Buffer */
#define SCP_FREERTOS          65    /*! RTOS Main */
//</FILENUMBERS>

/***************************************************************************
Info Description ID Defines
****************************************************************************/
//<OLD_INFO_IDS>
#define IDI_UNDEFINED            0     /*! Undefined */

/* Modem Related Defines */
#define IDI_MDM_TOMODEM          0x0100    /*! MODEM: To Modem: */
#define IDI_MDM_FROMMODEM        0x0101    /*! MODEM: From Modem: */
#define IDI_MDM_TOUART0          0x0102    /*! MODEM: To Uart:*/
#define IDI_MDM_FROMUART         0x0103    /*! MODEM: From Uart: */
#define IDI_MDM_EXPECTED         0x0104    /*! MODEM: Expected Response Received */
#define IDI_MDM_UNSOLICITED      0x0105    /*! MODEM: Unsolicited Response */
#define IDI_MDM_ERROR            0x0106    /*! MODEM: Error Response */
#define IDI_MDM_GENERAL          0x0107    /*! MODEM: General Info*/
#define IDI_PDU_MSISDN           0x0108    /*! PDU: MSISDN INFO */
#define IDI_PDU_TON              0x0109    /*! PDU: Type of Number */
#define IDI_PDU_FO               0x010A    /*! PDU: First Octet */
#define IDI_PDU_SCTS             0x010B    /*! PDU: Service Center Time Stamp */
#define IDI_PDU_DCS              0x010C    /*! PDU: Data Coding Scheme */
#define IDI_PDU_MSG              0x010D    /*! PDU: Extracted Message */
#define IDI_PDU_MAXOCTETS        0x010E    /*! PDU: Message Size */
#define IDI_MDM_SMS              0x010F    /*! MODEM: Message Found: */
#define IDI_MDM_DSMSQUEUED       0x0110    /*! MODEM: Data Message Queued*/
#define IDI_MDM_LOADEDMSISDN     0x0111    /*! MODEM: MSISDN LOADED: */
#define IDI_MDM_SMSRXPOSTED      0x0112    /*! MODEM: SMS Received and posted to router */
#define IDI_MDM_SMSRX            0x0113    /*! MODEM: SMS Received: */
#define IDI_MDM_EXTERNALCOM      0x0114    /*! MODEM: External Command: */
#define IDI_MDM_EXTERNALRESP     0x0115    /*! MODEM: External Response: */
#define IDI_MDM_MSGDESTROYED     0x0116    /*! MODEM: MESSAGE DESTROYED: Could not be Queued. */
#define IDI_MDM_PAS              0x0117    /*! MODEM: Phone Activity Status */
#define IDI_MDM_CURRENTOP        0x0118    /*! MODEM: Current GSM Operator ID */
#define IDI_MDM_GPRSSTACKVERSION 0x0119    /*! MODEM: GPRS Stack Version */

#define IDI_SKT_RXLENGTH         0x0200    /*! SKT: Received Length */
#define IDI_SKT_INDRXLENGTH      0x0201    /*! SKT: Indicated Length */
#define IDI_SKT_RXLENGTHREM      0x0202    /*! SKT: Remaining Length */
#define IDI_SKT_PINGRX           0x0203    /*! SKT: PING Received */
#define IDI_SKT_DATARX           0x0204    /*! SKT: Data Received */
#define IDI_SKT_RESPRX           0x0205    /*! SKT: Response Recevied */
#define IDI_SKT_TIMER            0x0206    /*! SKT: Socket Timers */
#define IDI_SKT_CRC              0x0207    /*! SKT: Received CRC */
#define IDI_SKT_HEADER           0x0208    /*! SKT: Header Info */
#define IDI_SKT_MSGQUEUEATTEMPT  0x0209    /*! SKT: Message queue attempt */
#define IDI_SKT_MSGQUEUESUCCESS  0x020A    /*! SKT: Message queue successful */
#define IDI_SKT_MSGQUEUED        0x020B    /*! SKT: Message Queued: */
#define IDI_SKT_RPTQUEUEATTEMPT  0x020C    /*! SKT: Report queue attempt */
#define IDI_SKT_RPTQUEUESUCCESS  0x020D    /*! SKT: Report queue successful */
#define IDI_SKT_RPTQUEUED        0x020E    /*! SKT: Report Queued */
#define IDI_MDM_MSISDN           0x020F    /*! MODEM: Destination MSISDN Retrieved */
#define IDI_MDM_SCA              0x0210    /*! MODEM: Service Center MSISDN Retrieved */
#define IDI_SKT_DATATX           0x0211    /*! SOCKET: Data Out: */
#define IDI_SKT_DATARX2          0x0212    /*! SOCKET: Data In: */
#define IDI_SKT_MSGDESTROYED     0x0213    /*! SOCKET: Response could not be queued */

#define IDI_VOICE_BUTTONPRESS    0x0300    /*! VOICE: BUTTON PRESSED */
#define IDI_TXT_INMESSAGE        0x0301    /*! TEXT: Incoming Message. */
#define IDI_PER_DASH             0x0302    /*! PERIPHERALS: Dashboard: */
#define IDI_PER_GENERAL          0x0303    /*! PERIPHERALS:*/

#define IDI_GPS_FULLMESSAGE      0x0400    /*! GPS: Message Recieved */
#define IDI_GPS_FROMUART         0x0401    /*! GPS: Parsed AT Response: */

#define IDI_DRV_GENERAL          0x0480    /*! DRIVER KEY:  */

#define IDI_CMX_GENERAL          0x0500    /*! CMUX: */
#define IDI_CMX_TX               0x0501    /*! CMUX: Transmission: */
#define IDI_CMX_RX               0x0502    /*! CMUX: Transmission: */

#define IDI_DC_GENERAL           0x0600    /*! DATACALL: */
#define IDI_DC_TIMER             0x0601    /*! DATACALL TIMER */

#define IDI_AUX_GENERAL          0x0001    /*! AUX: */

#define IDI_MAIN_FW_UPGRADE      0x1000    /*! MAIN: Firmware Upgrade */

#define IDI_IRD_TOIRIDIUM        0x2000    /*! IRIDIUM: Data to Module */
#define IDI_IRD_EXPECTED         0x2001    /*! IRIDIUM: Expected Response */
#define IDI_IRD_UNSOLICITED      0x2002    /*! IRIDIUM: Unsolicited Response */
#define IDI_IRD_GENERAL          0x2003    /*! IRIDIUM: GENERAL Info */

//</OLD_INFO_IDS>

/***************************************************************************
Warning Description ID Defines
****************************************************************************/
//<OLD_WARNING_IDS>
#define WDI_UNDEFINED             0          /*! Undefined */
#define WDI_MDM_ERROR             0x0100     /*! MODEM: Error Response */
#define WDI_MDM_WAITSTATE         0x0101     /*! MODEM: WAIT State */
#define WDI_MDM_GENERAL           0x0102     /*! MODEM: General*/
#define WDI_MDM_REBOOT            0x0103     /*! MODEM: Reboot Modem */
#define WDI_MDM_POWERCYCLE        0x0104     /*! MODEM: Power Cycle Modem */
#define WDI_MDM_WINDFAILURE       0x0105     /*! MODEM: Un-resolved WIND Indication */
#define WDI_MDM_MESSAGERETRYEX    0x0106     /*! MODEM: SMS Retry limit exceeded */
#define WDI_MDM_SMSRXJUNK         0x0107     /*! MODEM: SMS does not contain valid 18 command */
#define WDI_MDM_UPDATE_LU_PIN     0x0108     /*! MODEM: Updating last used PIN in config */
#define WDI_MDM_COPSFORMAT        0x0109     /*! MODEM: C-OPS format incorrect. Could not parse. */

#define WDI_SKT_RXCRCERROR        0x0200    /*! SKT: CRC ERROR */
#define WDI_SKT_NACK              0x0201    /*! SKT: NACK RECEIVED */
#define WDI_SKT_SEQERROR          0x0202    /*! SKT: Sequence Number in Ack not recognised. */


#define WDI_GPS_CHECKSUMERROR     0x0300    /*! GPS: Checksum ERROR ! */

#define WDI_DRV_GENERAL           0x0400    /*! DRIVER KEY: */

#define WDI_CMC_GENERAL           0x0500    /*! CMC: */

#define WDI_DC_GENERAL            0x0600    /*! DATACALL: */
#define WDI_IRD_ERROR             0x2002    /*! IRIDIUM: ERROR Received */
#define WDI_IRD_REBOOT            0x2003    /*! IRIDIUM: REBOOTING!! */
#define WDI_IRD_POWERCYCLE        0x2004    /*! IRIDIUM: POWERCYCLE */
//</OLD_WARNING_IDS>

/***************************************************************************
Error Description ID Defines
****************************************************************************/
//<OLD_ERROR_IDS>
#define EDI_UNDEFINED                        0         /*! Undefined */

#define EDI_MODEMSTATEMACHINE                0x0100    /*! MODEM: State Machine Error */
#define EDI_MODEMCRITICAL                    0x0101    /*! MODEM: Critical Error */
#define EDI_MODEMGENERAL                     0x0102    /*! MODEM: General Error */
#define EDI_MDM_INVPARM_ECHOALG              0x0103    /*! MODEM: Invalid Parameter ALGOLD*/
#define EDI_MDM_DATACALLOPENINIDLE           0x0104    /*! MODEM: Datacall open while in IDLE State */
#define EDI_MDM_COMMANDNOTALLOWED            0x0105    /*! MODEM: The following GSM state command used an illegal parameter or is not allowed at this time*/
#define EDI_MDM_LOGICAL                      0x0106    /*! MODEM: Programatical or logical error has occurred */
#define EDI_MDM_INVALID81CMD                 0x0107    /*! MODEM: Invalid 81 Command */
#define EDI_MDM_INVALIDDESTADD               0x0108    /*! MODEM: Invalid Destination Address Index */
#define EDI_MDM_INVALIDSCADD                 0x0109    /*! MODEM: Invalid SCA index */

#define EDI_SKT_RXSTATEERROR                 0x0200    /*! SOCKET: Invalid receive state */
#define EDI_SKT_ACKNOTENOTVALID              0x0201    /*! SOCKET: Notification that has been acknowledged does not match a known notification */
#define EDI_SKT_INVALID81CMD                 0x0202    /*! SOCKET: Invalid 81 Command */
#define EDI_SKT_LOGICAL                      0x0203    /*! SOCKET: Logical: */
#define EDI_UART_TOOBIG                      0x0200    /*! UART: Requested Frame too large */

#define EDI_MAIN_FW_UPGRADE                  0x1000    /*! MAIN: Firmware Upgrade */

#define EDI_VOICE_MSGALLOCFAIL               0x0300    /*! FAILED TO ALLOCATE ENVELOPE */

#define EDI_CMX_GENERAL                      0x0500    /*! CMC: */
#define EDI_CMX_REBOOT                       0x0501    /*! CMC REBOOT: */
#define EDI_CMX_RESET                        0x0502    /*! CMC RESET: */
#define EDI_CMX_MODULEERROR                  0x0503    /*! CMC MODULE ERROR: */
//</OLD_ERROR_IDS>

#ifdef DBG_NEW
typedef enum {
   TEnd,                // Signify the end of the format info
   TU8,
   TU16,
   TU32,
   TU64,
   TS8,
   TS16,
   TS32,
   TS64,
   TFLT,                // Field Type Float
   TDBL,                // Field Type Double
   TSTR,                // Field Type String
} enumFieldTypes;

typedef enum {
   TU8LEN    = 1,
   TU16LEN   = 2,
   TU32LEN   = 4,
   TU64LEN   = 8,
   TS8LEN    = 1,
   TS16LEN   = 2,
   TS32LEN   = 4,
   TS64LEN   = 8,
   TFLTLEN   = 4,
   TDBLLEN   = 8
} enumFieldSizes; 


#define FLD(SLOT,Fmt)                                                                               (Fmt << (SLOT*4))
#define FORMAT_STR                                                                                  0
#define FORMAT_1( TF1)                                                                              FLD(0,TF1)
#define FORMAT_2( TF1, TF2)                                                                         FORMAT_1(TF1)|FLD(1,TF2)
#define FORMAT_3( TF1, TF2, TF3)                                                                    FORMAT_2(TF1,TF2)|FLD(1,TF3)
#define FORMAT_4( TF1, TF2, TF3, TF4)                                                               FORMAT_3(TF1,TF2,TF3)|FLD(1,TF4)
#define FORMAT_5( TF1, TF2, TF3, TF4, TF5)                                                          FORMAT_4(TF1,TF2,TF3,TF4)|FLD(1,TF5)
#define FORMAT_6( TF1, TF2, TF3, TF4, TF5, TF6)                                                     FORMAT_5(TF1,TF2,TF3,TF4,TF5)|FLD(1,TF6)
#define FORMAT_7( TF1, TF2, TF3, TF4, TF5, TF6, TF7)                                                FORMAT_6(TF1,TF2,TF3,TF4,TF5,TF6)|FLD(1,TF7)
#define FORMAT_8( TF1, TF2, TF3, TF4, TF5, TF6, TF7, TF8)                                           FORMAT_7(TF1,TF2,TF3,TF4,TF5,TF6,TF7)|FLD(1,TF8)
#define FORMAT_9( TF1, TF2, TF3, TF4, TF5, TF6, TF7, TF8, TF9)                                      FORMAT_8(TF1,TF2,TF3,TF4,TF5,TF6,TF7,TF8)|FLD(1,TF9)
#define FORMAT_10(TF1, TF2, TF3, TF4, TF5, TF6, TF7, TF8, TF9, TF10)                                FORMAT_9(TF1,TF2,TF3,TF4,TF5,TF6,TF7,TF8,TF9)|FLD(1,TF10)
#define FORMAT_11(TF1, TF2, TF3, TF4, TF5, TF6, TF7, TF8, TF9, TF10, TF11)                          FORMAT_10(TF1,TF2,TF3,TF4,TF5,TF6,TF7,TF8,TF9,TF10)|FLD(1,TF11)
#define FORMAT_12(TF1, TF2, TF3, TF4, TF5, TF6, TF7, TF8, TF9, TF10, TF11,TF12)                     FORMAT_11(TF1,TF2,TF3,TF4,TF5,TF6,TF7,TF8,TF9,TF10,TF11)|FLD(1,TF12)
#define FORMAT_13(TF1, TF2, TF3, TF4, TF5, TF6, TF7, TF8, TF9, TF10, TF11,TF12,TF13)                FORMAT_12(TF1,TF2,TF3,TF4,TF5,TF6,TF7,TF8,TF9,TF10,TF11,TF12)|FLD(1,TF13)
#define FORMAT_14(TF1, TF2, TF3, TF4, TF5, TF6, TF7, TF8, TF9, TF10, TF11,TF12,TF13,TF14)           FORMAT_13(TF1,TF2,TF3,TF4,TF5,TF6,TF7,TF8,TF9,TF10,TF11,TF12,TF13)|FLD(1,TF14)
#define FORMAT_15(TF1, TF2, TF3, TF4, TF5, TF6, TF7, TF8, TF9, TF10, TF11,TF12,TF13,TF14,TF15)      FORMAT_14(TF1,TF2,TF3,TF4,TF5,TF6,TF7,TF8,TF9,TF10,TF11,TF12,TF13,TF14)|FLD(1,TF15)
#define FORMAT_16(TF1, TF2, TF3, TF4, TF5, TF6, TF7, TF8, TF9, TF10, TF11,TF12,TF13,TF14,TF15,TF16) FORMAT_15(TF1,TF2,TF3,TF4,TF5,TF6,TF7,TF8,TF9,TF10,TF11,TF12,TF13,TF14,TF15)|FLD(1,TF16)
                                                                                            
/***************************************************************************
Error Description ID Defines
****************************************************************************/
//<ERROR_IDS>
#define EID1   1,FORMAT_STR /*! Invalid BitBuffer Control Structure */
#define EID2   2,FORMAT_1(TU16) /*! BitBuf %d RAM value corrupt */
#define EID3   3,FORMAT_4(TU16,TU16,TU16,TU16) /*! Sys WDT F:%d L:%d, F:%d L:%d */
#define EID4   4,FORMAT_4(TU16,TU16,TU16,TU16) /*! Sys BrwnOut F:%d L:%d, F:%d L:%d */
#define EID5   5,FORMAT_STR /*! CRITICAL: DF ERROR */
#define EID6   6,FORMAT_STR /*! CRITICAL: SPI RW ERROR */
#define EID7   7,FORMAT_7(TSTR,TSTR,TSTR,TSTR,TSTR,TSTR,TSTR) /*! CRITICAL %s%s%s%s%s%s%s ERROR */
#define EID8   8,FORMAT_STR /*! Accelerometer Forced Re-init */
#define EID9   9,FORMAT_STR /*! Flash Init. Failed */
#define EID10  10,FORMAT_STR /*! DEBUG MUTEX LOCKOUT */
#define EID11  11,FORMAT_STR /*! Temp. Sens. No Power */
//</ERROR_IDS>



/***************************************************************************
Warning Description ID Defines
****************************************************************************/
//<WARNING_IDS>
#define WID1   1,FORMAT_1(TU16) /*! BitBuffer %d: No Start value update required */
#define WID2   2,FORMAT_1(TU16) /*! BitBuffer %d: No Start value update required */
#define WID3   3,FORMAT_4(TU16,TU16,TU16,TU16) /*! Sys PwrUp F:%d L:%d, F:%d L:%d */
#define WID4   4,FORMAT_STR /*! Sys PwrUp */
#define WID5   5,FORMAT_STR /*! Sys WDT */
#define WID6   6,FORMAT_STR /*! Sys BrwnOut */
#define WID7   7,FORMAT_4(TU16,TU16,TU16,TU16) /*! Sys Ext Rst F:%d L:%d, F:%d L:%d */
#define WID8   8,FORMAT_STR /*! Sys Ext Rst */
#define WID9   9,FORMAT_4(TU16,TU16,TU16,TU16) /*! Sys Rst F:%d L:%d, F:%d L:%d */
#define WID10   10,FORMAT_STR /*! Sys Rst */
#define WID11   11,FORMAT_STR /*! Firmware Upgrade SUCCESSFUL */
#define WID12   12,FORMAT_STR /*! ENGINEERING TEST VERSION */
#define WID13   13,FORMAT_STR /*! GSM REGULATOR ON */
#define WID14   14,FORMAT_3(TU16,TU16,TU32) /*! SLOW TSK - File: %d Line: %d PC: %08X */
#define WID15   15,FORMAT_3(TU16,TU16,TU32) /*! SLOW TSK - File: %d Line: %d PC: %08X */
#define WID16   16,FORMAT_1(TU32) /*! Update IMEI %d */
#define WID17   17,FORMAT_1(TU32) /*! Update IMEI %d */
//</WARNING_IDS>



/***************************************************************************
Info Description ID Defines
****************************************************************************/
//<INFO_IDS>
#define IID1   1,FORMAT_1(TU16) /*! Init BitBuffer at Page %d */
#define IID2   2,FORMAT_1(TU16) /*! BitBuffer at Page %d not formatted yet */
#define IID3   3,FORMAT_1(TU16) /*! BitBuffer at Page %d flushed */
#define IID4   4,FORMAT_1(TU16) /*! BitBuffer %d wrapped */
#define IID5   5,FORMAT_2(TU16,TU32) /*! BitBuffer %d Count = %d */
#define IID6   6,FORMAT_1(TU16) /*! BitBuffer %d wrapped */
#define IID7   7,FORMAT_8(TU16,TU32,TU16,TU16,TU32,TU32,TU16,TU8) /*! ADDR:%d, SVAL:%d, SCALE:%d, ECNT:%d, DT:%d, GF:%d, COUNT:%d, BLOCK:%d */
#define IID8   8,FORMAT_2(TU16,TU32) /*! BitBuffer %d Set Start Value to %d */
#define IID9   9,FORMAT_2(TU16,TU32) /*! BitBuffer %d Set Start Value to %d */
#define IID10   10,FORMAT_STR /*! Initialize BitBuffers */
#define IID11   11,FORMAT_1(TSTR) /*! %s Initialized! */
#define IID12   12,FORMAT_STR /*! Boot: COLD */
#define IID13   13,FORMAT_STR /*! Boot: WARM */
#define IID14   14,FORMAT_4(TU8,TU8,TSTR,TSTR) /*! HW: MHub837S Fw Ver:%03d.%03d %s %s */
#define IID15   15,FORMAT_4(TU8,TU8,TSTR,TSTR) /*! HW: MHub837S Fw Ver:%03d.%03d %s %s */
#define IID16   16,FORMAT_4(TU8,TU8,TSTR,TSTR) /*! HW: MHub 8377 Fw Ver:%03d.%03d %s %s */
#define IID17   17,FORMAT_4(TU8,TU8,TSTR,TSTR) /*! HW: MHub8377 Fw Ver:%03d.%03d %s %s */
#define IID18   18,FORMAT_4(TU8,TU8,TSTR,TSTR) /*! HW: MHub8376 Fw Ver:%03d.%03d %s %s */
#define IID19   19,FORMAT_4(TU8,TU8,TSTR,TSTR) /*! HW: MHub8376 Fw Ver:%03d.%03d %s %s */
#define IID20   20,FORMAT_4(TU8,TU8,TSTR,TSTR) /*! HW: MHub8464 Fw Ver:%03d.%03d %s %s */
#define IID21   21,FORMAT_4(TU8,TU8,TSTR,TSTR) /*! HW: MHub8464 Fw Ver:%03d.%03d %s %s */
#define IID22   22,FORMAT_4(TU8,TU8,TSTR,TSTR) /*! HW: MHub8463 Fw Ver:%03d.%03d %s %s */
#define IID23   23,FORMAT_4(TU8,TU8,TSTR,TSTR) /*! HW: MHub8463 Fw Ver:%03d.%03d %s %s */
#define IID24   24,FORMAT_4(TU8,TU8,TSTR,TSTR) /*! HW: MHub8462 Fw Ver:%03d.%03d %s %s */
#define IID25   25,FORMAT_4(TU8,TU8,TSTR,TSTR) /*! HW: MHub8462 Fw Ver:%03d.%03d %s %s */
#define IID26   26,FORMAT_4(TU8,TU8,TSTR,TSTR) /*! HW: MHub8375 Fw Ver:%03d.%03d %s %s */
#define IID27   27,FORMAT_4(TU8,TU8,TSTR,TSTR) /*! HW: MHub8375 Fw Ver:%03d.%03d %s %s */
#define IID28   28,FORMAT_4(TU8,TU8,TSTR,TSTR) /*! HW: MHub8374 Fw Ver:%03d.%03d %s %s */
#define IID29   29,FORMAT_4(TU8,TU8,TSTR,TSTR) /*! HW: MHub8374 Fw Ver:%03d.%03d %s %s */
#define IID30   30,FORMAT_1(TU32) /*! MHub ON - Minute Count = %d */
#define IID31   31,FORMAT_1(TU32) /*! Ign ON - Minute Count = %d */
#define IID32   32,FORMAT_2(TU32,TU32) /*! UART4 Int: %d, UART2 Int: %d */
#define IID33   33,FORMAT_1(TU32) /*! CM:%duS */
#define IID34   34,FORMAT_1(TU32) /*! Timer Cnt: %ld */
#define IID35   35,FORMAT_1(TU32) /*! Acc Samples:%dHz */
#define IID36   36,FORMAT_2(TU32) /*! Mem: %d Peak: %d */
#define IID37   37,FORMAT_5(TU16,TU16,TU16,TU16,TU8) /*! T: %d, H: %d, HP: %d, NP: %d, Env: %d */
#define IID38   38,FORMAT_7(TU16,TU16,TU16,TU16,TU8,TU8,TU8) /*! T: %d, H: %d, HP: %d, NP: %d, Env: %d, PDA_C: %d, PDA_H: %d */
#define IID39   39,FORMAT_STR /*! START AES */
#define IID40   40,FORMAT_1(TU32) /*! END AES %d */
#define IID41   41,FORMAT_1(TSTR) /*! HW: MHub8377 %s */
#define IID42   42,FORMAT_3(TU32,TU32,TU32) /*! %08X %08X %08X */
#define IID43   43,FORMAT_STR /*! OW TEMP GOOD */
#define IID44   44,FORMAT_STR /*! OW TEMP BAD */
#define IID45   45,FORMAT_2(TU8,TU16) /*! Temp %d Read: %02d */
#define IID46   46,FORMAT_1(TSTR) /*! %s */
//</INFO_IDS>


#endif

#endif // SCP_DBGDEFINES_H
