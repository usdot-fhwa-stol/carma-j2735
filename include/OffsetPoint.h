/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "carma_complete_j2735.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_OffsetPoint_H_
#define	_OffsetPoint_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* OffsetPoint */
typedef struct OffsetPoint {
	long	 deltax;
	long	 deltay;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OffsetPoint_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OffsetPoint;
extern asn_SEQUENCE_specifics_t asn_SPC_OffsetPoint_specs_1;
extern asn_TYPE_member_t asn_MBR_OffsetPoint_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _OffsetPoint_H_ */
#include <asn_internal.h>
