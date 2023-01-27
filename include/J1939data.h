/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "carma_complete_j2735.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_J1939data_H_
#define	_J1939data_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TrailerWeight.h"
#include "CargoWeight.h"
#include "SteeringAxleTemperature.h"
#include "DriveAxleLocation.h"
#include "DriveAxleLiftAirPressure.h"
#include "DriveAxleTemperature.h"
#include "DriveAxleLubePressure.h"
#include "SteeringAxleLubePressure.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TireDataList;
struct AxleWeightList;

/* J1939data */
typedef struct J1939data {
	struct TireDataList	*tires	/* OPTIONAL */;
	struct AxleWeightList	*axles	/* OPTIONAL */;
	TrailerWeight_t	*trailerWeight	/* OPTIONAL */;
	CargoWeight_t	*cargoWeight	/* OPTIONAL */;
	SteeringAxleTemperature_t	*steeringAxleTemperature	/* OPTIONAL */;
	DriveAxleLocation_t	*driveAxleLocation	/* OPTIONAL */;
	DriveAxleLiftAirPressure_t	*driveAxleLiftAirPressure	/* OPTIONAL */;
	DriveAxleTemperature_t	*driveAxleTemperature	/* OPTIONAL */;
	DriveAxleLubePressure_t	*driveAxleLubePressure	/* OPTIONAL */;
	SteeringAxleLubePressure_t	*steeringAxleLubePressure	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} J1939data_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_J1939data;
extern asn_SEQUENCE_specifics_t asn_SPC_J1939data_specs_1;
extern asn_TYPE_member_t asn_MBR_J1939data_1[10];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TireDataList.h"
#include "AxleWeightList.h"

#endif	/* _J1939data_H_ */
#include <asn_internal.h>
