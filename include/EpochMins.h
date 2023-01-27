/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "carma_complete_j2735.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_EpochMins_H_
#define	_EpochMins_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>

#ifdef __cplusplus
extern "C" {
#endif

/* EpochMins */
typedef INTEGER_t	 EpochMins_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_EpochMins_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_EpochMins;
asn_struct_free_f EpochMins_free;
asn_struct_print_f EpochMins_print;
asn_constr_check_f EpochMins_constraint;
ber_type_decoder_f EpochMins_decode_ber;
der_type_encoder_f EpochMins_encode_der;
xer_type_decoder_f EpochMins_decode_xer;
xer_type_encoder_f EpochMins_encode_xer;
oer_type_decoder_f EpochMins_decode_oer;
oer_type_encoder_f EpochMins_encode_oer;
per_type_decoder_f EpochMins_decode_uper;
per_type_encoder_f EpochMins_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _EpochMins_H_ */
#include <asn_internal.h>
