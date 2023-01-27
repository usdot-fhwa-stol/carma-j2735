/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "carma_complete_j2735.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_LayerType_H_
#define	_LayerType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LayerType {
	LayerType_none	= 0,
	LayerType_mixedContent	= 1,
	LayerType_generalMapData	= 2,
	LayerType_intersectionData	= 3,
	LayerType_curveData	= 4,
	LayerType_roadwaySectionData	= 5,
	LayerType_parkingAreaData	= 6,
	LayerType_sharedLaneData	= 7
	/*
	 * Enumeration is extensible
	 */
} e_LayerType;

/* LayerType */
typedef long	 LayerType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LayerType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LayerType;
extern const asn_INTEGER_specifics_t asn_SPC_LayerType_specs_1;
asn_struct_free_f LayerType_free;
asn_struct_print_f LayerType_print;
asn_constr_check_f LayerType_constraint;
ber_type_decoder_f LayerType_decode_ber;
der_type_encoder_f LayerType_encode_der;
xer_type_decoder_f LayerType_decode_xer;
xer_type_encoder_f LayerType_encode_xer;
oer_type_decoder_f LayerType_decode_oer;
oer_type_encoder_f LayerType_encode_oer;
per_type_decoder_f LayerType_decode_uper;
per_type_encoder_f LayerType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _LayerType_H_ */
#include <asn_internal.h>
