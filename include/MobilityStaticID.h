/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "carma_complete_j2735.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_MobilityStaticID_H_
#define	_MobilityStaticID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <IA5String.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MobilityStaticID */
typedef IA5String_t	 MobilityStaticID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_MobilityStaticID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_MobilityStaticID;
asn_struct_free_f MobilityStaticID_free;
asn_struct_print_f MobilityStaticID_print;
asn_constr_check_f MobilityStaticID_constraint;
ber_type_decoder_f MobilityStaticID_decode_ber;
der_type_encoder_f MobilityStaticID_encode_der;
xer_type_decoder_f MobilityStaticID_decode_xer;
xer_type_encoder_f MobilityStaticID_encode_xer;
oer_type_decoder_f MobilityStaticID_decode_oer;
oer_type_encoder_f MobilityStaticID_encode_oer;
per_type_decoder_f MobilityStaticID_decode_uper;
per_type_encoder_f MobilityStaticID_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MobilityStaticID_H_ */
#include <asn_internal.h>
