/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "carma_complete_j2735.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_ValidRegion_H_
#define	_ValidRegion_H_


#include <asn_application.h>

/* Including external dependencies */
#include "HeadingSlice.h"
#include "Extent.h"
#include "ShapePointSet.h"
#include "Circle.h"
#include "RegionPointSet.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ValidRegion__area_PR {
	ValidRegion__area_PR_NOTHING,	/* No components present */
	ValidRegion__area_PR_shapePointSet,
	ValidRegion__area_PR_circle,
	ValidRegion__area_PR_regionPointSet
} ValidRegion__area_PR;

/* ValidRegion */
typedef struct ValidRegion {
	HeadingSlice_t	 direction;
	Extent_t	*extent	/* OPTIONAL */;
	struct ValidRegion__area {
		ValidRegion__area_PR present;
		union ValidRegion__area_u {
			ShapePointSet_t	 shapePointSet;
			Circle_t	 circle;
			RegionPointSet_t	 regionPointSet;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} area;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ValidRegion_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ValidRegion;
extern asn_SEQUENCE_specifics_t asn_SPC_ValidRegion_specs_1;
extern asn_TYPE_member_t asn_MBR_ValidRegion_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ValidRegion_H_ */
#include <asn_internal.h>
