/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "carma_complete_j2735.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_GeographicalPath_H_
#define	_GeographicalPath_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DescriptiveName.h"
#include "LaneWidth.h"
#include "DirectionOfUse.h"
#include <BOOLEAN.h>
#include "HeadingSlice.h"
#include "OffsetSystem.h"
#include "GeometricProjection.h"
#include "ValidRegion.h"
#include <constr_CHOICE.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GeographicalPath__description_PR {
	GeographicalPath__description_PR_NOTHING,	/* No components present */
	GeographicalPath__description_PR_path,
	GeographicalPath__description_PR_geometry,
	GeographicalPath__description_PR_oldRegion
	/* Extensions may appear below */
	
} GeographicalPath__description_PR;

/* Forward declarations */
struct RoadSegmentReferenceID;
struct Position3D;
struct RegionalExtension;

/* GeographicalPath */
typedef struct GeographicalPath {
	DescriptiveName_t	*name	/* OPTIONAL */;
	struct RoadSegmentReferenceID	*id	/* OPTIONAL */;
	struct Position3D	*anchor	/* OPTIONAL */;
	LaneWidth_t	*laneWidth	/* OPTIONAL */;
	DirectionOfUse_t	*directionality	/* OPTIONAL */;
	BOOLEAN_t	*closedPath	/* OPTIONAL */;
	HeadingSlice_t	*direction	/* OPTIONAL */;
	struct GeographicalPath__description {
		GeographicalPath__description_PR present;
		union GeographicalPath__description_u {
			OffsetSystem_t	 path;
			GeometricProjection_t	 geometry;
			ValidRegion_t	 oldRegion;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *description;
	struct GeographicalPath__regional {
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
} GeographicalPath_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GeographicalPath;
extern asn_SEQUENCE_specifics_t asn_SPC_GeographicalPath_specs_1;
extern asn_TYPE_member_t asn_MBR_GeographicalPath_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RoadSegmentReferenceID.h"
#include "Position3D.h"
#include "RegionalExtension.h"

#endif	/* _GeographicalPath_H_ */
#include <asn_internal.h>
