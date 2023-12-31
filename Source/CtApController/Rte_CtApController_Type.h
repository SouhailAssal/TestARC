/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *             File:  Rte_CtApController_Type.h
 *           Config:  FanControl.dpa
 *        SW-C Type:  CtApController
 *
 *        Generator:  MICROSAR RTE Generator Version 4.31.0
 *                    RTE Core Version 4.31.0
 *          License:  PAI5515
 *
 *      Description:  Application types header file for SW-C <CtApController> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAPCONTROLLER_TYPE_H
# define RTE_CTAPCONTROLLER_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  ifndef RELEASED
#   define RELEASED (0U)
#  endif

#  ifndef REQUESTED
#   define REQUESTED (1U)
#  endif

#  ifndef COMM_NO_COMMUNICATION
#   define COMM_NO_COMMUNICATION (0U)
#  endif

#  ifndef COMM_SILENT_COMMUNICATION
#   define COMM_SILENT_COMMUNICATION (1U)
#  endif

#  ifndef COMM_FULL_COMMUNICATION
#   define COMM_FULL_COMMUNICATION (2U)
#  endif

#  ifndef DCM_E_POSITIVERESPONSE
#   define DCM_E_POSITIVERESPONSE (0U)
#  endif

#  ifndef DCM_E_GENERALREJECT
#   define DCM_E_GENERALREJECT (16U)
#  endif

#  ifndef DCM_E_SERVICENOTSUPPORTED
#   define DCM_E_SERVICENOTSUPPORTED (17U)
#  endif

#  ifndef DCM_E_SUBFUNCTIONNOTSUPPORTED
#   define DCM_E_SUBFUNCTIONNOTSUPPORTED (18U)
#  endif

#  ifndef DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT
#   define DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT (19U)
#  endif

#  ifndef DCM_E_RESPONSETOOLONG
#   define DCM_E_RESPONSETOOLONG (20U)
#  endif

#  ifndef DCM_E_BUSYREPEATREQUEST
#   define DCM_E_BUSYREPEATREQUEST (33U)
#  endif

#  ifndef DCM_E_CONDITIONSNOTCORRECT
#   define DCM_E_CONDITIONSNOTCORRECT (34U)
#  endif

#  ifndef DCM_E_REQUESTSEQUENCEERROR
#   define DCM_E_REQUESTSEQUENCEERROR (36U)
#  endif

#  ifndef DCM_E_NORESPONSEFROMSUBNETCOMPONENT
#   define DCM_E_NORESPONSEFROMSUBNETCOMPONENT (37U)
#  endif

#  ifndef DCM_E_FAILUREPREVENTSEXECUTIONOFREQUESTEDACTION
#   define DCM_E_FAILUREPREVENTSEXECUTIONOFREQUESTEDACTION (38U)
#  endif

#  ifndef DCM_E_REQUESTOUTOFRANGE
#   define DCM_E_REQUESTOUTOFRANGE (49U)
#  endif

#  ifndef DCM_E_SECURITYACCESSDENIED
#   define DCM_E_SECURITYACCESSDENIED (51U)
#  endif

#  ifndef DCM_E_AUTHENTICATIONREQUIRED
#   define DCM_E_AUTHENTICATIONREQUIRED (52U)
#  endif

#  ifndef DCM_E_INVALIDKEY
#   define DCM_E_INVALIDKEY (53U)
#  endif

#  ifndef DCM_E_EXCEEDNUMBEROFATTEMPTS
#   define DCM_E_EXCEEDNUMBEROFATTEMPTS (54U)
#  endif

#  ifndef DCM_E_REQUIREDTIMEDELAYNOTEXPIRED
#   define DCM_E_REQUIREDTIMEDELAYNOTEXPIRED (55U)
#  endif

#  ifndef DCM_E_CVF_INVALIDTIMEPERIOD
#   define DCM_E_CVF_INVALIDTIMEPERIOD (80U)
#  endif

#  ifndef DCM_E_CVF_INVALIDSIGNATURE
#   define DCM_E_CVF_INVALIDSIGNATURE (81U)
#  endif

#  ifndef DCM_E_CVF_INVALIDCHAINOFTRUST
#   define DCM_E_CVF_INVALIDCHAINOFTRUST (82U)
#  endif

#  ifndef DCM_E_CVF_INVALIDTYPE
#   define DCM_E_CVF_INVALIDTYPE (83U)
#  endif

#  ifndef DCM_E_CVF_INVALIDFORMAT
#   define DCM_E_CVF_INVALIDFORMAT (84U)
#  endif

#  ifndef DCM_E_CVF_INVALIDCONTENT
#   define DCM_E_CVF_INVALIDCONTENT (85U)
#  endif

