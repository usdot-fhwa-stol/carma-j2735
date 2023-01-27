/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "carma_complete_j2735.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_TrafficControlVehClass_H_
#define	_TrafficControlVehClass_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TrafficControlVehClass {
	TrafficControlVehClass_any	= 0,
	TrafficControlVehClass_pedestrian	= 1,
	TrafficControlVehClass_bicycle	= 2,
	TrafficControlVehClass_micromobile	= 3,
	TrafficControlVehClass_motorcycle	= 4,
	TrafficControlVehClass_passenger_car	= 5,
	TrafficControlVehClass_light_truck_van	= 6,
	TrafficControlVehClass_bus	= 7,
	TrafficControlVehClass_two_axle_six_tire_single_unit_truck	= 8,
	TrafficControlVehClass_three_axle_single_unit_truck	= 9,
	TrafficControlVehClass_four_or_more_axle_single_unit_truck	= 10,
	TrafficControlVehClass_four_or_fewer_axle_single_trailer_truck	= 11,
	TrafficControlVehClass_five_axle_single_trailer_truck	= 12,
	TrafficControlVehClass_six_or_more_axle_single_trailer_truck	= 13,
	TrafficControlVehClass_five_or_fewer_axle_multi_trailer_truck	= 14,
	TrafficControlVehClass_six_axle_multi_trailer_truck	= 15,
	TrafficControlVehClass_seven_or_more_axle_multi_trailer_truck	= 16,
	TrafficControlVehClass_rail	= 17,
	TrafficControlVehClass_unclassified	= 18
	/*
	 * Enumeration is extensible
	 */
} e_TrafficControlVehClass;

/* TrafficControlVehClass */
typedef long	 TrafficControlVehClass_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TrafficControlVehClass_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TrafficControlVehClass;
extern const asn_INTEGER_specifics_t asn_SPC_TrafficControlVehClass_specs_1;
asn_struct_free_f TrafficControlVehClass_free;
asn_struct_print_f TrafficControlVehClass_print;
asn_constr_check_f TrafficControlVehClass_constraint;
ber_type_decoder_f TrafficControlVehClass_decode_ber;
der_type_encoder_f TrafficControlVehClass_encode_der;
xer_type_decoder_f TrafficControlVehClass_decode_xer;
xer_type_encoder_f TrafficControlVehClass_encode_xer;
oer_type_decoder_f TrafficControlVehClass_decode_oer;
oer_type_encoder_f TrafficControlVehClass_encode_oer;
per_type_decoder_f TrafficControlVehClass_decode_uper;
per_type_encoder_f TrafficControlVehClass_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TrafficControlVehClass_H_ */
#include <asn_internal.h>
