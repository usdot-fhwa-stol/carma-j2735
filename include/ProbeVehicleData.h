/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "carma_complete_j2735.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_ProbeVehicleData_H_
#define	_ProbeVehicleData_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MinuteOfTheYear.h"
#include "ProbeSegmentNumber.h"
#include "FullPositionVector.h"
#include "VehicleClassification.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct VehicleIdent;
struct Snapshot;
struct RegionalExtension;

/* ProbeVehicleData */
typedef struct ProbeVehicleData {
	MinuteOfTheYear_t	*timeStamp	/* OPTIONAL */;
	ProbeSegmentNumber_t	*segNum	/* OPTIONAL */;
	struct VehicleIdent	*probeID	/* OPTIONAL */;
	FullPositionVector_t	 startVector;
	VehicleClassification_t	 vehicleType;
	struct ProbeVehicleData__snapshots {
		A_SEQUENCE_OF(struct Snapshot) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} snapshots;
	struct ProbeVehicleData__regional {
		A_SEQUENCE_OF(struct RegionalExtension) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *regional;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProbeVehicleData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProbeVehicleData;
extern asn_SEQUENCE_specifics_t asn_SPC_ProbeVehicleData_specs_1;
extern asn_TYPE_member_t asn_MBR_ProbeVehicleData_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "VehicleIdent.h"
#include "Snapshot.h"
#include "RegionalExtension.h"

#endif	/* _ProbeVehicleData_H_ */
#include <asn_internal.h>