#  ifndef DCM_E_CVF_INVALIDSCOPE
#   define DCM_E_CVF_INVALIDSCOPE (86U)
#  endif

#  ifndef DCM_E_CVF_INVALIDCERTIFICATEREVOKED
#   define DCM_E_CVF_INVALIDCERTIFICATEREVOKED (87U)
#  endif

#  ifndef DCM_E_OWNERSHIPVERIFICATIONFAILED
#   define DCM_E_OWNERSHIPVERIFICATIONFAILED (88U)
#  endif

#  ifndef DCM_E_CHALLENGECALCULATIONFAILED
#   define DCM_E_CHALLENGECALCULATIONFAILED (89U)
#  endif

#  ifndef DCM_E_UPLOADDOWNLOADNOTACCEPTED
#   define DCM_E_UPLOADDOWNLOADNOTACCEPTED (112U)
#  endif

#  ifndef DCM_E_TRANSFERDATASUSPENDED
#   define DCM_E_TRANSFERDATASUSPENDED (113U)
#  endif

#  ifndef DCM_E_GENERALPROGRAMMINGFAILURE
#   define DCM_E_GENERALPROGRAMMINGFAILURE (114U)
#  endif

#  ifndef DCM_E_WRONGBLOCKSEQUENCECOUNTER
#   define DCM_E_WRONGBLOCKSEQUENCECOUNTER (115U)
#  endif

#  ifndef DCM_E_REQUESTCORRECTLYRECEIVEDRESPONSEPENDING
#   define DCM_E_REQUESTCORRECTLYRECEIVEDRESPONSEPENDING (120U)
#  endif

#  ifndef DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION
#   define DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION (126U)
#  endif

#  ifndef DCM_E_SERVICENOTSUPPORTEDINACTIVESESSION
#   define DCM_E_SERVICENOTSUPPORTEDINACTIVESESSION (127U)
#  endif

#  ifndef DCM_E_RPMTOOHIGH
#   define DCM_E_RPMTOOHIGH (129U)
#  endif

#  ifndef DCM_E_RPMTOOLOW
#   define DCM_E_RPMTOOLOW (130U)
#  endif

#  ifndef DCM_E_ENGINEISRUNNING
#   define DCM_E_ENGINEISRUNNING (131U)
#  endif

#  ifndef DCM_E_ENGINEISNOTRUNNING
#   define DCM_E_ENGINEISNOTRUNNING (132U)
#  endif

#  ifndef DCM_E_ENGINERUNTIMETOOLOW
#   define DCM_E_ENGINERUNTIMETOOLOW (133U)
#  endif

#  ifndef DCM_E_TEMPERATURETOOHIGH
#   define DCM_E_TEMPERATURETOOHIGH (134U)
#  endif

#  ifndef DCM_E_TEMPERATURETOOLOW
#   define DCM_E_TEMPERATURETOOLOW (135U)
#  endif

#  ifndef DCM_E_VEHICLESPEEDTOOHIGH
#   define DCM_E_VEHICLESPEEDTOOHIGH (136U)
#  endif

#  ifndef DCM_E_VEHICLESPEEDTOOLOW
#   define DCM_E_VEHICLESPEEDTOOLOW (137U)
#  endif

#  ifndef DCM_E_THROTTLE_PEDALTOOHIGH
#   define DCM_E_THROTTLE_PEDALTOOHIGH (138U)
#  endif

#  ifndef DCM_E_THROTTLE_PEDALTOOLOW
#   define DCM_E_THROTTLE_PEDALTOOLOW (139U)
#  endif

#  ifndef DCM_E_TRANSMISSIONRANGENOTINNEUTRAL
#   define DCM_E_TRANSMISSIONRANGENOTINNEUTRAL (140U)
#  endif

#  ifndef DCM_E_TRANSMISSIONRANGENOTINGEAR
#   define DCM_E_TRANSMISSIONRANGENOTINGEAR (141U)
#  endif

#  ifndef DCM_E_BRAKESWITCH_NOTCLOSED
#   define DCM_E_BRAKESWITCH_NOTCLOSED (143U)
#  endif

#  ifndef DCM_E_SHIFTERLEVERNOTINPARK
#   define DCM_E_SHIFTERLEVERNOTINPARK (144U)
#  endif

#  ifndef DCM_E_TORQUECONVERTERCLUTCHLOCKED
#   define DCM_E_TORQUECONVERTERCLUTCHLOCKED (145U)
#  endif

#  ifndef DCM_E_VOLTAGETOOHIGH
#   define DCM_E_VOLTAGETOOHIGH (146U)
#  endif

#  ifndef DCM_E_VOLTAGETOOLOW
#   define DCM_E_VOLTAGETOOLOW (147U)
#  endif

