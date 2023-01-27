/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "carma_complete_j2735.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#include "TrafficControlVehClass.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_TrafficControlVehClass_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_TrafficControlVehClass_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  5,  5,  0,  18 }	/* (0..18,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_TrafficControlVehClass_value2enum_1[] = {
	{ 0,	3,	"any" },
	{ 1,	10,	"pedestrian" },
	{ 2,	7,	"bicycle" },
	{ 3,	11,	"micromobile" },
	{ 4,	10,	"motorcycle" },
	{ 5,	13,	"passenger-car" },
	{ 6,	15,	"light-truck-van" },
	{ 7,	3,	"bus" },
	{ 8,	35,	"two-axle-six-tire-single-unit-truck" },
	{ 9,	28,	"three-axle-single-unit-truck" },
	{ 10,	35,	"four-or-more-axle-single-unit-truck" },
	{ 11,	39,	"four-or-fewer-axle-single-trailer-truck" },
	{ 12,	30,	"five-axle-single-trailer-truck" },
	{ 13,	37,	"six-or-more-axle-single-trailer-truck" },
	{ 14,	38,	"five-or-fewer-axle-multi-trailer-truck" },
	{ 15,	28,	"six-axle-multi-trailer-truck" },
	{ 16,	38,	"seven-or-more-axle-multi-trailer-truck" },
	{ 17,	4,	"rail" },
	{ 18,	12,	"unclassified" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_TrafficControlVehClass_enum2value_1[] = {
	0,	/* any(0) */
	2,	/* bicycle(2) */
	7,	/* bus(7) */
	12,	/* five-axle-single-trailer-truck(12) */
	14,	/* five-or-fewer-axle-multi-trailer-truck(14) */
	11,	/* four-or-fewer-axle-single-trailer-truck(11) */
	10,	/* four-or-more-axle-single-unit-truck(10) */
	6,	/* light-truck-van(6) */
	3,	/* micromobile(3) */
	4,	/* motorcycle(4) */
	5,	/* passenger-car(5) */
	1,	/* pedestrian(1) */
	17,	/* rail(17) */
	16,	/* seven-or-more-axle-multi-trailer-truck(16) */
	15,	/* six-axle-multi-trailer-truck(15) */
	13,	/* six-or-more-axle-single-trailer-truck(13) */
	9,	/* three-axle-single-unit-truck(9) */
	8,	/* two-axle-six-tire-single-unit-truck(8) */
	18	/* unclassified(18) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_TrafficControlVehClass_specs_1 = {
	asn_MAP_TrafficControlVehClass_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_TrafficControlVehClass_enum2value_1,	/* N => "tag"; sorted by N */
	19,	/* Number of elements in the maps */
	20,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_TrafficControlVehClass_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_TrafficControlVehClass = {
	"TrafficControlVehClass",
	"TrafficControlVehClass",
	&asn_OP_NativeEnumerated,
	asn_DEF_TrafficControlVehClass_tags_1,
	sizeof(asn_DEF_TrafficControlVehClass_tags_1)
		/sizeof(asn_DEF_TrafficControlVehClass_tags_1[0]), /* 1 */
	asn_DEF_TrafficControlVehClass_tags_1,	/* Same as above */
	sizeof(asn_DEF_TrafficControlVehClass_tags_1)
		/sizeof(asn_DEF_TrafficControlVehClass_tags_1[0]), /* 1 */
	{ &asn_OER_type_TrafficControlVehClass_constr_1, &asn_PER_type_TrafficControlVehClass_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_TrafficControlVehClass_specs_1	/* Additional specs */
};