#  ifndef DCM_E_VMSCNC_0
#   define DCM_E_VMSCNC_0 (240U)
#  endif

#  ifndef DCM_E_VMSCNC_1
#   define DCM_E_VMSCNC_1 (241U)
#  endif

#  ifndef DCM_E_VMSCNC_2
#   define DCM_E_VMSCNC_2 (242U)
#  endif

#  ifndef DCM_E_VMSCNC_3
#   define DCM_E_VMSCNC_3 (243U)
#  endif

#  ifndef DCM_E_VMSCNC_4
#   define DCM_E_VMSCNC_4 (244U)
#  endif

#  ifndef DCM_E_VMSCNC_5
#   define DCM_E_VMSCNC_5 (245U)
#  endif

#  ifndef DCM_E_VMSCNC_6
#   define DCM_E_VMSCNC_6 (246U)
#  endif

#  ifndef DCM_E_VMSCNC_7
#   define DCM_E_VMSCNC_7 (247U)
#  endif

#  ifndef DCM_E_VMSCNC_8
#   define DCM_E_VMSCNC_8 (248U)
#  endif

#  ifndef DCM_E_VMSCNC_9
#   define DCM_E_VMSCNC_9 (249U)
#  endif

#  ifndef DCM_E_VMSCNC_A
#   define DCM_E_VMSCNC_A (250U)
#  endif

#  ifndef DCM_E_VMSCNC_B
#   define DCM_E_VMSCNC_B (251U)
#  endif

#  ifndef DCM_E_VMSCNC_C
#   define DCM_E_VMSCNC_C (252U)
#  endif

#  ifndef DCM_E_VMSCNC_D
#   define DCM_E_VMSCNC_D (253U)
#  endif

#  ifndef DCM_E_VMSCNC_E
#   define DCM_E_VMSCNC_E (254U)
#  endif

#  ifndef DCM_INITIAL
#   define DCM_INITIAL (0U)
#  endif

#  ifndef DCM_PENDING
#   define DCM_PENDING (1U)
#  endif

#  ifndef DCM_CANCEL
#   define DCM_CANCEL (2U)
#  endif

#  ifndef DCM_FORCE_RCRRP_OK
#   define DCM_FORCE_RCRRP_OK (3U)
#  endif

#  ifndef DCM_FORCE_RCRRP_NOT_OK
#   define DCM_FORCE_RCRRP_NOT_OK (64U)
#  endif

#  ifndef DEM_EVENT_STATUS_PASSED
#   define DEM_EVENT_STATUS_PASSED (0U)
#  endif

#  ifndef DEM_EVENT_STATUS_FAILED
#   define DEM_EVENT_STATUS_FAILED (1U)
#  endif

#  ifndef DEM_EVENT_STATUS_PREPASSED
#   define DEM_EVENT_STATUS_PREPASSED (2U)
#  endif

#  ifndef DEM_EVENT_STATUS_PREFAILED
#   define DEM_EVENT_STATUS_PREFAILED (3U)
#  endif

#  ifndef DEM_EVENT_STATUS_FDC_THRESHOLD_REACHED
#   define DEM_EVENT_STATUS_FDC_THRESHOLD_REACHED (4U)
#  endif

#  ifndef DEM_EVENT_STATUS_PASSED_CONDITIONS_NOT_FULFILLED
#   define DEM_EVENT_STATUS_PASSED_CONDITIONS_NOT_FULFILLED (5U)
#  endif

#  ifndef DEM_EVENT_STATUS_FAILED_CONDITIONS_NOT_FULFILLED
#   define DEM_EVENT_STATUS_FAILED_CONDITIONS_NOT_FULFILLED (6U)
#  endif

#  ifndef DEM_EVENT_STATUS_PREPASSED_CONDITIONS_NOT_FULFILLED
#   define DEM_EVENT_STATUS_PREPASSED_CONDITIONS_NOT_FULFILLED (7U)
#  endif

#  ifndef DEM_EVENT_STATUS_PREFAILED_CONDITIONS_NOT_FULFILLED
#   define DEM_EVENT_STATUS_PREFAILED_CONDITIONS_NOT_FULFILLED (8U)
#  endif

#  ifndef DEM_CYCLE_STATE_START
#   define DEM_CYCLE_STATE_START (0U)
#  endif

#  ifndef DEM_CYCLE_STATE_END
#   define DEM_CYCLE_STATE_END (1U)
#  endif

#  ifndef DEM_UDS_STATUS_TF
#   define DEM_UDS_STATUS_TF (1U)
#  endif

#  ifndef DEM_UDS_STATUS_TF_BflMask
#   define DEM_UDS_STATUS_TF_BflMask 1U
#  endif

#  ifndef DEM_UDS_STATUS_TF_BflPn
#   define DEM_UDS_STATUS_TF_BflPn 0U
#  endif

#  ifndef DEM_UDS_STATUS_TF_BflLn
#   define DEM_UDS_STATUS_TF_BflLn 1U
#  endif

#  ifndef DEM_UDS_STATUS_TFTOC
#   define DEM_UDS_STATUS_TFTOC (2U)
#  endif

#  ifndef DEM_UDS_STATUS_TFTOC_BflMask
#   define DEM_UDS_STATUS_TFTOC_BflMask 2U
#  endif

#  ifndef DEM_UDS_STATUS_TFTOC_BflPn
#   define DEM_UDS_STATUS_TFTOC_BflPn 1U
#  endif

#  ifndef DEM_UDS_STATUS_TFTOC_BflLn
#   define DEM_UDS_STATUS_TFTOC_BflLn 1U
#  endif

#  ifndef DEM_UDS_STATUS_PDTC
#   define DEM_UDS_STATUS_PDTC (4U)
#  endif

#  ifndef DEM_UDS_STATUS_PDTC_BflMask
#   define DEM_UDS_STATUS_PDTC_BflMask 4U
#  endif

#  ifndef DEM_UDS_STATUS_PDTC_BflPn
#   define DEM_UDS_STATUS_PDTC_BflPn 2U
#  endif

#  ifndef DEM_UDS_STATUS_PDTC_BflLn
#   define DEM_UDS_STATUS_PDTC_BflLn 1U
#  endif

#  ifndef DEM_UDS_STATUS_CDTC
#   define DEM_UDS_STATUS_CDTC (8U)
#  endif

#  ifndef DEM_UDS_STATUS_CDTC_BflMask
#   define DEM_UDS_STATUS_CDTC_BflMask 8U
#  endif

#  ifndef DEM_UDS_STATUS_CDTC_BflPn
#   define DEM_UDS_STATUS_CDTC_BflPn 3U
#  endif

#  ifndef DEM_UDS_STATUS_CDTC_BflLn
#   define DEM_UDS_STATUS_CDTC_BflLn 1U
#  endif

#  ifndef DEM_UDS_STATUS_TNCSLC
#   define DEM_UDS_STATUS_TNCSLC (16U)
#  endif

#  ifndef DEM_UDS_STATUS_TNCSLC_BflMask
#   define DEM_UDS_STATUS_TNCSLC_BflMask 16U
#  endif

#  ifndef DEM_UDS_STATUS_TNCSLC_BflPn
#   define DEM_UDS_STATUS_TNCSLC_BflPn 4U
#  endif

#  ifndef DEM_UDS_STATUS_TNCSLC_BflLn
#   define DEM_UDS_STATUS_TNCSLC_BflLn 1U
#  endif

#  ifndef DEM_UDS_STATUS_TFSLC
#   define DEM_UDS_STATUS_TFSLC (32U)
#  endif

#  ifndef DEM_UDS_STATUS_TFSLC_BflMask
#   define DEM_UDS_STATUS_TFSLC_BflMask 32U
#  endif

#  ifndef DEM_UDS_STATUS_TFSLC_BflPn
#   define DEM_UDS_STATUS_TFSLC_BflPn 5U
#  endif

#  ifndef DEM_UDS_STATUS_TFSLC_BflLn
#   define DEM_UDS_STATUS_TFSLC_BflLn 1U
#  endif

#  ifndef DEM_UDS_STATUS_TNCTOC
#   define DEM_UDS_STATUS_TNCTOC (64U)
#  endif

#  ifndef DEM_UDS_STATUS_TNCTOC_BflMask
#   define DEM_UDS_STATUS_TNCTOC_BflMask 64U
#  endif

#  ifndef DEM_UDS_STATUS_TNCTOC_BflPn
#   define DEM_UDS_STATUS_TNCTOC_BflPn 6U
#  endif

#  ifndef DEM_UDS_STATUS_TNCTOC_BflLn
#   define DEM_UDS_STATUS_TNCTOC_BflLn 1U
#  endif

#  ifndef DEM_UDS_STATUS_WIR
#   define DEM_UDS_STATUS_WIR (128U)
#  endif

#  ifndef DEM_UDS_STATUS_WIR_BflMask
#   define DEM_UDS_STATUS_WIR_BflMask 128U
#  endif

#  ifndef DEM_UDS_STATUS_WIR_BflPn
#   define DEM_UDS_STATUS_WIR_BflPn 7U
#  endif

#  ifndef DEM_UDS_STATUS_WIR_BflLn
#   define DEM_UDS_STATUS_WIR_BflLn 1U
#  endif

#  ifndef Faulty
#   define Faulty (1U)
#  endif

#  ifndef NormalOperation
#   define NormalOperation (0U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAPCONTROLLER_TYPE_H */
